
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zero ;
typedef scalar_t__ u_int ;
typedef int timeout ;
struct timeval {int tv_sec; int tv_usec; } ;
struct strioctl {int ic_len; char* ic_dp; int ic_cmd; int ic_timout; } ;
struct TYPE_4__ {int timeout; scalar_t__ promisc; scalar_t__ immediate; } ;
struct TYPE_5__ {int errbuf; int fd; TYPE_1__ opt; } ;
typedef TYPE_2__ pcap_t ;
typedef int flags ;
typedef int bpf_u_int32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_11)
{
 bpf_u_int32 VAR_12;
 struct strioctl VAR_13;
 u_int VAR_14 = 0;
 struct timeval VAR_15;

 if (VAR_11->opt.immediate) {




  VAR_13.ic_cmd = VAR_2;
  VAR_13.ic_len = sizeof(VAR_14);
  VAR_13.ic_dp = (char *)&VAR_14;
  if (FUNC_0(VAR_11->fd, VAR_1, (char *)&VAR_13) < 0) {
   FUNC_1(VAR_11->errbuf, VAR_9,
       VAR_10, "NIOCSCHUNK");
   return (-1);
  }
 }
 VAR_13.ic_timout = VAR_0;
 if (VAR_11->opt.timeout != 0) {
  VAR_15.tv_sec = VAR_11->opt.timeout / 1000;
  VAR_15.tv_usec = (VAR_11->opt.timeout * 1000) % 1000000;
  VAR_13.ic_cmd = VAR_4;
  VAR_13.ic_len = sizeof(VAR_15);
  VAR_13.ic_dp = (char *)&VAR_15;
  if (FUNC_0(VAR_11->fd, VAR_1, (char *)&VAR_13) < 0) {
   FUNC_1(VAR_11->errbuf, VAR_9,
       VAR_10, "NIOCSTIME");
   return (-1);
  }
 }
 VAR_12 = VAR_8 | VAR_6 | VAR_5;
 if (VAR_11->opt.promisc)
  VAR_12 |= VAR_7;
 VAR_13.ic_cmd = VAR_3;
 VAR_13.ic_len = sizeof(VAR_12);
 VAR_13.ic_dp = (char *)&VAR_12;
 if (FUNC_0(VAR_11->fd, VAR_1, (char *)&VAR_13) < 0) {
  FUNC_1(VAR_11->errbuf, VAR_9,
      VAR_10, "NIOCSFLAGS");
  return (-1);
 }
 return (0);
}

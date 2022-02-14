
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int tv_sec; int tv_usec; } ;
struct nit_ioc {int nioc_bufalign; scalar_t__ nioc_bufspace; int nioc_flags; TYPE_1__ nioc_timeout; scalar_t__ nioc_chunksize; scalar_t__ nioc_bufoffset; int nioc_snaplen; int nioc_typetomatch; } ;
struct TYPE_6__ {scalar_t__ buffer_size; int timeout; scalar_t__ promisc; scalar_t__ immediate; } ;
struct TYPE_7__ {int errbuf; int fd; TYPE_2__ opt; int snapshot; } ;
typedef TYPE_3__ pcap_t ;
typedef int nioc ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (int ,int ,struct nit_ioc*) ;
 int FUNC_1 (struct nit_ioc*,int ,int) ;
 int FUNC_2 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_8)
{
 struct nit_ioc VAR_9;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.nioc_typetomatch = VAR_4;
 VAR_9.nioc_snaplen = VAR_8->snapshot;
 VAR_9.nioc_bufalign = sizeof(int);
 VAR_9.nioc_bufoffset = 0;

 if (VAR_8->opt.buffer_size != 0)
  VAR_9.nioc_bufspace = VAR_8->opt.buffer_size;
 else {

  VAR_9.nioc_bufspace = VAR_0;
 }

 if (VAR_8->opt.immediate) {





  VAR_9.nioc_chunksize = 0;
 } else
  VAR_9.nioc_chunksize = VAR_1;
 if (VAR_8->opt.timeout != 0) {
  VAR_9.nioc_flags |= VAR_3;
  VAR_9.nioc_timeout.tv_sec = VAR_8->opt.timeout / 1000;
  VAR_9.nioc_timeout.tv_usec = (VAR_8->opt.timeout * 1000) % 1000000;
 }
 if (VAR_8->opt.promisc)
  VAR_9.nioc_flags |= VAR_2;

 if (FUNC_0(VAR_8->fd, VAR_6, &VAR_9) < 0) {
  FUNC_2(VAR_8->errbuf, VAR_5,
      VAR_7, "SIOCSNIT");
  return (-1);
 }
 return (0);
}

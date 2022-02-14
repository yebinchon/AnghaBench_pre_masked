
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_ifdrop; int ps_drop; int ps_recv; } ;
struct bpf_stat {int bs_drop; int bs_recv; } ;
struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;
typedef int caddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,char*) ;

__attribute__((used)) static int
FUNC_2(pcap_t *VAR_4, struct pcap_stat *VAR_5)
{
 struct bpf_stat VAR_6;
 if (FUNC_0(VAR_4->fd, VAR_0, (caddr_t)&VAR_6) < 0) {
  FUNC_1(VAR_4->errbuf, VAR_1,
      VAR_3, "BIOCGSTATS");
  return (VAR_2);
 }

 VAR_5->ps_recv = VAR_6.bs_recv;
 VAR_5->ps_drop = VAR_6.bs_drop;
 VAR_5->ps_ifdrop = 0;
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ ds_sbdrops; scalar_t__ ds_ifdrops; } ;
struct TYPE_5__ {scalar_t__ ss_sbdrops; scalar_t__ ss_ifdrops; } ;
struct rawstats {TYPE_2__ rs_drain; TYPE_1__ rs_snoop; } ;
struct pcap_stat {scalar_t__ ps_drop; } ;
struct pcap_snoop {struct pcap_stat stat; } ;
struct TYPE_7__ {int errbuf; int fd; struct pcap_snoop* priv; } ;
typedef TYPE_3__ pcap_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (struct rawstats*,int ,int) ;
 int FUNC_2 (int ,int,int ,char*) ;

__attribute__((used)) static int
FUNC_3(pcap_t *VAR_2, struct pcap_stat *VAR_3)
{
 struct pcap_snoop *VAR_4 = VAR_2->priv;
 register struct rawstats *VAR_5;
 struct rawstats VAR_6;

 VAR_5 = &VAR_6;
 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 if (FUNC_0(VAR_2->fd, VAR_0, (char *)VAR_5) < 0) {
  FUNC_2(VAR_2->errbuf, sizeof(VAR_2->errbuf),
      VAR_1, "SIOCRAWSTATS");
  return (-1);
 }
 VAR_4->stat.ps_drop =
     VAR_5->rs_snoop.ss_ifdrops + VAR_5->rs_snoop.ss_sbdrops +
     VAR_5->rs_drain.ds_ifdrops + VAR_5->rs_drain.ds_sbdrops;






 *VAR_3 = VAR_4->stat;
 return (0);
}

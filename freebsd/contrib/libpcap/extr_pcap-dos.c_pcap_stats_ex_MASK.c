
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat_ex {int dummy; } ;
struct device {int (* get_stats ) (struct device*) ;int name; } ;
struct TYPE_3__ {int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int VAR_0 ;
 struct device* FUNC_0 (int ) ;
 int FUNC_1 (struct pcap_stat_ex*,int ,int) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct device*) ;

int FUNC_5 (pcap_t *VAR_1, struct pcap_stat_ex *VAR_2)
{
  struct device *VAR_3 = VAR_1 ? FUNC_0 (VAR_1->fd) : ((void*)0);

  if (!VAR_3 || !VAR_3->get_stats)
  {
    FUNC_2 (VAR_1->errbuf, "detailed device statistics not available",
             VAR_0);
    return (-1);
  }

  if (!FUNC_3(VAR_3->name,"pkt",3))
  {
    FUNC_2 (VAR_1->errbuf, "pktdrvr doesn't have detailed statistics",
             VAR_0);
    return (-1);
  }
  FUNC_1 (VAR_2, (*VAR_3->get_stats)(VAR_3), sizeof(*VAR_2));
  return (0);
}

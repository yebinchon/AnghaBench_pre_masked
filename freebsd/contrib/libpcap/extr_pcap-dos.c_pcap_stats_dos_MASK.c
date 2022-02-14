
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct pcap_stat {scalar_t__ ps_ifdrop; int ps_drop; int ps_recv; } ;
struct pcap_dos {struct pcap_stat stat; } ;
struct net_device_stats {scalar_t__ rx_errors; scalar_t__ rx_dropped; scalar_t__ rx_missed_errors; int rx_packets; } ;
struct device {struct net_device_stats* (* get_stats ) (struct device*) ;} ;
struct TYPE_3__ {struct pcap_dos* priv; int errbuf; int fd; } ;
typedef TYPE_1__ pcap_t ;


 int FUNC_0 () ;
 struct device* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct net_device_stats* FUNC_3 (struct device*) ;

__attribute__((used)) static int FUNC_4 (pcap_t *VAR_0, struct pcap_stat *VAR_1)
{
  struct net_device_stats *VAR_2;
  struct pcap_dos *VAR_3;
  struct device *VAR_4 = VAR_0 ? FUNC_1(VAR_0->fd) : ((void*)0);

  if (!VAR_4)
  {
    FUNC_2 (VAR_0->errbuf, "illegal pcap handle");
    return (-1);
  }

  if (!VAR_4->get_stats || (VAR_2 = (*VAR_4->get_stats)(VAR_4)) == ((void*)0))
  {
    FUNC_2 (VAR_0->errbuf, "device statistics not available");
    return (-1);
  }

  FUNC_0();

  VAR_3 = VAR_0->priv;
  VAR_3->stat.ps_recv = VAR_2->rx_packets;
  VAR_3->stat.ps_drop += VAR_2->rx_missed_errors;
  VAR_3->stat.ps_ifdrop = VAR_2->rx_dropped +
                         VAR_2->rx_errors;
  if (VAR_1)
     *VAR_1 = VAR_3->stat;

  return (0);
}

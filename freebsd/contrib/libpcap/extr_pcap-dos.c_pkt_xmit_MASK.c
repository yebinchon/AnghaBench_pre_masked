
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int tx_errors; } ;
struct device {scalar_t__ priv; } ;


 int FUNC_0 (void const*,int) ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_2 (struct device *VAR_1, const void *VAR_2, int VAR_3)
{
  struct net_device_stats *VAR_4 = (struct net_device_stats*) VAR_1->priv;

  if (VAR_0 > 0)
     FUNC_1 ("pcap_xmit\n");

  if (!FUNC_0(VAR_2,VAR_3))
  {
    VAR_4->tx_errors++;
    return (0);
  }
  return (VAR_3);
}

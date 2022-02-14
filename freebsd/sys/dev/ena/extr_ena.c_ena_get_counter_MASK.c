
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct ena_hw_stats {int rx_drops; int tx_bytes; int rx_bytes; int tx_packets; int rx_packets; } ;
struct ena_adapter {struct ena_hw_stats hw_stats; } ;
typedef int ift_counter ;
typedef int if_t ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 struct ena_adapter* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(if_t VAR_0, ift_counter VAR_1)
{
 struct ena_adapter *VAR_2;
 struct ena_hw_stats *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 VAR_3 = &VAR_2->hw_stats;

 switch (VAR_1) {
 case 131:
  return (FUNC_0(VAR_3->rx_packets));
 case 128:
  return (FUNC_0(VAR_3->tx_packets));
 case 132:
  return (FUNC_0(VAR_3->rx_bytes));
 case 129:
  return (FUNC_0(VAR_3->tx_bytes));
 case 130:
  return (FUNC_0(VAR_3->rx_drops));
 default:
  return (FUNC_1(VAR_0, VAR_1));
 }
}

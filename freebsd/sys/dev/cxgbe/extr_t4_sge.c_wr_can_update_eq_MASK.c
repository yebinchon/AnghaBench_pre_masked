
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fw_eth_tx_pkts_wr {int op_pkd; } ;







 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static inline int
FUNC_2(struct fw_eth_tx_pkts_wr *VAR_0)
{

 switch (FUNC_0(FUNC_1(VAR_0->op_pkd))) {
 case 128:
 case 129:
 case 131:
 case 132:
 case 130:
  return (1);
 default:
  return (0);
 }
}

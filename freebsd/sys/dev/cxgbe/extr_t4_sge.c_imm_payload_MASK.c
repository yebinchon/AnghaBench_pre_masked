
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct fw_eth_tx_pkt_wr {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static inline u_int
FUNC_0(u_int VAR_1)
{
 u_int VAR_2;

 VAR_2 = VAR_1 * VAR_0 - sizeof(struct fw_eth_tx_pkt_wr) -
     sizeof(struct cpl_tx_pkt_core);

 return (VAR_2);
}

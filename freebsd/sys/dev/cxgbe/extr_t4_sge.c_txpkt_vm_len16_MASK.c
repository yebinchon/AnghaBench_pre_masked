
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ulptx_sgl {int dummy; } ;
struct fw_eth_tx_pkt_vm_wr {int dummy; } ;
struct cpl_tx_pkt_lso_core {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline u_int
FUNC_2(u_int VAR_0, u_int VAR_1)
{
 u_int VAR_2;

 FUNC_0(VAR_0 > 0);

 VAR_0--;
 VAR_2 = sizeof(struct fw_eth_tx_pkt_vm_wr) +
     sizeof(struct cpl_tx_pkt_core) +
     sizeof(struct ulptx_sgl) + 8 * ((3 * VAR_0) / 2 + (VAR_0 & 1));
 if (VAR_1)
  VAR_2 += sizeof(struct cpl_tx_pkt_lso_core);

 return (FUNC_1(VAR_2, 16));
}

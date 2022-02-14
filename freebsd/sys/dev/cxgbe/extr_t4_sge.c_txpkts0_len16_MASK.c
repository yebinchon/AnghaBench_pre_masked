
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ulptx_sgl {int dummy; } ;
struct ulptx_idata {int dummy; } ;
struct ulp_txpkt {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static inline u_int
FUNC_2(u_int VAR_0)
{
 u_int VAR_1;

 FUNC_0(VAR_0 > 0);

 VAR_0--;
 VAR_1 = sizeof(struct ulp_txpkt) + sizeof(struct ulptx_idata) +
     sizeof(struct cpl_tx_pkt_core) + sizeof(struct ulptx_sgl) +
     8 * ((3 * VAR_0) / 2 + (VAR_0 & 1));

 return (FUNC_1(VAR_1, 16));
}

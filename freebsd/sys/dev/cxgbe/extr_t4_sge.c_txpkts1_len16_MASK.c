
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct ulptx_sgl {int dummy; } ;
struct cpl_tx_pkt_core {int dummy; } ;


 int FUNC_0 (int,int) ;

__attribute__((used)) static inline u_int
FUNC_1(void)
{
 u_int VAR_0;

 VAR_0 = sizeof(struct cpl_tx_pkt_core) + sizeof(struct ulptx_sgl);

 return (FUNC_0(VAR_0, 16));
}

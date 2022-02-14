
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int req; int mask; int * lanai; } ;
typedef TYPE_1__ mxge_tx_ring_t ;
typedef int mcp_kreq_ether_send_t ;


 int FUNC_0 (int *,int *,int) ;
 int FUNC_1 () ;

__attribute__((used)) static inline void
FUNC_2(mxge_tx_ring_t *VAR_0,
       mcp_kreq_ether_send_t *VAR_1, int VAR_2)
{
 int VAR_3, VAR_4;
 VAR_4 = VAR_0->req;
 while (VAR_2 > 1) {
  VAR_2--;
  VAR_3 = (VAR_4 + VAR_2) & VAR_0->mask;
  FUNC_0(&VAR_0->lanai[VAR_3],
         &VAR_1[VAR_2], sizeof(*VAR_1));
  FUNC_1();
 }
}

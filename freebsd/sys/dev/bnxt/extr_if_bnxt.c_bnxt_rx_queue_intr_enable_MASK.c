
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint16_t ;
struct bnxt_softc {int * rx_cp_rings; } ;
typedef int if_ctx_t ;


 int FUNC_0 (int *) ;
 struct bnxt_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(if_ctx_t VAR_0, uint16_t VAR_1)
{
 struct bnxt_softc *VAR_2 = FUNC_1(VAR_0);

 FUNC_0(&VAR_2->rx_cp_rings[VAR_1]);
 return 0;
}

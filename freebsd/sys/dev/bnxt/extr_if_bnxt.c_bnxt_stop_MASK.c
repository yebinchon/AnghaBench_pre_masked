
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bnxt_softc {int def_cp_ring; } ;
typedef int if_ctx_t ;


 int FUNC_0 (struct bnxt_softc*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct bnxt_softc*) ;
 struct bnxt_softc* FUNC_3 (int ) ;

__attribute__((used)) static void
FUNC_4(if_ctx_t VAR_0)
{
 struct bnxt_softc *VAR_1 = FUNC_3(VAR_0);

 FUNC_1(&VAR_1->def_cp_ring);
 FUNC_2(VAR_1);
 FUNC_0(VAR_1);
 return;
}

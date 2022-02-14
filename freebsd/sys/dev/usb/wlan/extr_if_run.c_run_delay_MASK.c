
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct run_softc {int sc_mtx; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;

__attribute__((used)) static void
FUNC_3(struct run_softc *VAR_0, u_int VAR_1)
{
 FUNC_2(FUNC_1(&VAR_0->sc_mtx) ?
     &VAR_0->sc_mtx : ((void*)0), FUNC_0(VAR_1));
}

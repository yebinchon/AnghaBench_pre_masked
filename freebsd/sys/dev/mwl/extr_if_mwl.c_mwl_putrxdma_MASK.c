
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_nrxfree; int sc_rxfree; } ;
struct mwl_jumbo {int dummy; } ;


 struct mwl_jumbo* FUNC_0 (void*) ;
 int FUNC_1 (struct mwl_softc*) ;
 int FUNC_2 (struct mwl_softc*) ;
 int FUNC_3 (int *,struct mwl_jumbo*,int ) ;
 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_4(struct mwl_softc *VAR_1, void *VAR_2)
{
 struct mwl_jumbo *VAR_3;


 FUNC_1(VAR_1);
 VAR_3 = FUNC_0(VAR_2);
 FUNC_3(&VAR_1->sc_rxfree, VAR_3, VAR_0);
 VAR_1->sc_nrxfree++;
 FUNC_2(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mwl_softc {int sc_ageinterval; int sc_timer; int sc_mh; } ;


 int FUNC_0 (int *,int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct mwl_softc *VAR_2 = VAR_1;

 FUNC_1(VAR_2->sc_mh);
 if (VAR_2->sc_ageinterval != 0)
  FUNC_0(&VAR_2->sc_timer, VAR_2->sc_ageinterval*VAR_0);
}

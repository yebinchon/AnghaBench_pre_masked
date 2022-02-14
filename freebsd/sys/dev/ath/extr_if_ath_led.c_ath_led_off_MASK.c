
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ath_softc {int sc_ledoff; int sc_ledtimer; int sc_ledon; int sc_ledpin; int sc_ah; } ;


 int FUNC_0 (int ,int ,int) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ,int ,struct ath_softc*) ;

__attribute__((used)) static void
FUNC_2(void *VAR_1)
{
 struct ath_softc *VAR_2 = VAR_1;

 FUNC_0(VAR_2->sc_ah, VAR_2->sc_ledpin, !VAR_2->sc_ledon);
 FUNC_1(&VAR_2->sc_ledtimer, VAR_2->sc_ledoff, VAR_0, VAR_2);
}

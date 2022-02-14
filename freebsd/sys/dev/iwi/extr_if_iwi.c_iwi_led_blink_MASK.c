
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct iwi_softc {int sc_blinking; int sc_ledoff; int sc_ledtimer; int sc_ledpin; } ;


 int FUNC_0 (int *,int,int ,struct iwi_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwi_softc*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct iwi_softc*,int ) ;

__attribute__((used)) static void
FUNC_4(struct iwi_softc *VAR_1, int VAR_2, int VAR_3)
{
 uint32_t VAR_4;

 VAR_4 = FUNC_1(VAR_1);
 VAR_4 |= VAR_1->sc_ledpin;
 FUNC_3(VAR_1, FUNC_2(VAR_4));
 VAR_1->sc_blinking = 1;
 VAR_1->sc_ledoff = VAR_3;
 FUNC_0(&VAR_1->sc_ledtimer, VAR_2, VAR_0, VAR_1);
}

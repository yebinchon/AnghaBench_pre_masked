
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct g_keyboard_softc {int sc_callout; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int,int *,struct g_keyboard_softc*) ;

__attribute__((used)) static void
FUNC_2(struct g_keyboard_softc *VAR_2)
{
 int VAR_3 = VAR_0;

 if (VAR_3 <= 0)
  VAR_3 = 1;
 else if (VAR_3 > 1023)
  VAR_3 = 1023;

 VAR_3 = FUNC_0(VAR_3);

 FUNC_1(&VAR_2->sc_callout, VAR_3, &VAR_1, VAR_2);
}

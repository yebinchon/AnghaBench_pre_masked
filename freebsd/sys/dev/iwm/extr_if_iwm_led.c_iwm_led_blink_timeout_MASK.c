
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwm_softc {scalar_t__ sc_attached; int sc_led_blink_to; } ;


 int FUNC_0 (int *,int,void (*) (void*),struct iwm_softc*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwm_softc*) ;
 int FUNC_2 (struct iwm_softc*) ;
 scalar_t__ FUNC_3 (struct iwm_softc*) ;

__attribute__((used)) static void
FUNC_4(void *VAR_1)
{
 struct iwm_softc *VAR_2 = VAR_1;

 if (VAR_2->sc_attached == 0)
  return;

 if (FUNC_3(VAR_2))
  FUNC_1(VAR_2);
 else
  FUNC_2(VAR_2);

 FUNC_0(&VAR_2->sc_led_blink_to, (200 * VAR_0) / 1000,
     FUNC_4, VAR_2);
}

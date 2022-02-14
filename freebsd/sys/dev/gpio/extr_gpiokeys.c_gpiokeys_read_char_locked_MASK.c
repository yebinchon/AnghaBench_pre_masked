
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct gpiokeys_softc {scalar_t__ sc_mode; int sc_accents; int sc_state; } ;
struct TYPE_5__ {int kb_count; struct gpiokeys_softc* kb_data; } ;
typedef TYPE_1__ keyboard_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_3 (struct gpiokeys_softc*,int) ;

__attribute__((used)) static uint32_t
FUNC_4(keyboard_t *VAR_5, int VAR_6)
{
 struct gpiokeys_softc *VAR_7 = VAR_5->kb_data;
 uint32_t VAR_8;
 uint32_t VAR_9;

 if (!FUNC_0(VAR_5))
  return (VAR_3);

next_code:



 VAR_9 = FUNC_3(VAR_7, (VAR_6 == VAR_0) ? 0 : 1);
 ++VAR_5->kb_count;


 if (VAR_7->sc_mode == VAR_2) {
  return (VAR_9);
 }




 if (VAR_7->sc_mode == VAR_1) {
  return (VAR_9);
 }


 VAR_8 = FUNC_2(VAR_5, FUNC_1(VAR_9),
     (VAR_9 & VAR_4),
     &VAR_7->sc_state, &VAR_7->sc_accents);
 if (VAR_8 == VAR_3) {
  goto next_code;
 }

 return (VAR_8);
}

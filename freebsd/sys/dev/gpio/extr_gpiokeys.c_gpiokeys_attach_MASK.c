
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {void* kb_data; } ;
struct gpiokeys_softc {size_t sc_total_keys; int * sc_keys; int sc_fkeymap; int sc_accmap; int sc_keymap; int sc_mode; TYPE_1__ sc_kbd; int sc_dev; } ;
struct gpiokey {int dummy; } ;
typedef int phandle_t ;
typedef TYPE_1__ keyboard_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct gpiokeys_softc*) ;
 int FUNC_1 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (int) ;
 int FUNC_6 (int,char*) ;
 int FUNC_7 (int) ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct gpiokeys_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*,int) ;
 int FUNC_11 (struct gpiokeys_softc*,int,int *) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (TYPE_1__*) ;
 scalar_t__ FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*,int ,int ,int,int ,int ,int ) ;
 scalar_t__ FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,int *,int *,int ,int ) ;
 int VAR_10 ;
 int * FUNC_19 (int,int ,int) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int
FUNC_21(device_t VAR_11)
{
 int VAR_12;
 struct gpiokeys_softc *VAR_13;
 keyboard_t *VAR_14;
 phandle_t VAR_15, VAR_16;
 int VAR_17;

 if ((VAR_15 = FUNC_20(VAR_11)) == -1)
  return (VAR_0);

 VAR_13 = FUNC_8(VAR_11);
 VAR_13->sc_dev = VAR_11;
 VAR_14 = &VAR_13->sc_kbd;

 FUNC_0(VAR_13);
 VAR_12 = FUNC_9(VAR_11);
 FUNC_16(VAR_14, VAR_2, VAR_3, VAR_12, 0, 0, 0);

 VAR_14->kb_data = (void *)VAR_13;
 VAR_13->sc_mode = VAR_4;

 VAR_13->sc_keymap = VAR_10;
 VAR_13->sc_accmap = VAR_8;

 FUNC_18(VAR_14, &VAR_13->sc_keymap, &VAR_13->sc_accmap,
     VAR_13->sc_fkeymap, VAR_1);

 FUNC_2(VAR_14);

 FUNC_12(VAR_14);

 FUNC_4(VAR_14);

 FUNC_3(VAR_14);

 if (FUNC_17(VAR_14) < 0) {
  goto detach;
 }

 FUNC_1(VAR_14);

 FUNC_14(VAR_14);







 if (VAR_9) {
  FUNC_10(VAR_14, 1);
 }

 VAR_17 = 0;


 for (VAR_16 = FUNC_5(VAR_15); VAR_16 != 0; VAR_16 = FUNC_7(VAR_16)) {
  if (!FUNC_6(VAR_16, "gpios"))
   continue;
  VAR_17++;
 }

 if (VAR_17) {
  VAR_13->sc_keys = FUNC_19(sizeof(struct gpiokey) * VAR_17,
      VAR_5, VAR_6 | VAR_7);

  VAR_13->sc_total_keys = 0;

  for (VAR_16 = FUNC_5(VAR_15); VAR_16 != 0; VAR_16 = FUNC_7(VAR_16)) {
   if (!FUNC_6(VAR_16, "gpios"))
    continue;
   FUNC_11(VAR_13, VAR_16 ,&VAR_13->sc_keys[VAR_13->sc_total_keys]);
   VAR_13->sc_total_keys++;
  }
 }

 return (0);

detach:
 FUNC_13(VAR_11);
 return (VAR_0);
}

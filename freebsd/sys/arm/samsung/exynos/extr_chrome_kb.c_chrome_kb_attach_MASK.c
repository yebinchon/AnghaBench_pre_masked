
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {void* kb_data; } ;
struct ckb_softc {int cols; int sc_repeat_callout; int * sc_fkeymap; int sc_accmap; int sc_keymap; scalar_t__* scan; scalar_t__* scan_local; TYPE_1__ sc_kbd; int gpio; int rows; int dev; int * gpio_dev; int * keymap; } ;
typedef TYPE_1__ keyboard_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,int ) ;
 struct ckb_softc* FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int * VAR_8 ;
 int FUNC_11 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*,int *,int *,int *,int) ;
 int VAR_9 ;
 void* FUNC_14 (int,int ,int ) ;
 int FUNC_15 (int ,int ,struct ckb_softc*) ;
 int FUNC_16 (struct ckb_softc*) ;

__attribute__((used)) static int
FUNC_17(device_t VAR_10)
{
 struct ckb_softc *VAR_11;
 keyboard_t *VAR_12;
 int VAR_13;
 int VAR_14;
 int VAR_15;

 VAR_11 = FUNC_8(VAR_10);

 VAR_11->dev = VAR_10;
 VAR_11->keymap = ((void*)0);

 if ((VAR_13 = FUNC_16(VAR_11)) != 0)
  return VAR_13;

 VAR_11->gpio_dev = FUNC_7(FUNC_6("gpio"), 0);
 if (VAR_11->gpio_dev == ((void*)0)) {
  FUNC_10(VAR_11->dev, "Can't find gpio device.\n");
  return (VAR_1);
 }






 FUNC_15(VAR_11->gpio, VAR_7, VAR_11);

 VAR_12 = &VAR_11->sc_kbd;
 VAR_14 = 0;

 VAR_11->scan_local = FUNC_14(VAR_11->cols, VAR_4, VAR_5);
 VAR_11->scan = FUNC_14(VAR_11->cols, VAR_4, VAR_5);

 for (VAR_15 = 0; VAR_15 < VAR_11->cols; VAR_15++) {
  VAR_11->scan_local[VAR_15] = 0;
  VAR_11->scan[VAR_15] = 0;
 }

 FUNC_11(VAR_12, VAR_2, VAR_3,
     FUNC_9(VAR_10), 0, 0, 0);
 VAR_12->kb_data = (void *)VAR_11;

 VAR_11->sc_keymap = VAR_9;
        VAR_11->sc_accmap = VAR_6;
 for (VAR_15 = 0; VAR_15 < VAR_0; VAR_15++) {
  VAR_11->sc_fkeymap[VAR_15] = VAR_8[VAR_15];
        }

 FUNC_13(VAR_12, &VAR_11->sc_keymap, &VAR_11->sc_accmap,
     VAR_11->sc_fkeymap, VAR_0);

 FUNC_1(VAR_12);
 FUNC_5(VAR_12);
 FUNC_3(VAR_12);

 FUNC_4(&VAR_11->sc_repeat_callout, 0);

 FUNC_2(VAR_12);

 if (FUNC_12(VAR_12) < 0) {
  return (VAR_1);
 }
 FUNC_0(VAR_12);

 return (0);
}

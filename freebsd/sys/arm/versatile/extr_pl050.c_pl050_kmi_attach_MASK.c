
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_12__ {void* kb_data; } ;
struct kmi_softc {int * sc_fkeymap; int sc_accmap; int sc_keymap; int * sc_irq_res; int sc_intr_hl; int * sc_mem_res; TYPE_1__ sc_kbd; int sc_dev; } ;
typedef TYPE_1__ keyboard_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 void* FUNC_4 (int ,int ,int*,int ) ;
 int FUNC_5 (int ,int ,int,int *) ;
 scalar_t__ FUNC_6 (int ,int *,int ,int *,int ,struct kmi_softc*,int *) ;
 struct kmi_softc* FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ,char*) ;
 int * VAR_15 ;
 int FUNC_10 (TYPE_1__*,scalar_t__) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int ,int ,int ,int ,int ) ;
 scalar_t__ FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*,int *,int *,int *,int) ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_15 (TYPE_1__*) ;
 int VAR_18 ;
 int FUNC_16 (struct kmi_softc*,int ) ;
 int FUNC_17 (struct kmi_softc*,int ,int) ;

__attribute__((used)) static int
FUNC_18(device_t VAR_19)
{
 struct kmi_softc *VAR_20 = FUNC_7(VAR_19);
 keyboard_t *VAR_21;
 int VAR_22;
 int VAR_23;
 uint32_t VAR_24;

 VAR_20->sc_dev = VAR_19;
 VAR_21 = &VAR_20->sc_kbd;
 VAR_22 = 0;

 VAR_20->sc_mem_res = FUNC_4(VAR_19, VAR_12, &VAR_22, VAR_9);
 if (VAR_20->sc_mem_res == ((void*)0)) {
  FUNC_9(VAR_19, "could not allocate memory resource\n");
  return (VAR_0);
 }


 VAR_20->sc_irq_res = FUNC_4(VAR_19, VAR_11, &VAR_22, VAR_9);
 if (VAR_20->sc_irq_res == ((void*)0)) {
  FUNC_9(VAR_19, "Error: could not allocate irq resources\n");
  return (VAR_0);
 }


 if (FUNC_6(VAR_19, VAR_20->sc_irq_res, VAR_1,
   ((void*)0), VAR_18, VAR_20,
   &VAR_20->sc_intr_hl) != 0) {
  FUNC_5(VAR_19, VAR_11, VAR_22,
   VAR_20->sc_irq_res);
  FUNC_9(VAR_19, "Unable to setup the clock irq handler.\n");
  return (VAR_0);
 }



 FUNC_17(VAR_20, VAR_3, VAR_4);

 FUNC_17(VAR_20, VAR_6, VAR_10);

 VAR_24 = FUNC_16(VAR_20, VAR_6);

 FUNC_17(VAR_20, VAR_6, 1);

 VAR_24 = FUNC_16(VAR_20, VAR_6);

 FUNC_17(VAR_20, VAR_3, VAR_4 | VAR_5);

 FUNC_12(VAR_21, VAR_7, VAR_2,
   FUNC_8(VAR_19), 0, 0, 0);
 VAR_21->kb_data = (void *)VAR_20;

 VAR_20->sc_keymap = VAR_16;
 VAR_20->sc_accmap = VAR_13;
 for (VAR_23 = 0; VAR_23 < VAR_8; VAR_23++) {
  VAR_20->sc_fkeymap[VAR_23] = VAR_15[VAR_23];
 }

 FUNC_14(VAR_21, &VAR_20->sc_keymap, &VAR_20->sc_accmap,
     VAR_20->sc_fkeymap, VAR_8);

 FUNC_1(VAR_21);
 FUNC_15(VAR_21);
 FUNC_3(VAR_21);

 FUNC_2(VAR_21);

 if (FUNC_13(VAR_21) < 0) {
  goto detach;
 }
 FUNC_0(VAR_21);







 if (VAR_14) {
  FUNC_10(VAR_21, VAR_14);
 }
 VAR_17 = 1;
 return (0);

detach:
 return (VAR_0);

}

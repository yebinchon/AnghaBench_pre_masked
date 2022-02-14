
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct asmc_softc {int sc_nfan; int * sc_sms_tq; int sc_mtx; int * sc_ioport; scalar_t__ sc_rid_port; int * sc_irq; scalar_t__ sc_rid_irq; int sc_cookie; int sc_sms_task; struct sysctl_oid* sc_sms_tree; struct sysctl_oid* sc_light_tree; struct sysctl_oid* sc_temp_tree; struct sysctl_oid** sc_fan_tree; struct asmc_model* sc_model; } ;
struct asmc_model {char** smc_tempnames; char** smc_tempdescs; int * smc_sms_z; int * smc_sms_y; int * smc_sms_x; int * smc_light_control; int * smc_light_right; int * smc_light_left; scalar_t__* smc_temps; int * smc_fan_targetspeed; int * smc_fan_maxspeed; int * smc_fan_minspeed; int * smc_fan_safespeed; int * smc_fan_speed; int * smc_fan_id; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
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
 void* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int,int *,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int *,int ,int ,struct asmc_softc*) ;
 int FUNC_4 (int ) ;
 struct asmc_model* FUNC_5 (int ) ;
 int VAR_16 ;
 int VAR_17 ;
 int * VAR_18 ;
 void* FUNC_6 (int ,int ,scalar_t__*,int ) ;
 int FUNC_7 (int ,int ,scalar_t__,int *) ;
 int FUNC_8 (int ,int *,int,int ,int *,int ,int *) ;
 int FUNC_9 (int ) ;
 struct asmc_softc* FUNC_10 (int ) ;
 struct sysctl_ctx_list* FUNC_11 (int ) ;
 struct sysctl_oid* FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,char*,int *,int ) ;
 int * FUNC_16 (char*,int ,int ,int **) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (int **,int,int ,char*,int ) ;
 int VAR_19 ;

__attribute__((used)) static int
FUNC_19(device_t VAR_20)
{
 int VAR_21, VAR_22;
 int VAR_23;
 char VAR_24[2];
 struct asmc_softc *VAR_25 = FUNC_10(VAR_20);
 struct sysctl_ctx_list *VAR_26;
 struct sysctl_oid *VAR_27;
 struct asmc_model *VAR_28;

 VAR_25->sc_ioport = FUNC_6(VAR_20, VAR_14,
     &VAR_25->sc_rid_port, VAR_13);
 if (VAR_25->sc_ioport == ((void*)0)) {
  FUNC_13(VAR_20, "unable to allocate IO port\n");
  return (VAR_5);
 }

 VAR_26 = FUNC_11(VAR_20);
 VAR_27 = FUNC_12(VAR_20);

 VAR_28 = FUNC_5(VAR_20);

 FUNC_15(&VAR_25->sc_mtx, "asmc", ((void*)0), VAR_9);

 VAR_25->sc_model = VAR_28;
 FUNC_4(VAR_20);




 VAR_25->sc_fan_tree[0] = FUNC_0(VAR_26,
     FUNC_2(VAR_27), VAR_11, "fan",
     VAR_1, 0, "Fan Root Tree");

 for (VAR_21 = 1; VAR_21 <= VAR_25->sc_nfan; VAR_21++) {
  VAR_22 = VAR_21 - 1;
  VAR_24[0] = '0' + VAR_22;
  VAR_24[1] = 0;
  VAR_25->sc_fan_tree[VAR_21] = FUNC_0(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[0]),
      VAR_11, VAR_24, VAR_1, 0,
      "Fan Subtree");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "id", VAR_4 | VAR_1,
      VAR_20, VAR_22, VAR_28->smc_fan_id, "I",
      "Fan ID");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "speed", VAR_3 | VAR_1,
      VAR_20, VAR_22, VAR_28->smc_fan_speed, "I",
      "Fan speed in RPM");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "safespeed",
      VAR_3 | VAR_1,
      VAR_20, VAR_22, VAR_28->smc_fan_safespeed, "I",
      "Fan safe speed in RPM");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "minspeed",
      VAR_3 | VAR_2,
      VAR_20, VAR_22, VAR_28->smc_fan_minspeed, "I",
      "Fan minimum speed in RPM");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "maxspeed",
      VAR_3 | VAR_2,
      VAR_20, VAR_22, VAR_28->smc_fan_maxspeed, "I",
      "Fan maximum speed in RPM");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_fan_tree[VAR_21]),
      VAR_11, "targetspeed",
      VAR_3 | VAR_2,
      VAR_20, VAR_22, VAR_28->smc_fan_targetspeed, "I",
      "Fan target speed in RPM");
 }




 VAR_25->sc_temp_tree = FUNC_0(VAR_26,
     FUNC_2(VAR_27), VAR_11, "temp",
     VAR_1, 0, "Temperature sensors");

 for (VAR_21 = 0; VAR_28->smc_temps[VAR_21]; VAR_21++) {
  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_temp_tree),
      VAR_11, VAR_28->smc_tempnames[VAR_21],
      VAR_3 | VAR_1,
      VAR_20, VAR_21, VAR_18, "I",
      VAR_28->smc_tempdescs[VAR_21]);
 }




 if (VAR_28->smc_light_left) {
  VAR_25->sc_light_tree = FUNC_0(VAR_26,
      FUNC_2(VAR_27), VAR_11, "light",
      VAR_1, 0, "Keyboard backlight sensors");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_light_tree),
      VAR_11, "left", VAR_3 | VAR_1,
      VAR_20, 0, VAR_28->smc_light_left, "I",
      "Keyboard backlight left sensor");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_light_tree),
      VAR_11, "right", VAR_3 | VAR_1,
      VAR_20, 0, VAR_28->smc_light_right, "I",
      "Keyboard backlight right sensor");

  FUNC_1(VAR_26,
      FUNC_2(VAR_25->sc_light_tree),
      VAR_11, "control",
      VAR_3 | VAR_2 | VAR_0,
      VAR_20, 0, VAR_28->smc_light_control, "I",
      "Keyboard backlight brightness control");
 }

 if (VAR_28->smc_sms_x == ((void*)0))
  goto nosms;




 VAR_25->sc_sms_tree = FUNC_0(VAR_26,
     FUNC_2(VAR_27), VAR_11, "sms",
     VAR_1, 0, "Sudden Motion Sensor");

 FUNC_1(VAR_26,
     FUNC_2(VAR_25->sc_sms_tree),
     VAR_11, "x", VAR_3 | VAR_1,
     VAR_20, 0, VAR_28->smc_sms_x, "I",
     "Sudden Motion Sensor X value");

 FUNC_1(VAR_26,
     FUNC_2(VAR_25->sc_sms_tree),
     VAR_11, "y", VAR_3 | VAR_1,
     VAR_20, 0, VAR_28->smc_sms_y, "I",
     "Sudden Motion Sensor Y value");

 FUNC_1(VAR_26,
     FUNC_2(VAR_25->sc_sms_tree),
     VAR_11, "z", VAR_3 | VAR_1,
     VAR_20, 0, VAR_28->smc_sms_z, "I",
     "Sudden Motion Sensor Z value");
 VAR_25->sc_sms_tq = ((void*)0);
 FUNC_3(&VAR_25->sc_sms_task, 0, VAR_17, VAR_25);
 VAR_25->sc_sms_tq = FUNC_16("asmc_taskq", VAR_10,
     VAR_19, &VAR_25->sc_sms_tq);
 FUNC_18(&VAR_25->sc_sms_tq, 1, VAR_12, "%s sms taskq",
     FUNC_9(VAR_20));



 VAR_25->sc_rid_irq = 0;
 VAR_25->sc_irq = FUNC_6(VAR_20, VAR_15,
     &VAR_25->sc_rid_irq, VAR_13);
 if (VAR_25->sc_irq == ((void*)0)) {
  FUNC_13(VAR_20, "unable to allocate IRQ resource\n");
  VAR_23 = VAR_6;
  goto err2;
 }

 VAR_23 = FUNC_8(VAR_20, VAR_25->sc_irq,
           VAR_8 | VAR_7,
     VAR_16, ((void*)0),
     VAR_20, &VAR_25->sc_cookie);

 if (VAR_23) {
  FUNC_13(VAR_20, "unable to setup SMS IRQ\n");
  goto err1;
 }
nosms:
 return (0);
err1:
 FUNC_7(VAR_20, VAR_15, VAR_25->sc_rid_irq, VAR_25->sc_irq);
err2:
 FUNC_7(VAR_20, VAR_14, VAR_25->sc_rid_port,
     VAR_25->sc_ioport);
 FUNC_14(&VAR_25->sc_mtx);
 if (VAR_25->sc_sms_tq)
  FUNC_17(VAR_25->sc_sms_tq);

 return (VAR_23);
}

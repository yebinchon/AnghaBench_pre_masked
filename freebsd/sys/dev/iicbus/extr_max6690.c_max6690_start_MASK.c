
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct max6690_softc {int sc_nsensors; int enum_hook; TYPE_2__* sc_sensors; } ;
struct max6690_sensor {int dummy; } ;
typedef int device_t ;
struct TYPE_3__ {char* name; } ;
struct TYPE_4__ {int id; TYPE_1__ therm; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int,int ,char*,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 scalar_t__ VAR_6 ;
 int FUNC_3 (int *) ;
 struct max6690_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;
 int FUNC_7 (int ,char*,...) ;
 scalar_t__ FUNC_8 (char) ;
 TYPE_2__* FUNC_9 (int,int ,int) ;
 void* FUNC_10 (int ) ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (char*,char*,char*,char*) ;
 int FUNC_13 (char*) ;
 char FUNC_14 (char) ;

__attribute__((used)) static void
FUNC_15(void *VAR_8)
{
 struct max6690_softc *VAR_9;
 struct sysctl_oid *VAR_10, *VAR_11;
 struct sysctl_ctx_list *VAR_12;
 char VAR_13[40], VAR_14[32];
 int VAR_15, VAR_16;

 device_t VAR_17 = (device_t)VAR_8;

 VAR_9 = FUNC_4(VAR_17);

 VAR_9->sc_nsensors = 0;


 VAR_9->sc_nsensors = FUNC_10(VAR_17);

 FUNC_7(VAR_17, "%d sensors detected.\n", VAR_9->sc_nsensors);

 if (VAR_9->sc_nsensors == 0)
  FUNC_7(VAR_17, "WARNING: No MAX6690 sensors detected!\n");

 VAR_9->sc_sensors = FUNC_9 (VAR_9->sc_nsensors * sizeof(struct max6690_sensor),
     VAR_2, VAR_3 | VAR_4);

 VAR_12 = FUNC_5(VAR_17);
 VAR_11 = FUNC_0(VAR_12,
     FUNC_2(FUNC_6(VAR_17)), VAR_5, "sensor",
     VAR_0, 0, "MAX6690 Sensor Information");


 VAR_9->sc_nsensors = FUNC_10(VAR_17);


 for (VAR_15 = 0; VAR_15 < VAR_9->sc_nsensors; VAR_15++)
  FUNC_11(&VAR_9->sc_sensors[VAR_15].therm);


 for (VAR_15 = 0; VAR_15 < VAR_9->sc_nsensors; VAR_15++) {
  for (VAR_16 = 0; VAR_16 < FUNC_13(VAR_9->sc_sensors[VAR_15].therm.name); VAR_16++) {
   VAR_14[VAR_16] =
       FUNC_14(VAR_9->sc_sensors[VAR_15].therm.name[VAR_16]);
   if (FUNC_8(VAR_14[VAR_16]))
    VAR_14[VAR_16] = '_';
  }
  VAR_14[VAR_16] = 0;

  FUNC_12(VAR_13,"%s %s", VAR_9->sc_sensors[VAR_15].therm.name,
   "(C)");
  VAR_10 = FUNC_0(VAR_12, FUNC_2(VAR_11),
          VAR_5,
          VAR_14, VAR_0, 0,
          "Sensor Information");

  FUNC_1(VAR_12, FUNC_2(VAR_10), VAR_5, "temp",
    VAR_1 | VAR_0, VAR_17, VAR_15 % 2,
    VAR_7, "IK", VAR_13);

 }

 if (VAR_6) {
  FUNC_7(VAR_17, "Sensors\n");
  for (VAR_15 = 0; VAR_15 < VAR_9->sc_nsensors; VAR_15++) {
   FUNC_7(VAR_17, "Location : %s ID: %d\n",
          VAR_9->sc_sensors[VAR_15].therm.name,
          VAR_9->sc_sensors[VAR_15].id);
  }
 }

 FUNC_3(&VAR_9->enum_hook);
}

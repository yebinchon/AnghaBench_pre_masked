
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {char zone; char* name; int (* read ) (struct pmac_therm*) ;void* max_temp; void* target_temp; } ;
struct ds1775_softc {int enum_hook; TYPE_1__ sc_sensor; } ;
typedef int ssize_t ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_2 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_3 (struct sysctl_oid*) ;
 void* VAR_4 ;
 int FUNC_4 (int *) ;
 struct ds1775_softc* FUNC_5 (int ) ;
 struct sysctl_ctx_list* FUNC_6 (int ) ;
 struct sysctl_oid* FUNC_7 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_8 (char) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (char*,char*,char*,char*) ;
 int FUNC_12 (char*,char*) ;
 int FUNC_13 (char*) ;
 char FUNC_14 (char) ;

__attribute__((used)) static void
FUNC_15(void *VAR_7)
{
 phandle_t VAR_8;
 struct ds1775_softc *VAR_9;
 struct sysctl_oid *VAR_10, *VAR_11;
 struct sysctl_ctx_list *VAR_12;
 ssize_t VAR_13;
 int VAR_14;
 char VAR_15[40], VAR_16[40];

 device_t VAR_17 = (device_t)VAR_7;

 VAR_9 = FUNC_5(VAR_17);

 VAR_8 = FUNC_9(VAR_17);

 VAR_12 = FUNC_6(VAR_17);
 VAR_11 = FUNC_1(VAR_12,
     FUNC_3(FUNC_7(VAR_17)), VAR_3, "sensor",
     VAR_1, 0, "DS1775 Sensor Information");

 if (FUNC_0(VAR_8, "hwsensor-zone", &VAR_9->sc_sensor.zone,
         sizeof(int)) < 0)
  VAR_9->sc_sensor.zone = 0;

 VAR_13 = FUNC_0(VAR_8, "hwsensor-location", VAR_9->sc_sensor.name,
     sizeof(VAR_9->sc_sensor.name));

 if (VAR_13 == -1) {
  FUNC_12(VAR_15, "sensor");
 } else {
  for (VAR_14 = 0; VAR_14 < FUNC_13(VAR_9->sc_sensor.name); VAR_14++) {
   VAR_15[VAR_14] = FUNC_14(VAR_9->sc_sensor.name[VAR_14]);
   if (FUNC_8(VAR_15[VAR_14]))
    VAR_15[VAR_14] = '_';
  }
  VAR_15[VAR_14] = 0;
 }


 if (VAR_9->sc_sensor.zone == 0) {
  VAR_9->sc_sensor.target_temp = 500 + VAR_4;
  VAR_9->sc_sensor.max_temp = 600 + VAR_4;
 }
 else {
  VAR_9->sc_sensor.target_temp = 300 + VAR_4;
  VAR_9->sc_sensor.max_temp = 600 + VAR_4;
 }

 VAR_9->sc_sensor.read =
     (int (*)(struct pmac_therm *VAR_18))(VAR_5);
 FUNC_10(&VAR_9->sc_sensor);

 FUNC_11(VAR_16,"%s %s", VAR_9->sc_sensor.name, "(C)");
 VAR_10 = FUNC_1(VAR_12, FUNC_3(VAR_11),
         VAR_3, VAR_15, VAR_1, 0,
         "Sensor Information");
 FUNC_2(VAR_12, FUNC_3(VAR_10), VAR_3, "temp",
   VAR_2 | VAR_1 | VAR_0, VAR_17,
   0, VAR_6, "IK", VAR_16);

 FUNC_4(&VAR_9->enum_hook);
}

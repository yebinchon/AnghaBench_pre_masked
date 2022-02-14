
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_2__ {char zone; char* name; int (* read ) (struct pmac_therm*) ;void* max_temp; void* target_temp; } ;
struct ds1631_softc {int enum_hook; TYPE_1__ sc_sensor; } ;
typedef int ssize_t ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,char*,int) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_3 ;
 struct sysctl_oid* FUNC_3 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,char*) ;
 int FUNC_4 (struct sysctl_ctx_list*,int ,int ,char*,int,int ,int ,int ,char*,char*) ;
 int FUNC_5 (struct sysctl_oid*) ;
 void* VAR_4 ;
 int FUNC_6 (int *) ;
 struct ds1631_softc* FUNC_7 (int ) ;
 struct sysctl_ctx_list* FUNC_8 (int ) ;
 struct sysctl_oid* FUNC_9 (int ) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_10 (char) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (char*,char*,char*,char*) ;
 int FUNC_14 (char*,char*) ;
 int FUNC_15 (char*) ;
 char FUNC_16 (char) ;

__attribute__((used)) static void
FUNC_17(void *VAR_7)
{
 phandle_t VAR_8, VAR_9;
 struct ds1631_softc *VAR_10;
 struct sysctl_oid *VAR_11, *VAR_12;
 struct sysctl_ctx_list *VAR_13;
 ssize_t VAR_14;
 int VAR_15;
 char VAR_16[40], VAR_17[40];

 device_t VAR_18 = (device_t)VAR_7;

 VAR_10 = FUNC_7(VAR_18);

 VAR_8 = FUNC_11(VAR_18);

 VAR_13 = FUNC_8(VAR_18);
 VAR_12 = FUNC_3(VAR_13,
     FUNC_5(FUNC_9(VAR_18)), VAR_3, "sensor",
     VAR_1, 0, "DS1631 Sensor Information");

 if (FUNC_1(VAR_8, "hwsensor-zone", &VAR_10->sc_sensor.zone,
         sizeof(int)) < 0)
  VAR_10->sc_sensor.zone = 0;

 VAR_14 = FUNC_1(VAR_8, "hwsensor-location", VAR_10->sc_sensor.name,
     sizeof(VAR_10->sc_sensor.name));
 if (VAR_14 == -1) {




  for (VAR_9 = FUNC_0(VAR_8); VAR_9; VAR_9 = FUNC_2(VAR_9))
   VAR_14 = FUNC_1(VAR_9, "location", VAR_10->sc_sensor.name,
       sizeof(VAR_10->sc_sensor.name));
 }

 if (VAR_14 == -1) {
  FUNC_14(VAR_17, "sensor");
 } else {
  for (VAR_15 = 0; VAR_15 < FUNC_15(VAR_10->sc_sensor.name); VAR_15++) {
   VAR_17[VAR_15] = FUNC_16(VAR_10->sc_sensor.name[VAR_15]);
   if (FUNC_10(VAR_17[VAR_15]))
    VAR_17[VAR_15] = '_';
  }
  VAR_17[VAR_15] = 0;
 }


 if (VAR_10->sc_sensor.zone == 0) {
  VAR_10->sc_sensor.target_temp = 400 + VAR_4;
  VAR_10->sc_sensor.max_temp = 500 + VAR_4;
 } else {
  VAR_10->sc_sensor.target_temp = 300 + VAR_4;
  VAR_10->sc_sensor.max_temp = 500 + VAR_4;
 }

 VAR_10->sc_sensor.read =
     (int (*)(struct pmac_therm *VAR_19))(VAR_5);
 FUNC_12(&VAR_10->sc_sensor);

 FUNC_13(VAR_16,"%s %s", VAR_10->sc_sensor.name, "(C)");
 VAR_11 = FUNC_3(VAR_13, FUNC_5(VAR_12),
         VAR_3, VAR_17, VAR_1, 0,
         "Sensor Information");
 FUNC_4(VAR_13, FUNC_5(VAR_11), VAR_3, "temp",
   VAR_2 | VAR_1 | VAR_0, VAR_18,
   0, VAR_6, "IK", VAR_16);

 FUNC_6(&VAR_10->enum_hook);
}

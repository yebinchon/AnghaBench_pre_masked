
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct adt746x_softc {TYPE_1__* sc_sensors; } ;
typedef int sensid ;
typedef int sens_type ;
typedef int reg ;
typedef scalar_t__ phandle_t ;
typedef int device_t ;
struct TYPE_4__ {int* name; int zone; int (* read ) (struct pmac_therm*) ;void* max_temp; void* target_temp; } ;
struct TYPE_3__ {scalar_t__ type; int reg; int id; TYPE_2__ therm; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__,char*,...) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 void* VAR_3 ;
 scalar_t__ VAR_4 ;
 struct adt746x_softc* FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_5)
{
 phandle_t VAR_6, VAR_7;
 struct adt746x_softc *VAR_8;
 char VAR_9[32];
 int VAR_10 = 0, VAR_11, VAR_12;

 VAR_8 = FUNC_3(VAR_5);

 VAR_6 = FUNC_4(VAR_5);


 for (VAR_7 = FUNC_0(VAR_6); VAR_7 != 0; VAR_7 = FUNC_2(VAR_7)) {
  if (FUNC_1(VAR_7, "sensor-id", &VAR_12, sizeof(VAR_12)) == -1)
      continue;
  FUNC_1(VAR_7, "location", VAR_8->sc_sensors[VAR_10].therm.name, 32);
  FUNC_1(VAR_7, "device_type", VAR_9, sizeof(VAR_9));
  if (FUNC_6(VAR_9, "temperature") == 0)
   VAR_8->sc_sensors[VAR_10].type = VAR_1;
  else if (FUNC_6(VAR_9, "voltage") == 0)
   VAR_8->sc_sensors[VAR_10].type = VAR_2;
  else
   VAR_8->sc_sensors[VAR_10].type = VAR_0;
  FUNC_1(VAR_7, "reg", &VAR_11, sizeof(VAR_11));
  FUNC_1(VAR_7, "sensor-id", &VAR_12,
   sizeof(VAR_12));

  VAR_8->sc_sensors[VAR_10].reg = VAR_11;
  VAR_8->sc_sensors[VAR_10].id = VAR_12;
  FUNC_1(VAR_7, "zone", &VAR_8->sc_sensors[VAR_10].therm.zone,
   sizeof(VAR_8->sc_sensors[VAR_10].therm.zone));
  VAR_8->sc_sensors[VAR_10].dev = VAR_5;
  VAR_8->sc_sensors[VAR_10].therm.read =
      (int (*)(struct pmac_therm *))VAR_4;
  if (VAR_8->sc_sensors[VAR_10].type == VAR_1) {

      VAR_8->sc_sensors[VAR_10].therm.target_temp = 500 + VAR_3;
      VAR_8->sc_sensors[VAR_10].therm.max_temp = 800 + VAR_3;

      FUNC_5(&VAR_8->sc_sensors[VAR_10].therm);
  }
  VAR_10++;
 }

 return (VAR_10);
}

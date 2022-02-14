
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char u_int ;
typedef int type ;
struct ad7417_softc {TYPE_1__* sc_sensors; } ;
typedef int phandle_t ;
typedef int location ;
typedef int id ;
typedef int device_t ;
struct TYPE_4__ {char zone; int (* read ) (struct pmac_therm*) ;void* max_temp; void* target_temp; int name; } ;
struct TYPE_3__ {scalar_t__ type; char id; TYPE_2__ therm; int dev; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char*,int) ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct ad7417_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_2__*) ;
 scalar_t__ FUNC_4 (char*,char*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (char*) ;
 int * FUNC_7 (int ,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_5)
{
 phandle_t VAR_6;
 struct ad7417_softc *VAR_7;
 u_int VAR_8[10];
 char VAR_9[96];
 char VAR_10[32];
 int VAR_11 = 0, VAR_12, VAR_13 = 0, VAR_14, VAR_15 = 0;

 VAR_7 = FUNC_1(VAR_5);

 VAR_6 = FUNC_2(VAR_5);


 VAR_14 = FUNC_0(VAR_6, "hwsensor-location", VAR_9,
         sizeof(VAR_9));
 while (VAR_13 < VAR_14) {
  if (VAR_7->sc_sensors != ((void*)0))
   FUNC_5(VAR_7->sc_sensors[VAR_11].therm.name, VAR_9 + VAR_13);
  VAR_15 = FUNC_6(VAR_9 + VAR_13) + 1;
  VAR_13 += VAR_15;
  VAR_11++;
 }
 if (VAR_7->sc_sensors == ((void*)0))
  return (VAR_11);


 VAR_13 = 0;
 VAR_11 = 0;
 VAR_15 = 0;
 VAR_14 = FUNC_0(VAR_6, "hwsensor-type", VAR_10, sizeof(VAR_10));
 while (VAR_13 < VAR_14) {
  if (FUNC_4(VAR_10 + VAR_13, "temperature") == 0)
   VAR_7->sc_sensors[VAR_11].type = VAR_1;
  else
   VAR_7->sc_sensors[VAR_11].type = VAR_0;
  VAR_15 = FUNC_6(VAR_10 + VAR_13) + 1;
  VAR_13 += VAR_15;
  VAR_11++;
 }


 VAR_14 = FUNC_0(VAR_6, "hwsensor-id", VAR_8, sizeof(VAR_8));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_7->sc_sensors[VAR_12].id = VAR_8[VAR_12];


 VAR_14 = FUNC_0(VAR_6, "hwsensor-zone", VAR_8, sizeof(VAR_8));
 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++)
  VAR_7->sc_sensors[VAR_12].therm.zone = VAR_8[VAR_12];


 for (VAR_12 = 0; VAR_12 < VAR_11; VAR_12++) {
  VAR_7->sc_sensors[VAR_12].dev = VAR_5;


  if (FUNC_7(VAR_7->sc_sensors[VAR_12].therm.name, "DIODE TEMP")
      != ((void*)0)) {
   VAR_7->sc_sensors[VAR_12].type = VAR_1;
   VAR_7->sc_sensors[VAR_12].therm.read =
       (int (*)(struct pmac_therm *))(VAR_3);
  } else {
   VAR_7->sc_sensors[VAR_12].therm.read =
       (int (*)(struct pmac_therm *))(VAR_4);
  }

  if (VAR_7->sc_sensors[VAR_12].type != VAR_1)
   continue;


  VAR_7->sc_sensors[VAR_12].therm.target_temp = 500 + VAR_2;
  VAR_7->sc_sensors[VAR_12].therm.max_temp = 900 + VAR_2;

  FUNC_3(&VAR_7->sc_sensors[VAR_12].therm);
 }

 return (VAR_11);
}

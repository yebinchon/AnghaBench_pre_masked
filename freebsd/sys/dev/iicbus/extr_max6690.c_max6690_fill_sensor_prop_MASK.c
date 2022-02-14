
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct max6690_softc {TYPE_2__* sc_sensors; } ;
typedef int phandle_t ;
typedef int location ;
typedef int id ;
typedef int device_t ;
struct TYPE_3__ {int zone; int (* read ) (struct pmac_therm*) ;void* max_temp; void* target_temp; int name; } ;
struct TYPE_4__ {int id; TYPE_1__ therm; int dev; } ;


 int FUNC_0 (int ,char*,...) ;
 void* VAR_0 ;
 struct max6690_softc* FUNC_1 (int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static int
FUNC_5(device_t VAR_2)
{
 phandle_t VAR_3;
 struct max6690_softc *VAR_4;
 u_int VAR_5[8];
 char VAR_6[96];
 int VAR_7 = 0, VAR_8, VAR_9 = 0, VAR_10, VAR_11 = 0;

 VAR_4 = FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2);


 VAR_10 = FUNC_0(VAR_3, "hwsensor-location", VAR_6,
         sizeof(VAR_6));
 while (VAR_9 < VAR_10) {
  if (VAR_4->sc_sensors != ((void*)0))
   FUNC_3(VAR_4->sc_sensors[VAR_7].therm.name, VAR_6 + VAR_9);
  VAR_11 = FUNC_4(VAR_6 + VAR_9) + 1;
  VAR_9 += VAR_11;
  VAR_7++;
 }
 if (VAR_4->sc_sensors == ((void*)0))
  return (VAR_7);


 VAR_10 = FUNC_0(VAR_3, "hwsensor-id", VAR_5, sizeof(VAR_5));
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_4->sc_sensors[VAR_8].id = (VAR_5[VAR_8] & 0xf);


 VAR_10 = FUNC_0(VAR_3, "hwsensor-zone", VAR_5, sizeof(VAR_5));
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++)
  VAR_4->sc_sensors[VAR_8].therm.zone = VAR_5[VAR_8];


 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  VAR_4->sc_sensors[VAR_8].dev = VAR_2;

  VAR_4->sc_sensors[VAR_8].therm.target_temp = 400 + VAR_0;
  VAR_4->sc_sensors[VAR_8].therm.max_temp = 800 + VAR_0;

  VAR_4->sc_sensors[VAR_8].therm.read =
      (int (*)(struct pmac_therm *))(VAR_1);
 }

 return (VAR_7);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int thermostat ;
struct adm1030_softc {int sc_addr; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,char*,int *,int) ;
 struct adm1030_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (char const*,char*) ;

__attribute__((used)) static int
FUNC_8(device_t VAR_1)
{
 const char *VAR_2, *VAR_3;
 struct adm1030_softc *VAR_4;
 phandle_t VAR_5;
 phandle_t VAR_6;

 VAR_2 = FUNC_5(VAR_1);
 VAR_3 = FUNC_4(VAR_1);
 VAR_5 = FUNC_6(VAR_1);

 if (!VAR_2)
  return (VAR_0);

 if (FUNC_7(VAR_2, "fan") != 0 || FUNC_7(VAR_3, "adm1030") != 0)
  return (VAR_0);


 if (FUNC_0(VAR_5, "platform-getTemp", &VAR_6, sizeof(VAR_6)) < 0)
  return (VAR_0);

 VAR_4 = FUNC_1(VAR_1);
 VAR_4->sc_dev = VAR_1;
 VAR_4->sc_addr = FUNC_3(VAR_1);

 FUNC_2(VAR_1, "G4 MDD Fan driver");

 return (0);
}

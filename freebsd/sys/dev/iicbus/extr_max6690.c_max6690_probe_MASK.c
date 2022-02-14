
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct max6690_softc {int sc_addr; int sc_dev; } ;
typedef int device_t ;


 int VAR_0 ;
 struct max6690_softc* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int ) ;
 char* FUNC_3 (int ) ;
 char* FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (char const*,char*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_1)
{
 const char *VAR_2, *VAR_3;
 struct max6690_softc *VAR_4;

 VAR_2 = FUNC_4(VAR_1);
 VAR_3 = FUNC_3(VAR_1);

 if (!VAR_2)
  return (VAR_0);

 if (FUNC_5(VAR_2, "temp-monitor") != 0 ||
     FUNC_5(VAR_3, "max6690") != 0)
  return (VAR_0);

 VAR_4 = FUNC_0(VAR_1);
 VAR_4->sc_dev = VAR_1;
 VAR_4->sc_addr = FUNC_2(VAR_1);

 FUNC_1(VAR_1, "Temp-Monitor MAX6690");

 return (0);
}

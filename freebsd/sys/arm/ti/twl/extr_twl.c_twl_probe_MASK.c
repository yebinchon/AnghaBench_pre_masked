
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct twl_softc {int sc_type; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;




 struct twl_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*,int) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_1)
{
 phandle_t VAR_2;
 const char *VAR_3;
 int VAR_4, VAR_5;
 struct twl_softc *VAR_6;

 if ((VAR_3 = FUNC_3(VAR_1)) == ((void*)0))
  return (VAR_0);

 if ((VAR_2 = FUNC_4(VAR_1)) == 0)
  return (VAR_0);


 if ((VAR_4 = FUNC_0(VAR_2, "compatible")) <= 0)
  return (VAR_0);

 VAR_6 = FUNC_1(VAR_1);
 VAR_6->sc_dev = VAR_1;
 VAR_6->sc_type = 128;

 while (VAR_4 > 0) {
  if (FUNC_6(VAR_3, "ti,twl6030", 10) == 0)
   VAR_6->sc_type = 129;
  else if (FUNC_6(VAR_3, "ti,twl6025", 10) == 0)
   VAR_6->sc_type = 130;
  else if (FUNC_6(VAR_3, "ti,twl4030", 10) == 0)
   VAR_6->sc_type = 131;

  if (VAR_6->sc_type != 128)
   break;


  VAR_5 = FUNC_5(VAR_3) + 1;
  VAR_3 += VAR_5;
  VAR_4 -= VAR_5;
 }

 switch (VAR_6->sc_type) {
 case 131:
  FUNC_2(VAR_1, "TI TWL4030/TPS659x0 Companion IC");
  break;
 case 130:
  FUNC_2(VAR_1, "TI TWL6025 Companion IC");
  break;
 case 129:
  FUNC_2(VAR_1, "TI TWL6030 Companion IC");
  break;
 case 128:
 default:
  return (VAR_0);
 }

 return (0);
}

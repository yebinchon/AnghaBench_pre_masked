
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct am335x_pwmss_softc {int sc_clk; int sc_dev; } ;
typedef int phandle_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;



 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 struct am335x_pwmss_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int,int ,int *,int,int *) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (int ,int) ;

__attribute__((used)) static int
FUNC_13(device_t VAR_4)
{
 struct am335x_pwmss_softc *VAR_5;
 uint32_t VAR_6, VAR_7;
 phandle_t VAR_8;

 VAR_5 = FUNC_4(VAR_4);
 VAR_5->sc_dev = VAR_4;

 VAR_5->sc_clk = FUNC_9(VAR_4);
 if (VAR_5->sc_clk == VAR_2) {
  FUNC_5(VAR_4, "failed to get device id based on ti,hwmods\n");
  return (VAR_0);
 }

 FUNC_10(VAR_5->sc_clk);
 FUNC_11(VAR_3, &VAR_6);
 switch (VAR_5->sc_clk) {
  case 130:
   VAR_7 = 0;
   break;
  case 129:
   VAR_7 = 1;
   break;

  case 128:
   VAR_7 = 2;
   break;
  default:
   FUNC_5(VAR_4, "unknown pwmss clock id: %d\n", VAR_5->sc_clk);
   return (VAR_0);
 }
 VAR_6 |= (1 << VAR_7);
 FUNC_12(VAR_3, VAR_6);

 VAR_8 = FUNC_6(VAR_4);

 if (VAR_8 == -1)
  return (VAR_1);

 FUNC_8(VAR_4, VAR_8);




 FUNC_3(VAR_4);




 for (VAR_8 = FUNC_0(VAR_8); VAR_8 > 0; VAR_8 = FUNC_1(VAR_8))
  FUNC_7(VAR_4, VAR_8, 0, ((void*)0), -1, ((void*)0));

 return (FUNC_2(VAR_4));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct asmc_softc {int sc_sms_intrtype; } ;
typedef int notify ;





 int FUNC_0 (char*,char*,char*,char*) ;
 int FUNC_1 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, int VAR_1)
{
 struct asmc_softc *VAR_2 = (struct asmc_softc *)VAR_0;
 char VAR_3[16];
 int VAR_4;

 switch (VAR_2->sc_sms_intrtype) {
 case 130:
  VAR_4 = 2;
  break;
 case 129:
  VAR_4 = 1;
  break;
 case 128:
  VAR_4 = 0;
  break;
 default:
  VAR_4 = 255;
 }

 FUNC_1(VAR_3, sizeof(VAR_3), " notify=0x%x", VAR_4);
 FUNC_0("ACPI", "asmc", "SMS", VAR_3);
}

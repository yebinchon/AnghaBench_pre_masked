
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct tps65217_status_reg {int acpwr; scalar_t__ pb; } ;
struct tps65217_int_reg {scalar_t__ aci; scalar_t__ pbi; } ;
struct am335x_pmic_softc {int sc_dev; } ;
typedef int notify_buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,int ,int *,int) ;
 int FUNC_3 (char*,char*,char*,char*,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (char*,int,char*,int) ;

__attribute__((used)) static void
FUNC_7(void *VAR_4)
{
 struct am335x_pmic_softc *VAR_5 = (struct am335x_pmic_softc *)VAR_4;
 struct tps65217_status_reg VAR_6;
 struct tps65217_int_reg VAR_7;
 int VAR_8;
 char VAR_9[16];

 FUNC_1();
 VAR_8 = FUNC_2(VAR_5->sc_dev, VAR_2, (uint8_t *)&VAR_7, 1);
 if (VAR_8 != 0) {
  FUNC_4(VAR_5->sc_dev, "Cannot read interrupt register\n");
  FUNC_0();
  return;
 }
 VAR_8 = FUNC_2(VAR_5->sc_dev, VAR_3, (uint8_t *)&VAR_6, 1);
 if (VAR_8 != 0) {
  FUNC_4(VAR_5->sc_dev, "Cannot read status register\n");
  FUNC_0();
  return;
 }
 FUNC_0();

 if (VAR_7.pbi && VAR_6.pb)
  FUNC_5(VAR_1);
 if (VAR_7.aci) {
  FUNC_6(VAR_9, sizeof(VAR_9), "notify=0x%02x",
      VAR_6.acpwr);
  FUNC_3("ACPI", "ACAD", "power", VAR_9, VAR_0);
 }
}

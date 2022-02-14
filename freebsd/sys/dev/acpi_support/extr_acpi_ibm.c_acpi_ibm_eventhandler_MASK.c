
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ibm_softc {int ec_dev; int light_val; int wlan_bt_flags; } ;
typedef int UINT64 ;
typedef int ACPI_STATUS ;


 int FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_4 (struct acpi_ibm_softc*,int) ;
 int FUNC_5 (struct acpi_ibm_softc*,int) ;
 int FUNC_6 (struct acpi_ibm_softc*,int) ;
 int FUNC_7 (struct acpi_ibm_softc*,int) ;
 int FUNC_8 (struct acpi_ibm_softc*,int) ;
 int VAR_6 ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(struct acpi_ibm_softc *VAR_7, int VAR_8)
{
 int VAR_9;
 UINT64 VAR_10;
 ACPI_STATUS VAR_11;

 FUNC_2(VAR_6);
 switch (VAR_8) {
 case 131:
  FUNC_9(VAR_5);
  break;

 case 135:
  FUNC_4(VAR_7, (VAR_7->wlan_bt_flags == 0));
  break;

 case 133:
 case 134:

  VAR_11 = FUNC_0(VAR_7->ec_dev, VAR_0,
          &VAR_10, 1);
  if (FUNC_1(VAR_11))
   return;

  VAR_9 = VAR_10 & VAR_1;
  VAR_9 = (VAR_8 == 133) ? VAR_9 + 1 : VAR_9 - 1;
  FUNC_5(VAR_7, VAR_9);
  break;

 case 130:
  FUNC_7(VAR_7, (VAR_7->light_val == 0));
  break;

 case 128:
 case 129:

  VAR_11 = FUNC_0(VAR_7->ec_dev, VAR_4, &VAR_10, 1);
  if (FUNC_1(VAR_11))
   return;

  VAR_9 = VAR_10 & VAR_3;
  VAR_9 = (VAR_8 == 128) ? VAR_9 + 1 : VAR_9 - 1;
  FUNC_8(VAR_7, VAR_9);
  break;

 case 132:

  VAR_11 = FUNC_0(VAR_7->ec_dev, VAR_4, &VAR_10, 1);
  if (FUNC_1(VAR_11))
   return;

  VAR_9 = ((VAR_10 & VAR_2) == VAR_2);
  FUNC_6(VAR_7, (VAR_9 == 0));
  break;

 default:
  break;
 }
 FUNC_3(VAR_6);
}

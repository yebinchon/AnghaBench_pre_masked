
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct acpi_ec_softc {int ec_dev; int ec_gencount; } ;
typedef int EC_STATUS ;
typedef int EC_EVENT ;
typedef int EC_COMMAND ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,char*,int) ;





 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct acpi_ec_softc*) ;
 int FUNC_5 (struct acpi_ec_softc*,int) ;
 int FUNC_6 (struct acpi_ec_softc*,int ,int ) ;
 int VAR_5 ;
 int FUNC_7 (int ,char*,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static ACPI_STATUS
FUNC_8(struct acpi_ec_softc *VAR_8, EC_COMMAND VAR_9)
{
    ACPI_STATUS VAR_10;
    EC_EVENT VAR_11;
    EC_STATUS VAR_12;
    u_int VAR_13;

    FUNC_1(VAR_6);


    if (!VAR_7 && VAR_9 == 131)
 return (VAR_1);


    switch (VAR_9) {
    case 129:
    case 128:
    case 132:
 VAR_11 = VAR_2;
 break;
    case 130:
    case 131:
 VAR_11 = VAR_3;
 break;
    default:
 FUNC_7(VAR_8->ec_dev, "EcCommand: invalid command %#x\n", VAR_9);
 return (VAR_0);
    }





    VAR_10 = FUNC_6(VAR_8, VAR_2, 0);
    if (FUNC_0(VAR_10))
 return (VAR_10);


    FUNC_3(VAR_5, "ec running command %#x", VAR_9);
    VAR_13 = VAR_8->ec_gencount;
    FUNC_5(VAR_8, VAR_9);
    VAR_10 = FUNC_6(VAR_8, VAR_11, VAR_13);
    if (FUNC_2(VAR_10)) {

 if (VAR_9 == 131) {
     VAR_12 = FUNC_4(VAR_8);
     if ((VAR_12 & VAR_4) == 0)
  VAR_10 = VAR_1;
 }
    } else
 FUNC_7(VAR_8->ec_dev, "EcCommand: no response to %#x\n", VAR_9);
    return (VAR_10);
}

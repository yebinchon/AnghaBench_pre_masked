
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct acpi_ec_softc {int ec_dev; int ec_gencount; } ;
typedef int UINT8 ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (struct acpi_ec_softc*) ;
 int FUNC_5 (struct acpi_ec_softc*,int ) ;
 int FUNC_6 (struct acpi_ec_softc*,char*,int ) ;
 int FUNC_7 (struct acpi_ec_softc*,int ) ;
 int FUNC_8 (struct acpi_ec_softc*,int ,int ) ;
 int VAR_4 ;
 int FUNC_9 (int ,char*) ;
 int VAR_5 ;

__attribute__((used)) static ACPI_STATUS
FUNC_10(struct acpi_ec_softc *VAR_6, UINT8 VAR_7, UINT8 *VAR_8)
{
    ACPI_STATUS VAR_9;
    u_int VAR_10;
    int VAR_11;

    FUNC_1(VAR_5);
    FUNC_3(VAR_4, "ec read from %#x", VAR_7);

    for (VAR_11 = 0; VAR_11 < 2; VAR_11++) {
 VAR_9 = FUNC_7(VAR_6, VAR_1);
 if (FUNC_0(VAR_9))
     return (VAR_9);

 VAR_10 = VAR_6->ec_gencount;
 FUNC_5(VAR_6, VAR_7);
 VAR_9 = FUNC_8(VAR_6, VAR_3, VAR_10);
 if (FUNC_2(VAR_9)) {
     *VAR_8 = FUNC_4(VAR_6);
     return (VAR_0);
 }
 if (FUNC_0(FUNC_6(VAR_6, "retr_check",
     VAR_2)))
     break;
    }
    FUNC_9(VAR_6->ec_dev, "EcRead: failed waiting to get data\n");
    return (VAR_9);
}

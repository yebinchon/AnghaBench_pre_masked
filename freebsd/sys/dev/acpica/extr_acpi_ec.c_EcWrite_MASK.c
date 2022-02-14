
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
 int VAR_0 ;
 int FUNC_2 (int ,char*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (struct acpi_ec_softc*,int ) ;
 int FUNC_4 (struct acpi_ec_softc*,int ) ;
 int FUNC_5 (struct acpi_ec_softc*,int ,int ) ;
 int VAR_3 ;
 int FUNC_6 (int ,char*) ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7(struct acpi_ec_softc *VAR_5, UINT8 VAR_6, UINT8 VAR_7)
{
    ACPI_STATUS VAR_8;
    u_int VAR_9;

    FUNC_1(VAR_4);
    FUNC_2(VAR_3, "ec write to %#x, data %#x", VAR_6, VAR_7);

    VAR_8 = FUNC_4(VAR_5, VAR_1);
    if (FUNC_0(VAR_8))
 return (VAR_8);

    VAR_9 = VAR_5->ec_gencount;
    FUNC_3(VAR_5, VAR_6);
    VAR_8 = FUNC_5(VAR_5, VAR_2, VAR_9);
    if (FUNC_0(VAR_8)) {
 FUNC_6(VAR_5->ec_dev, "EcWrite: failed waiting for sent address\n");
 return (VAR_8);
    }

    VAR_9 = VAR_5->ec_gencount;
    FUNC_3(VAR_5, VAR_7);
    VAR_8 = FUNC_5(VAR_5, VAR_2, VAR_9);
    if (FUNC_0(VAR_8)) {
 FUNC_6(VAR_5->ec_dev, "EcWrite: failed waiting for sent data\n");
 return (VAR_8);
    }

    return (VAR_0);
}

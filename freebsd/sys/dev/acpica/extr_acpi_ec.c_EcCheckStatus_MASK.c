
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_ec_softc {scalar_t__ ec_burstactive; } ;
typedef int EC_STATUS ;
typedef int EC_EVENT ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (int ,char*,char const*,int) ;
 int VAR_2 ;
 int FUNC_2 (struct acpi_ec_softc*) ;
 scalar_t__ FUNC_3 (int ,int) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static ACPI_STATUS
FUNC_4(struct acpi_ec_softc *VAR_5, const char *VAR_6, EC_EVENT VAR_7)
{
    ACPI_STATUS VAR_8;
    EC_STATUS VAR_9;

    VAR_8 = VAR_0;
    VAR_9 = FUNC_2(VAR_5);
    if (VAR_5->ec_burstactive && !(VAR_9 & VAR_2)) {
 FUNC_0(VAR_4, "ec burst disabled in waitevent (%s)", VAR_6);
 VAR_5->ec_burstactive = VAR_3;
    }
    if (FUNC_3(VAR_7, VAR_9)) {
 FUNC_1(VAR_4, "ec %s wait ready, status %#x", VAR_6, VAR_9);
 VAR_8 = VAR_1;
    }
    return (VAR_8);
}

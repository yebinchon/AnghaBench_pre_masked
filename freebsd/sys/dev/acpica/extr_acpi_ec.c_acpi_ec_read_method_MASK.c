
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct acpi_ec_softc {int dummy; } ;
typedef int device_t ;
typedef int UINT64 ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,int ,int,int *,struct acpi_ec_softc*,int *) ;
 struct acpi_ec_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_2, u_int VAR_3, UINT64 *VAR_4, int VAR_5)
{
    struct acpi_ec_softc *VAR_6;
    ACPI_STATUS VAR_7;

    VAR_6 = FUNC_2(VAR_2);
    VAR_7 = FUNC_1(VAR_0, VAR_3, VAR_5 * 8, VAR_4, VAR_6, ((void*)0));
    if (FUNC_0(VAR_7))
 return (VAR_1);
    return (0);
}

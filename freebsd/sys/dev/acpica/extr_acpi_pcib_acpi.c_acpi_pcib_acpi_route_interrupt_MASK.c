
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_hpcib_softc {int ap_prt; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,int *) ;
 struct acpi_hpcib_softc* FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(device_t VAR_0, device_t VAR_1, int VAR_2)
{
    struct acpi_hpcib_softc *VAR_3 = FUNC_1(VAR_0);

    return (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->ap_prt));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int * Pointer; } ;
struct acpi_pcib_softc {TYPE_1__ ap_prt; } ;
typedef int device_t ;


 int FUNC_0 (int ,int ,int,TYPE_1__*) ;
 struct acpi_pcib_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0, device_t VAR_1, int VAR_2)
{
    struct acpi_pcib_softc *VAR_3;

    VAR_3 = FUNC_1(VAR_0);





    if (VAR_3->ap_prt.Pointer == ((void*)0))
 return (FUNC_2(VAR_0, VAR_1, VAR_2));
    else
 return (FUNC_0(VAR_0, VAR_1, VAR_2, &VAR_3->ap_prt));
}

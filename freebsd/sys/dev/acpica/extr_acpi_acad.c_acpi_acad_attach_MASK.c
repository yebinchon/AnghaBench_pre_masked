
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_softc {int acpi_sysctl_tree; int acpi_sysctl_ctx; } ;
struct acpi_acad_softc {int status; } ;
typedef int device_t ;
typedef int ACPI_HANDLE ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,int ,int ,char*,int,int*,int ,int ,char*,char*) ;
 int FUNC_3 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct acpi_softc* FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 struct acpi_acad_softc* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;

__attribute__((used)) static int
FUNC_9(device_t VAR_10)
{
    struct acpi_acad_softc *VAR_11;
    struct acpi_softc *VAR_12;
    ACPI_HANDLE VAR_13;
    int VAR_14;

    VAR_11 = FUNC_7(VAR_10);
    VAR_13 = FUNC_5(VAR_10);

    VAR_14 = FUNC_6(VAR_0, VAR_7, VAR_10);
    if (VAR_14 != 0)
 return (VAR_14);

    if (FUNC_8(VAR_10) == 0) {
 VAR_12 = FUNC_4(VAR_10);
 FUNC_2(&VAR_12->acpi_sysctl_ctx,
   FUNC_3(VAR_12->acpi_sysctl_tree),
   VAR_4, "acline", VAR_3 | VAR_2,
   &VAR_11->status, 0, VAR_9, "I", "");
    }


    VAR_11->status = -1;





    FUNC_0(VAR_13, VAR_1,
        VAR_8, VAR_10);
    FUNC_1(VAR_5, VAR_6, VAR_10);

    return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {int Description; } ;
typedef TYPE_1__ AH_DEVICE_ID ;
typedef int ACPI_STATUS ;
typedef int ACPI_HANDLE ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_1__* FUNC_2 (char*) ;
 char* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*,...) ;
 char* FUNC_5 (char*) ;
 char* FUNC_6 (int ) ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_HANDLE VAR_3,
    UINT32 VAR_4,
    void *VAR_5,
    void **VAR_6)
{
    char *VAR_7;
    char *VAR_8;
    char *VAR_9;
    const AH_DEVICE_ID *VAR_10;




    VAR_7 = FUNC_3 (
        FUNC_0 (VAR_0, VAR_3));

    FUNC_4 (VAR_2, "%-32s", VAR_7);



    VAR_9 = FUNC_6 (
        FUNC_0 (VAR_0, VAR_3));
    FUNC_4 (VAR_2, "%8s", VAR_9);

    VAR_10 = FUNC_2 (VAR_9);
    if (VAR_10)
    {
        FUNC_4 (VAR_2, "    // %s",
            VAR_10->Description);
    }
    else if ((VAR_8 = FUNC_5 (VAR_7)))
    {
        FUNC_4 (VAR_2, "    // %s (_DDN)", VAR_8);
    }

    FUNC_4 (VAR_2, "\n");
    FUNC_1 (VAR_7);
    return (VAR_1);
}

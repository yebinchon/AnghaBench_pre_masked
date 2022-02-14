
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT8 ;
typedef int UINT32 ;
struct TYPE_4__ {char* Value; } ;
typedef TYPE_1__ DT_FIELD ;
typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int *) ;
 int VAR_2 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ) ;
 int FUNC_4 (int ,char*,char*) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5 (
    UINT8 *VAR_3,
    DT_FIELD *VAR_4,
    UINT32 VAR_5)
{
    char *VAR_6;
    ACPI_STATUS VAR_7;


    VAR_6 = VAR_4->Value;

    VAR_7 = FUNC_2 (VAR_6);
    if (FUNC_0 (VAR_7))
    {
        FUNC_4 (VAR_2, "%s", VAR_4->Value);
        FUNC_3 (VAR_0, VAR_1, VAR_4, VAR_2);
    }
    else
    {
        FUNC_1 (VAR_6, VAR_3);
    }

    return (VAR_7);
}

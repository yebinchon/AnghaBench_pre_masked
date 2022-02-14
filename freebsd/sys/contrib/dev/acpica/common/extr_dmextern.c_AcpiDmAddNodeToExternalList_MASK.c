
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int ACPI_STATUS ;
typedef int ACPI_NAMESPACE_NODE ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (char*,char*,int ,int ,int) ;
 int FUNC_4 (int *,char**,char**) ;
 int FUNC_5 (char**) ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6 (
    ACPI_NAMESPACE_NODE *VAR_3,
    UINT8 VAR_4,
    UINT32 VAR_5,
    UINT16 VAR_6)
{
    char *VAR_7;
    char *VAR_8;
    ACPI_STATUS VAR_9;


    FUNC_2 (VAR_1);



    VAR_9 = FUNC_4 (VAR_3, &VAR_7, &VAR_8);
    if (FUNC_0 (VAR_9))
    {
        VAR_2;
    }



    VAR_9 = FUNC_5 (&VAR_7);
    if (FUNC_0 (VAR_9))
    {
        FUNC_1 (VAR_7);
        FUNC_1 (VAR_8);
        VAR_2;
    }



    VAR_9 = FUNC_3 (VAR_7, VAR_8, VAR_4,
        VAR_5, (VAR_6 | VAR_0));
    if (FUNC_0 (VAR_9))
    {
        FUNC_1 (VAR_7);
        FUNC_1 (VAR_8);
    }

    VAR_2;
}

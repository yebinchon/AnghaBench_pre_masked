
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT8 ;
typedef int UINT32 ;
typedef int UINT16 ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 char VAR_2 ;
 int FUNC_3 (char*,char*,int ,int ,int) ;
 int FUNC_4 (int ,char*,int *,char**) ;
 int FUNC_5 (char*,char**) ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_6 (
    char *VAR_5,
    UINT8 VAR_6,
    UINT32 VAR_7,
    UINT16 VAR_8)
{
    char *VAR_9;
    char *VAR_10;
    ACPI_STATUS VAR_11;


    FUNC_2 (VAR_3);


    if (!VAR_5)
    {
        VAR_4;
    }



    if ((*VAR_5 == VAR_2) && (VAR_5[1]))
    {
        VAR_5++;
    }



    VAR_11 = FUNC_5 (VAR_5, &VAR_9);
    if (FUNC_0 (VAR_11))
    {
        VAR_4;
    }

    VAR_11 = FUNC_4 (VAR_1, VAR_9,
        ((void*)0), &VAR_10);
    if (FUNC_0 (VAR_11))
    {
        FUNC_1 (VAR_9);
        VAR_4;
    }



    VAR_11 = FUNC_3 (VAR_10, VAR_9,
        VAR_6, VAR_7, (VAR_8 | VAR_0));
    if (FUNC_0 (VAR_11))
    {
        FUNC_1 (VAR_10);
        FUNC_1 (VAR_9);
    }

    VAR_4;
}

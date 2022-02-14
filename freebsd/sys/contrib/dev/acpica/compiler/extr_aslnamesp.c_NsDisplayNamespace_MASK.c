
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ACPI_STATUS ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int *,int *,int *) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,char*) ;
 int VAR_8 ;
 int VAR_9 ;

ACPI_STATUS
FUNC_3 (
    void)
{
    ACPI_STATUS VAR_10;


    if (!VAR_5)
    {
        return (VAR_3);
    }

    VAR_6 = 0;



    FUNC_2 (VAR_4, "Contents of ACPI Namespace\n\n");
    FUNC_2 (VAR_4, "Count  Depth    Name - Type\n\n");



    VAR_10 = FUNC_1 (VAR_1, VAR_0,
        VAR_2, VAR_7, VAR_8, ((void*)0),
        ((void*)0), ((void*)0));
    if (FUNC_0 (VAR_10))
    {
        return (VAR_10);
    }



    FUNC_2 (VAR_4, "\nNamespace pathnames\n\n");

    VAR_10 = FUNC_1 (VAR_1, VAR_0,
        VAR_2, VAR_7, VAR_9, ((void*)0),
        ((void*)0), ((void*)0));

    return (VAR_10);
}

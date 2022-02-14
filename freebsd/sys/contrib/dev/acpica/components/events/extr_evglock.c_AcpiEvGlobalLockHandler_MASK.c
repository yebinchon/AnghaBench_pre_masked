
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UINT32 ;
typedef int ACPI_STATUS ;
typedef int ACPI_CPU_FLAGS ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static UINT32
FUNC_5 (
    void *VAR_6)
{
    ACPI_STATUS VAR_7;
    ACPI_CPU_FLAGS VAR_8;


    VAR_8 = FUNC_2 (VAR_3);






    if (!VAR_2)
    {
        goto CleanupAndExit;
    }





    VAR_7 = FUNC_4 (VAR_4, 1);
    if (FUNC_1 (VAR_7))
    {
        FUNC_0 ((VAR_1, "Could not signal Global Lock semaphore"));
    }

    VAR_2 = VAR_5;


CleanupAndExit:

    FUNC_3 (VAR_3, VAR_8);
    return (VAR_0);
}

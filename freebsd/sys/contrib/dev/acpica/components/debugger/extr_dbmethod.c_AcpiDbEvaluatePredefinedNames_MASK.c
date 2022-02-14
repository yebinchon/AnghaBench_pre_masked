
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ Count; int MaxCount; } ;
typedef TYPE_1__ ACPI_DB_EXECUTE_WALK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*,scalar_t__) ;
 int FUNC_1 (int ,int ,int ,int ,int *,void*,int *) ;

void
FUNC_2 (
    void)
{
    ACPI_DB_EXECUTE_WALK VAR_4;


    VAR_4.Count = 0;
    VAR_4.MaxCount = VAR_2;



    (void) FUNC_1 (VAR_1, VAR_0, VAR_2,
                VAR_3, ((void*)0), (void *) &VAR_4, ((void*)0));

    FUNC_0 ("Evaluated %u predefined names in the namespace\n", VAR_4.Count);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int OsMutex; } ;
struct TYPE_4__ {TYPE_1__ Mutex; } ;
typedef void* BOOLEAN ;
typedef int ACPI_STATUS ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,void*) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 TYPE_2__* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int VAR_10 ;
 void* VAR_11 ;
 int FUNC_6 (int ) ;

ACPI_STATUS
FUNC_7 (
    void)
{
    BOOLEAN VAR_12 = VAR_11;
    ACPI_STATUS VAR_13 = VAR_5;


    FUNC_1 (VAR_10);




    if (!VAR_7)
    {
        FUNC_3 ((VAR_3,
            "Cannot release the ACPI Global Lock, it has not been acquired"));
        FUNC_6 (VAR_4);
    }

    if (VAR_9)
    {


        FUNC_2 (VAR_6, VAR_12);





        if (VAR_12)
        {
            VAR_13 = FUNC_5 (
                VAR_0, VAR_2);
        }

        FUNC_0 ((VAR_1, "Released hardware Global Lock\n"));
    }

    VAR_7 = VAR_11;



    FUNC_4 (VAR_8->Mutex.OsMutex);
    FUNC_6 (VAR_13);
}

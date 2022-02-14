
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT16 ;
struct TYPE_3__ {int OsMutex; } ;
struct TYPE_4__ {TYPE_1__ Mutex; } ;
typedef void* BOOLEAN ;
typedef int ACPI_STATUS ;
typedef int ACPI_CPU_FLAGS ;


 int FUNC_0 (int ,void*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 TYPE_2__* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ) ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int FUNC_9 (int ) ;

ACPI_STATUS
FUNC_10 (
    UINT16 VAR_14)
{
    ACPI_CPU_FLAGS VAR_15;
    ACPI_STATUS VAR_16;
    BOOLEAN VAR_17 = VAR_12;


    FUNC_3 (VAR_11);






    VAR_16 = FUNC_5 (VAR_6->Mutex.OsMutex,
                VAR_14);
    if (FUNC_2 (VAR_16))
    {
        FUNC_9 (VAR_16);
    }
    VAR_5++;
    if (VAR_5 == 0)
    {
        VAR_5 = 1;
    }





    if (!VAR_9)
    {
        VAR_4 = VAR_13;
        FUNC_9 (VAR_2);
    }

    VAR_15 = FUNC_7 (VAR_8);

    do
    {


        FUNC_0 (VAR_3, VAR_17);
        if (VAR_17)
        {
            VAR_4 = VAR_13;
            FUNC_1 ((VAR_0,
                "Acquired hardware Global Lock\n"));
            break;
        }






        VAR_7 = VAR_13;
        FUNC_8 (VAR_8, VAR_15);

        FUNC_1 ((VAR_0,
            "Waiting for hardware Global Lock\n"));





        VAR_16 = FUNC_6 (
            VAR_10, VAR_1);

        VAR_15 = FUNC_7 (VAR_8);

    } while (FUNC_4 (VAR_16));

    VAR_7 = VAR_12;
    FUNC_8 (VAR_8, VAR_15);

    FUNC_9 (VAR_16);
}

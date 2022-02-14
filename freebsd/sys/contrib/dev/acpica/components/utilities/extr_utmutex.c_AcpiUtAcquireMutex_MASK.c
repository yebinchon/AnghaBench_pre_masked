
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {scalar_t__ ThreadId; int UseCount; int Mutex; } ;
typedef scalar_t__ ACPI_THREAD_ID ;
typedef int ACPI_STATUS ;
typedef size_t ACPI_MUTEX_HANDLE ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 scalar_t__ FUNC_4 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_1__* VAR_8 ;
 int FUNC_5 (int ,int ) ;
 scalar_t__ FUNC_6 () ;
 int FUNC_7 (size_t) ;
 int VAR_9 ;

ACPI_STATUS
FUNC_8 (
    ACPI_MUTEX_HANDLE VAR_10)
{
    ACPI_STATUS VAR_11;
    ACPI_THREAD_ID VAR_12;


    FUNC_3 (VAR_9);


    if (VAR_10 > VAR_1)
    {
        return (VAR_6);
    }

    VAR_12 = FUNC_6 ();
    FUNC_0 ((VAR_0,
        "Thread %u attempting to acquire Mutex [%s]\n",
        (UINT32) VAR_12, FUNC_7 (VAR_10)));

    VAR_11 = FUNC_5 (
        VAR_8[VAR_10].Mutex, VAR_3);
    if (FUNC_4 (VAR_11))
    {
        FUNC_0 ((VAR_0,
            "Thread %u acquired Mutex [%s]\n",
            (UINT32) VAR_12, FUNC_7 (VAR_10)));

        VAR_8[VAR_10].UseCount++;
        VAR_8[VAR_10].ThreadId = VAR_12;
    }
    else
    {
        FUNC_2 ((VAR_7, VAR_11,
            "Thread %u could not acquire Mutex [%s] (0x%X)",
            (UINT32) VAR_12, FUNC_7 (VAR_10), VAR_10));
    }

    return (VAR_11);
}

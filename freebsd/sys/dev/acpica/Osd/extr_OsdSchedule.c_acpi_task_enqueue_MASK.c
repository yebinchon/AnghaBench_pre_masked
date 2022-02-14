
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_task_ctx {int at_flag; int at_task; void* at_context; int at_function; } ;
typedef int ACPI_STATUS ;
typedef int ACPI_OSD_EXEC_CALLBACK ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int,int ,struct acpi_task_ctx*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct acpi_task_ctx* VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (int*,int,int) ;
 int FUNC_2 (int*,int ) ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,int *) ;

__attribute__((used)) static ACPI_STATUS
FUNC_5(int VAR_13, ACPI_OSD_EXEC_CALLBACK VAR_14, void *VAR_15)
{
    struct acpi_task_ctx *VAR_16;
    int VAR_17;

    for (VAR_16 = ((void*)0), VAR_17 = 0; VAR_17 < VAR_5; VAR_17++)
 if (FUNC_1(&VAR_10[VAR_17].at_flag, VAR_1,
     VAR_2)) {
     VAR_16 = &VAR_10[VAR_17];
     VAR_6++;
     break;
 }

    if (VAR_17 > VAR_11)
 FUNC_1(&VAR_11, VAR_11, VAR_17);

    if (VAR_16 == ((void*)0)) {
 FUNC_3("AcpiOsExecute: failed to enqueue task, consider increasing "
     "the debug.acpi.max_tasks tunable\n");
 return (VAR_3);
    }

    FUNC_0(&VAR_16->at_task, VAR_13, VAR_7, VAR_16);
    VAR_16->at_function = VAR_14;
    VAR_16->at_context = VAR_15;




    if (VAR_9) {
 FUNC_2(&VAR_16->at_flag, VAR_0);
 FUNC_4(VAR_8, &VAR_16->at_task);
 return (VAR_4);
    }
    if (VAR_12)
 FUNC_3("AcpiOsExecute: task queue not started\n");

    return (VAR_4);
}

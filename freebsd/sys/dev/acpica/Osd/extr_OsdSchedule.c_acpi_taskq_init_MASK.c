
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int at_task; int at_flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 TYPE_1__* VAR_9 ;
 scalar_t__ FUNC_0 (int *,int,int) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char*,scalar_t__) ;
 int FUNC_2 (char*,int ,int *,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *,int ,int ,char*) ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_5(void *VAR_12)
{
    int VAR_13;

    VAR_7 = FUNC_2("acpi_task", VAR_2,
 &VAR_11, &VAR_7);
    FUNC_4(&VAR_7, VAR_5, VAR_3, "acpi_task");
    if (VAR_6 > 0) {
 if (VAR_10)
     FUNC_1("AcpiOsExecute: enqueue %d pending tasks\n",
  VAR_6);
 for (VAR_13 = 0; VAR_13 < VAR_4; VAR_13++)
     if (FUNC_0(&VAR_9[VAR_13].at_flag, VAR_1,
  VAR_1 | VAR_0))
  FUNC_3(VAR_7, &VAR_9[VAR_13].at_task);
    }
    VAR_8 = 1;
}

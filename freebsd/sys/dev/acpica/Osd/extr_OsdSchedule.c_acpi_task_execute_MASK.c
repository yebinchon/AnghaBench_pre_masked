
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_task_ctx {int at_flag; int at_context; int (* at_function ) (int ) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_3, int VAR_4)
{
    struct acpi_task_ctx *VAR_5;

    VAR_5 = (struct acpi_task_ctx *)VAR_3;
    VAR_5->at_function(VAR_5->at_context);
    FUNC_0(&VAR_5->at_flag, VAR_1 | VAR_0);
    VAR_2--;
}

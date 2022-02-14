
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_battinfo {int cap; int min; int rate; int state; } ;


 int VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct acpi_battinfo *VAR_1)
{
    VAR_1->cap = -1;
    VAR_1->min = -1;
    VAR_1->state = VAR_0;
    VAR_1->rate = -1;
}

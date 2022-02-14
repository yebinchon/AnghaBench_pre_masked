
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acpi_bst {scalar_t__ state; scalar_t__ cap; scalar_t__ volt; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

int
FUNC_0(struct acpi_bst *VAR_2)
{

    return (VAR_2->state != VAR_0 &&
 VAR_2->cap != VAR_1 && VAR_2->volt != VAR_1);
}

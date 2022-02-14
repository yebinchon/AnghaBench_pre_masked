
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ Next; } ;
typedef int BOOLEAN ;
typedef TYPE_1__ ACPI_COMMENT_NODE ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static BOOLEAN
FUNC_0 (
    ACPI_COMMENT_NODE *VAR_2)

{

    if (!VAR_2)
    {
        return (VAR_0);
    }
    else if (VAR_2->Next)
    {
        return (VAR_0);
    }

    return (VAR_1);
}

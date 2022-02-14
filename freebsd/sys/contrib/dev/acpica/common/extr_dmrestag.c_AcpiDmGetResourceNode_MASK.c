
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT32 ;
struct TYPE_4__ {scalar_t__ Value; scalar_t__ Length; struct TYPE_4__* Peer; struct TYPE_4__* Child; } ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static ACPI_NAMESPACE_NODE *
FUNC_1 (
    ACPI_NAMESPACE_NODE *VAR_0,
    UINT32 VAR_1)
{
    ACPI_NAMESPACE_NODE *VAR_2;
    UINT32 VAR_3 = FUNC_0 (VAR_1);
    VAR_2 = VAR_0->Child;
    while (VAR_2)
    {






        if ((VAR_3 >= VAR_2->Value) &&
            (VAR_3 < (VAR_2->Value + VAR_2->Length)))
        {
            return (VAR_2);
        }

        VAR_2 = VAR_2->Peer;
    }

    return (((void*)0));
}

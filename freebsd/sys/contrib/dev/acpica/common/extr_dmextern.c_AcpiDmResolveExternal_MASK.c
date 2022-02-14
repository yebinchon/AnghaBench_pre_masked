
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ UINT8 ;
struct TYPE_4__ {scalar_t__ Type; int Flags; } ;
typedef int ACPI_STATUS ;
typedef TYPE_1__ ACPI_NAMESPACE_NODE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,char*,scalar_t__,int ,int,int *,TYPE_1__**) ;

__attribute__((used)) static ACPI_STATUS
FUNC_2 (
    char *VAR_8,
    UINT8 VAR_9,
    ACPI_NAMESPACE_NODE **VAR_10)
{
    ACPI_STATUS VAR_11;


    VAR_11 = FUNC_1 (((void*)0), VAR_8, VAR_9,
        VAR_0,
        VAR_2 | VAR_3 | VAR_1,
        ((void*)0), VAR_10);

    if (!VAR_10)
    {
        FUNC_0 ((VAR_5, VAR_11,
            "while adding external to namespace [%s]", VAR_8));
    }



    else if ((*VAR_10)->Type == VAR_9 &&
        (*VAR_10)->Flags & VAR_7)
    {
        return (VAR_6);
    }
    else
    {
        FUNC_0 ((VAR_5, VAR_4,
            "[%s] has conflicting declarations", VAR_8));
    }

    return (VAR_4);
}

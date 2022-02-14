
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {size_t Length; scalar_t__ Pointer; } ;
struct TYPE_7__ {int * Node; } ;
struct TYPE_8__ {TYPE_1__ Scope; } ;
typedef int ACPI_WALK_STATE ;
typedef int ACPI_STATUS ;
typedef int ACPI_PARSE_OBJECT ;
typedef int ACPI_NAMESPACE_NODE ;
typedef TYPE_2__ ACPI_GENERIC_STATE ;
typedef TYPE_3__ ACPI_BUFFER ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int (*) (int *,int *,int *,int *,TYPE_3__*,char**)) ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (TYPE_2__*,char*,int ,int ,int,int *,int **) ;
 int FUNC_4 (int ,int ,int *,char*) ;
 char* FUNC_5 (size_t) ;
 int FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (char*,char*,int) ;

__attribute__((used)) static ACPI_STATUS
FUNC_8 (
    ACPI_PARSE_OBJECT *VAR_10,
    ACPI_WALK_STATE *VAR_11,
    ACPI_NAMESPACE_NODE *VAR_12,
    ACPI_NAMESPACE_NODE *VAR_13,
    ACPI_BUFFER *VAR_14,
    char **VAR_15)
{
    ACPI_NAMESPACE_NODE *VAR_16;
    ACPI_GENERIC_STATE VAR_17;
    ACPI_STATUS VAR_18;
    char *VAR_19;


    FUNC_2 (FUNC_8);
    VAR_19 = &(((char *) VAR_14->Pointer)[
        VAR_14->Length - VAR_2]);
    VAR_17.Scope.Node = VAR_12;



    VAR_18 = FUNC_3 (&VAR_17, VAR_19, VAR_5, VAR_1,
        VAR_4 | VAR_3,
        VAR_11, &(VAR_16));
    if (FUNC_1 (VAR_18))
    {
        return (VAR_18);
    }






    if (VAR_16 != VAR_13)
    {




        return (VAR_6);
    }



    FUNC_0 ((VAR_0,
        "NAMESEG:   %-24s", VAR_19));



    *VAR_15 = FUNC_5 (VAR_2 + 1);
    FUNC_6 (*VAR_15, VAR_19);

    if (FUNC_7 (*VAR_15, "_T_", 3))
    {
        FUNC_4 (VAR_9, VAR_8,
            VAR_10, *VAR_15);
    }

    return (VAR_7);
}

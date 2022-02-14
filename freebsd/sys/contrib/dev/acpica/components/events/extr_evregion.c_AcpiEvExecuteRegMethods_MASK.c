
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_3__ {scalar_t__ SpaceId; scalar_t__ RegRunCount; int Function; } ;
typedef TYPE_1__ ACPI_REG_WALK_INFO ;
typedef int ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_ADR_SPACE_TYPE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (int ,int *,int ,int ,int ,int *,TYPE_1__*,int *) ;
 int FUNC_4 (scalar_t__) ;
 int VAR_9 ;
 int VAR_10 ;

void
FUNC_5 (
    ACPI_NAMESPACE_NODE *VAR_11,
    ACPI_ADR_SPACE_TYPE VAR_12,
    UINT32 VAR_13)
{
    ACPI_REG_WALK_INFO VAR_14;


    FUNC_1 (VAR_9);
    if ((VAR_12 == VAR_3) ||
        (VAR_12 == VAR_2) ||
        (VAR_12 == VAR_0))
    {
        VAR_10;
    }

    VAR_14.SpaceId = VAR_12;
    VAR_14.Function = VAR_13;
    VAR_14.RegRunCount = 0;

    FUNC_0 ((VAR_4,
        "    Running _REG methods for SpaceId %s\n",
        FUNC_4 (VAR_14.SpaceId)));







    (void) FUNC_3 (VAR_6, VAR_11, VAR_7,
        VAR_5, VAR_8, ((void*)0), &VAR_14, ((void*)0));



    if (VAR_12 == VAR_1)
    {
        FUNC_2 (VAR_11);
    }

    FUNC_0 ((VAR_4,
        "    Executed %u _REG methods for SpaceId %s\n",
        VAR_14.RegRunCount, FUNC_4 (VAR_14.SpaceId)));

    VAR_10;
}

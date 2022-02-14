
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_10__ {int Ascii; } ;
struct TYPE_14__ {TYPE_1__ Name; } ;
struct TYPE_12__ {int Count1; int ObjectType1; int Type; } ;
struct TYPE_11__ {int ExpectedBtypes; int ArgumentList; } ;
struct TYPE_13__ {TYPE_3__ RetInfo; TYPE_2__ Info; } ;
typedef int ACPI_STATUS ;
typedef TYPE_4__ ACPI_PREDEFINED_INFO ;
typedef TYPE_5__ ACPI_NAMESPACE_NODE ;
typedef scalar_t__ ACPI_HANDLE ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,TYPE_5__*,TYPE_4__ const*) ;
 char* FUNC_2 (TYPE_5__*,int ) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (char*,int) ;
 TYPE_4__* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int VAR_2 ;

__attribute__((used)) static ACPI_STATUS
FUNC_7 (
    ACPI_HANDLE VAR_3,
    UINT32 VAR_4,
    void *VAR_5,
    void **VAR_6)
{
    ACPI_NAMESPACE_NODE *VAR_7 = (ACPI_NAMESPACE_NODE *) VAR_3;
    UINT32 *VAR_8 = (UINT32 *) VAR_5;
    const ACPI_PREDEFINED_INFO *VAR_9;
    const ACPI_PREDEFINED_INFO *VAR_10 = ((void*)0);
    char *VAR_11;
    char VAR_12[48];


    VAR_9 = FUNC_5 (VAR_7->Name.Ascii);
    if (!VAR_9)
    {
        return (VAR_1);
    }

    VAR_11 = FUNC_2 (VAR_7, VAR_2);
    if (!VAR_11)
    {
        return (VAR_1);
    }



    if (VAR_9->Info.ExpectedBtypes & VAR_0)
    {
        VAR_10 = VAR_9 + 1;
    }

    FUNC_4 (VAR_12,
        VAR_9->Info.ExpectedBtypes);

    FUNC_3 ("%-32s Arguments %X, Return Types: %s", VAR_11,
        FUNC_6 (VAR_9->Info.ArgumentList),
        VAR_12);

    if (VAR_10)
    {
        FUNC_3 (" (PkgType %2.2X, ObjType %2.2X, Count %2.2X)",
            VAR_10->RetInfo.Type, VAR_10->RetInfo.ObjectType1,
            VAR_10->RetInfo.Count1);
    }

    FUNC_3("\n");



    FUNC_1 (VAR_11, VAR_7, VAR_9);

    FUNC_0 (VAR_11);
    (*VAR_8)++;
    return (VAR_1);
}

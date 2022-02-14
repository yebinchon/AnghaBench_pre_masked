
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ TotalUnreferencedObjects; scalar_t__ TotalObjects; scalar_t__ TotalUnreferenceUserMethods; scalar_t__ TotalUserMethods; scalar_t__ TotalPredefinedMethods; } ;
typedef TYPE_1__ ASL_XREF_INFO ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,int ,int ,int *,TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;

void
FUNC_4 (
    void)
{
    ASL_XREF_INFO VAR_6;




    if (!VAR_2)
    {
        return;
    }

    FUNC_3 (&VAR_6, 0, sizeof (ASL_XREF_INFO));



    FUNC_1 ("Part 2: Method Reference Map "
        "(Invocations of each user-defined control method)");

    FUNC_2 (VAR_3, VAR_1,
        VAR_4, ((void*)0), &VAR_6);



    FUNC_1 ("Part 3: Full Object Reference Map "
        "(Methods that reference each object in namespace");

    FUNC_2 (VAR_3, VAR_1,
        VAR_5, ((void*)0), &VAR_6);



    FUNC_0 (VAR_0, "\n\nObject Summary\n");

    FUNC_0 (VAR_0,
        "\nTotal methods:                   %u\n",
        VAR_6.TotalPredefinedMethods + VAR_6.TotalUserMethods);
    FUNC_0 (VAR_0,
        "Total predefined methods:        %u\n",
        VAR_6.TotalPredefinedMethods);

    FUNC_0 (VAR_0,
        "\nTotal user methods:              %u\n",
        VAR_6.TotalUserMethods);
    FUNC_0 (VAR_0,
        "Total unreferenced user methods  %u\n",
        VAR_6.TotalUnreferenceUserMethods);

    FUNC_0 (VAR_0,
        "\nTotal defined objects:           %u\n",
        VAR_6.TotalObjects);
    FUNC_0 (VAR_0,
        "Total unreferenced objects:      %u\n",
        VAR_6.TotalUnreferencedObjects);
}

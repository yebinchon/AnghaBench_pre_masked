
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int UINT32 ;
struct TYPE_4__ {struct TYPE_4__* Next; int * Comment; } ;
typedef TYPE_1__ ACPI_COMMENT_NODE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (char*,int *) ;
 int FUNC_2 (int ,TYPE_1__*) ;

void
FUNC_3 (
    ACPI_COMMENT_NODE *VAR_1,
    UINT32 VAR_2)
{
    ACPI_COMMENT_NODE *VAR_3 = VAR_1;
    ACPI_COMMENT_NODE *VAR_4;


    while (VAR_3)
    {
        VAR_4 = VAR_3;
        if (VAR_3->Comment)
        {
            FUNC_0(VAR_2);
            FUNC_1("%s\n", VAR_3->Comment);
            VAR_3->Comment = ((void*)0);
        }

        VAR_3 = VAR_3->Next;
        FUNC_2(VAR_0, VAR_4);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_5__ {char* Description; } ;
struct TYPE_4__ {char* Filename; } ;
typedef TYPE_1__ ASL_FILE_INFO ;


 TYPE_3__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char*,char*,char*) ;
 scalar_t__ FUNC_2 (char*) ;

void
FUNC_3 (
    UINT32 VAR_2)
{
    ASL_FILE_INFO *VAR_3 = &VAR_1[VAR_2];


    if (!VAR_3->Filename)
    {
        return;
    }

    if (FUNC_2 (VAR_3->Filename))
    {
        FUNC_1 ("%s (%s file) ",
            VAR_3->Filename, VAR_0[VAR_2].Description);
        FUNC_0 ("Could not delete");
    }

    VAR_3->Filename = ((void*)0);
    return;
}

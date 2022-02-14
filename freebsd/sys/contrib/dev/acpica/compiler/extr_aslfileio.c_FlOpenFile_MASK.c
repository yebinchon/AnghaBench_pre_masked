
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t UINT32 ;
struct TYPE_2__ {char* Filename; int * Handle; } ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__* VAR_1 ;
 int FUNC_1 (size_t,int ) ;
 int * FUNC_2 (char*,char*) ;

void
FUNC_3 (
    UINT32 VAR_2,
    char *VAR_3,
    char *VAR_4)
{
    FILE *VAR_5;


    VAR_1[VAR_2].Filename = VAR_3;
    VAR_1[VAR_2].Handle = ((void*)0);

    VAR_5 = FUNC_2 (VAR_3, VAR_4);
    if (!VAR_5)
    {
        FUNC_1 (VAR_2, VAR_0);
        FUNC_0 ();
    }

    VAR_1[VAR_2].Handle = VAR_5;
}

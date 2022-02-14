
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* Dir; struct TYPE_3__* Next; } ;
typedef int FILE ;
typedef TYPE_1__ ASL_INCLUDE_DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ) ;
 int * FUNC_1 (char*,char*,char*,char**) ;
 int VAR_6 ;
 int FUNC_2 (int ,char*,char*,char*) ;
 char* FUNC_3 (int ) ;

FILE *
FUNC_4 (
    char *VAR_7,
    char *VAR_8,
    char **VAR_9)
{
    FILE *VAR_10;
    ASL_INCLUDE_DIR *VAR_11;




    VAR_2++;




    if ((VAR_7[0] == '/') ||
        (VAR_7[0] == '\\') ||
        (VAR_7[1] == ':'))
    {
        VAR_10 = FUNC_1 (
            "", VAR_7, VAR_8, VAR_9);
        if (!VAR_10)
        {
            goto ErrorExit;
        }
        return (VAR_10);
    }
    VAR_10 = FUNC_1 (
        VAR_3, VAR_7, VAR_8, VAR_9);
    if (VAR_10)
    {
        return (VAR_10);
    }





    VAR_11 = VAR_4;
    while (VAR_11)
    {
        VAR_10 = FUNC_1 (
            VAR_11->Dir, VAR_7, VAR_8, VAR_9);
        if (VAR_10)
        {
            return (VAR_10);
        }

        VAR_11 = VAR_11->Next;
    }



ErrorExit:
    FUNC_2 (VAR_5, "%s, %s", VAR_7, FUNC_3 (VAR_6));
    FUNC_0 (VAR_0, VAR_1, 0);
    return (((void*)0));
}

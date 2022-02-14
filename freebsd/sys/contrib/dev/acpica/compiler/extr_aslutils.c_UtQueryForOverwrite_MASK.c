
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef int BOOLEAN ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (char*,struct stat*) ;
 int VAR_2 ;
 int VAR_3 ;

BOOLEAN
FUNC_3 (
    char *VAR_4)
{
    struct stat VAR_5;
    int VAR_6;


    if (!FUNC_2 (VAR_4, &VAR_5))
    {
        FUNC_1 (VAR_2, "Target file \"%s\" already exists, overwrite? [y|n] ",
            VAR_4);

        VAR_6 = FUNC_0 (VAR_3);
        if (VAR_6 == '\n')
        {
            VAR_6 = FUNC_0 (VAR_3);
        }

        if ((VAR_6 != 'y') && (VAR_6 != 'Y'))
        {
            return (VAR_0);
        }
    }

    return (VAR_1);
}

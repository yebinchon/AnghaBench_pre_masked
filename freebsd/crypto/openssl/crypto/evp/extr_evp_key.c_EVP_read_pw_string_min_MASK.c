
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int UI ;


 int VAR_0 ;
 int FUNC_0 (char*,int) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,char*,int,int) ;
 scalar_t__ FUNC_2 (int *,char const*,int ,char*,int,int,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 int FUNC_5 (int *) ;
 char* VAR_1 ;

int FUNC_6(char *VAR_2, int VAR_3, int VAR_4, const char *VAR_5,
                           int VAR_6)
{
    int VAR_7 = -1;
    char VAR_8[VAR_0];
    UI *VAR_9;

    if ((VAR_5 == ((void*)0)) && (VAR_1[0] != '\0'))
        VAR_5 = VAR_1;
    VAR_9 = FUNC_4();
    if (VAR_9 == ((void*)0))
        return VAR_7;
    if (FUNC_1(VAR_9, VAR_5, 0, VAR_2, VAR_3,
                            (VAR_4 >= VAR_0) ? VAR_0 - 1 : VAR_4) < 0
        || (VAR_6
            && FUNC_2(VAR_9, VAR_5, 0, VAR_8, VAR_3,
                                    (VAR_4 >= VAR_0) ? VAR_0 - 1 : VAR_4,
                                    VAR_2) < 0))
        goto end;
    VAR_7 = FUNC_5(VAR_9);
    FUNC_0(VAR_8, VAR_0);
 end:
    FUNC_3(VAR_9);
    return VAR_7;
}

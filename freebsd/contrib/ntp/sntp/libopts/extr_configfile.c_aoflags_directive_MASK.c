
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tOptions ;


 char* FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 char VAR_0 ;
 char* FUNC_2 (char*) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (int *,char*) ;
 char* FUNC_5 (char*,char) ;

__attribute__((used)) static char *
FUNC_6(tOptions * VAR_1, char * VAR_2)
{
    char * VAR_3;

    VAR_3 = FUNC_2(VAR_2+1);
    VAR_2 = FUNC_5(VAR_3, '>');
    if (VAR_2 != ((void*)0)) {

        size_t VAR_4 = (unsigned)(VAR_2 - VAR_3);
        char * VAR_5 = FUNC_0(VAR_4 + 1, "aoflags");

        FUNC_3(VAR_5, VAR_3, VAR_4);
        VAR_5[VAR_4] = VAR_0;
        FUNC_4(VAR_1, VAR_5);
        FUNC_1(VAR_5);

        VAR_2++;
    }

    return VAR_2;
}

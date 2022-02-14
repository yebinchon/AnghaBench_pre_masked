
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int valType; } ;
typedef TYPE_1__ tOptionValue ;


 int FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_2 (char const*) ;
 char* FUNC_3 (char const*) ;
 int VAR_2 ;
 char* FUNC_4 (int *,char const*,int *,TYPE_1__*) ;

__attribute__((used)) static char const *
FUNC_5(char const * VAR_3, size_t * VAR_4, tOptionValue * VAR_5)
{
    char const * VAR_6 = FUNC_2(VAR_3 + 1);
    *VAR_4 = (size_t)(VAR_6 - VAR_3);
    if (*VAR_4 > 64)
        return ((void*)0);
    VAR_5->valType = VAR_1;

    if (FUNC_1(*VAR_6)) {



        VAR_6 = FUNC_3(VAR_6);
        VAR_6 = FUNC_4(((void*)0), VAR_6, &VAR_2, VAR_5);
        if (VAR_6 == ((void*)0))
            return ((void*)0);
    }

    if (! FUNC_0(*VAR_6))
        return ((void*)0);

    if (*VAR_6 == '/') {



        if (*++VAR_6 != '>')
            return ((void*)0);
        VAR_5->valType = VAR_0;
    }
    return VAR_6+1;
}

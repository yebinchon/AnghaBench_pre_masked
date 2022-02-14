
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char VAR_0 ;

 char* FUNC_0 (char*,char) ;

__attribute__((used)) static void
FUNC_1(char * VAR_1)
{
    char * VAR_2;

    do {
        while (*VAR_1 == VAR_0) VAR_1++;
        VAR_2 = FUNC_0(VAR_1, VAR_0);
        if (VAR_2 == ((void*)0))
            return;






        VAR_1 = VAR_2--;
        if (*VAR_2 != '\\')
            VAR_2++;
    } while (VAR_2 == VAR_1);




    for (;;) {
        char VAR_3 = ((*VAR_2++) = *(VAR_1++));
        switch (VAR_3) {
        case 128: return;
        case '\\':
            if (*VAR_1 == VAR_0)
                --VAR_2;
        }
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char) ;
 int VAR_0 ;
 char* FUNC_1 (char*,int ) ;
 char* FUNC_2 (char*,char*) ;

__attribute__((used)) static bool
FUNC_3(char ** VAR_1, char * VAR_2, int * VAR_3)
{
    char * VAR_4 = *VAR_1 + 1;

    for (;;) {
        while (FUNC_0(*VAR_4))
            if (*(VAR_4++) == VAR_0)
                (*VAR_3)++;





        switch (*VAR_4) {
        case '"':
        case '\'':
            *VAR_2 = *(VAR_4++);
            *VAR_1 = VAR_4;
            return 1;

        case '/':



            switch (VAR_4[1]) {
            default:
                *VAR_1 = ((void*)0);
                return 0;

            case '/':



                VAR_4 = FUNC_1(VAR_4, VAR_0);
                if (VAR_4 == ((void*)0)) {
                    *VAR_1 = ((void*)0);
                    return 0;
                }
                break;

            case '*':
            {
                char * VAR_5 = FUNC_2( VAR_4+2, "*/" );



                if (VAR_5 == ((void*)0)) {
                    *VAR_1 = ((void*)0);
                    return 0;
                }

                while (VAR_4 < VAR_5) {
                    if (*(VAR_4++) == VAR_0)
                        (*VAR_3)++;
                }

                VAR_4 = VAR_5 + 2;
            }
            }
            continue;

        default:




            *VAR_1 = VAR_4;
            return 0;
        }
    }
}

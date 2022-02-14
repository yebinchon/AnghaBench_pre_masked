
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*) ;

__attribute__((used)) static char *
FUNC_2( char *VAR_0 )
{
    int VAR_1, VAR_2;
    char VAR_3, *VAR_4;


    VAR_4 = FUNC_1( VAR_0 );
 if (VAR_4 == ((void*)0)) {
 return ((void*)0);
 }
    VAR_3 = (*VAR_0 == '/') ? '/' : '.';


    VAR_1 = 0;
    while (VAR_4[VAR_1]) {
        while (VAR_4[VAR_1] != '\0' && VAR_4[VAR_1] != '/')
            VAR_1++;

        VAR_2 = VAR_1++;




        if (!VAR_4[VAR_2])
            break;


        while (VAR_4[VAR_1] == '/')
            VAR_1++;


        if ((VAR_2 + 1) != VAR_1)



        {
            FUNC_0( VAR_4 + VAR_2 + 1, VAR_4 + VAR_1 );
            VAR_1 = VAR_2 + 1;
        }


        if (VAR_2 > 0 && VAR_4[VAR_2 - 1] == '\\')
            continue;


        if ((VAR_2 && !VAR_4[VAR_1])
            || (VAR_4[VAR_1] == '.' && !VAR_4[VAR_1+1])) {
            VAR_4[--VAR_1] = '\0';
            break;
        }


        if (VAR_4[VAR_1] == '.') {

            if (VAR_4[VAR_1 + 1] == '/') {
                FUNC_0( VAR_4 + VAR_1, VAR_4 + VAR_1 + 1 );
                VAR_1 = (VAR_2 < 0) ? 0 : VAR_2;
                continue;
            }


            if (VAR_4[VAR_1 + 1] == '.' &&
                (VAR_4[VAR_1 + 2] == '/' || !VAR_4[VAR_1 + 2])) {
                while (--VAR_2 > -1 && VAR_4[VAR_2] != '/')
                    ;
                FUNC_0( VAR_4 + VAR_2 + 1, VAR_4 + VAR_1 + 2 );
                VAR_1 = (VAR_2 < 0) ? 0 : VAR_2;
                continue;
            }
        }
    }

    if (!*VAR_4) {
        *VAR_4 = VAR_3;
        VAR_4[1] = '\0';
    }

    return VAR_4;
}

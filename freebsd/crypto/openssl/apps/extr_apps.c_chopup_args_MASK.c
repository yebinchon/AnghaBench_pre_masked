
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {size_t argc; int size; char** argv; } ;
typedef TYPE_1__ ARGS ;


 char** FUNC_0 (char**,int) ;
 int FUNC_1 (char) ;
 char** FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(ARGS *VAR_0, char *VAR_1)
{
    int VAR_2;
    char VAR_3 = '\0', *VAR_4 = ((void*)0);

    VAR_0->argc = 0;
    if (VAR_0->size == 0) {
        VAR_0->size = 20;
        VAR_0->argv = FUNC_2(sizeof(*VAR_0->argv) * VAR_0->size, "argv space");
    }

    for (VAR_4 = VAR_1;;) {

        while (*VAR_4 && FUNC_3(FUNC_1(*VAR_4)))
            VAR_4++;
        if (!*VAR_4)
            break;


        if (VAR_0->argc >= VAR_0->size) {
            char **VAR_5;
            VAR_0->size += 20;
            VAR_5 = FUNC_0(VAR_0->argv, sizeof(*VAR_0->argv) * VAR_0->size);
            if (VAR_5 == ((void*)0))
                return 0;
            VAR_0->argv = VAR_5;
        }
        VAR_2 = *VAR_4 == '\'' || *VAR_4 == '"';
        if (VAR_2)
            VAR_3 = *VAR_4++;
        VAR_0->argv[VAR_0->argc++] = VAR_4;


        if (VAR_2) {
            while (*VAR_4 && *VAR_4 != VAR_3)
                VAR_4++;
            *VAR_4++ = '\0';
        } else {
            while (*VAR_4 && !FUNC_3(FUNC_1(*VAR_4)))
                VAR_4++;
            if (*VAR_4)
                *VAR_4++ = '\0';
        }
    }
    VAR_0->argv[VAR_0->argc] = ((void*)0);
    return 1;
}

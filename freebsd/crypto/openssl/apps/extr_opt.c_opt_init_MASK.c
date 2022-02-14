
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char* name; int valtype; scalar_t__ retval; } ;
typedef TYPE_1__ OPTIONS ;


 char* VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 char** VAR_3 ;
 int FUNC_0 (int) ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 TYPE_1__ const* VAR_5 ;
 char* VAR_6 ;
 scalar_t__ FUNC_2 (char*,char*) ;
 TYPE_1__ const* VAR_7 ;

char *FUNC_3(int VAR_8, char **VAR_9, const OPTIONS *VAR_10)
{

    VAR_2 = VAR_8;
    VAR_3 = VAR_9;
    VAR_4 = 1;
    VAR_5 = VAR_10;
    FUNC_1(VAR_9[0]);
    VAR_7 = ((void*)0);

    for (; VAR_10->name; ++VAR_10) {

        const OPTIONS *VAR_11;
        int VAR_12, VAR_13;


        if (VAR_10->name == VAR_0 || VAR_10->name == VAR_1)
            continue;

        VAR_13 = VAR_10->valtype;


        FUNC_0(VAR_10->name[0] != '-');
        FUNC_0(VAR_10->retval > 0);
        switch (VAR_13) {
        case 0: case '-': case '/': case '<': case '>': case 'E': case 'F':
        case 'M': case 'U': case 'f': case 'l': case 'n': case 'p': case 's':
        case 'u': case 'c':
            break;
        default:
            FUNC_0(0);
        }


        for (VAR_11 = VAR_10 + 1; VAR_11->name; ++VAR_11) {



            VAR_12 = FUNC_2(VAR_10->name, VAR_11->name) == 0;
            FUNC_0(!VAR_12);
        }

        if (VAR_10->name[0] == '\0') {
            FUNC_0(VAR_7 == ((void*)0));
            VAR_7 = VAR_10;
            FUNC_0(VAR_7->valtype == 0 || VAR_7->valtype == '-');
        }
    }
    return VAR_6;
}

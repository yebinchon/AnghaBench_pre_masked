
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int tOptions ;
struct TYPE_3__ {scalar_t__ valType; } ;
typedef TYPE_1__ tOptionValue ;
typedef scalar_t__ tOptionLoadMode ;
typedef int tOptState ;


 char VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int *,int *,char*,int,scalar_t__) ;
 int FUNC_5 (char*,char,size_t) ;
 scalar_t__ VAR_3 ;
 int FUNC_6 (int *,int ,scalar_t__*,TYPE_1__*) ;
 char* FUNC_7 (char*,char) ;
 char* FUNC_8 (char*,char*,scalar_t__) ;

__attribute__((used)) static char *
FUNC_9(tOptions * VAR_4, tOptState * VAR_5, char * VAR_6, int VAR_7)
{
    tOptionLoadMode VAR_8 = VAR_3;
    tOptionValue VAR_9;

    char * VAR_10 = ++VAR_6;
    char * VAR_11;
    char * VAR_12;

    VAR_6 = FUNC_0(VAR_6);
    VAR_12 = VAR_6;
    VAR_9.valType = VAR_1;

    switch (*VAR_6) {
    case ' ':
    case '\t':
        VAR_6 = FUNC_2(FUNC_6(
            VAR_4, FUNC_1(VAR_6), &VAR_8, &VAR_9));
        if (VAR_6 == ((void*)0))
            return VAR_6;
        if (*VAR_6 == '>')
            break;
        if (*VAR_6 != '/')
            return ((void*)0);


    case '/':
        if (VAR_6[1] != '>')
            return ((void*)0);
        *VAR_6 = VAR_0;
        VAR_6 += 2;
        FUNC_4(VAR_4, VAR_5, VAR_10, VAR_7, VAR_8);
        return VAR_6;

    case '>':
        break;

    default:
        VAR_6 = FUNC_7(VAR_6, '>');
        if (VAR_6 != ((void*)0))
            VAR_6++;
        return VAR_6;
    }





    *VAR_12 = VAR_0;
    VAR_11 = ++VAR_6;
    VAR_6 = FUNC_8(VAR_6, VAR_10, VAR_8);
    if (VAR_6 == ((void*)0))
        return VAR_6;





    FUNC_5(VAR_12, ' ', (size_t)(VAR_11 - VAR_12));





    if ( (VAR_9.valType == VAR_1)
       && (VAR_8 == VAR_2))
        FUNC_3(VAR_11);





    FUNC_4(VAR_4, VAR_5, VAR_10, VAR_7, VAR_8);

    return VAR_6;
}

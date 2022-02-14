
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ttlfmt ;
struct TYPE_3__ {char const* pzProgName; } ;
typedef TYPE_1__ tOptions ;


 char* FUNC_0 (size_t,char*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char) ;
 char VAR_0 ;
 char* FUNC_3 (char*) ;
 int FUNC_4 (char*,char const*,size_t) ;
 int FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char*,char const*,int) ;
 char* FUNC_7 (char*,char*) ;
 char const* VAR_1 ;

__attribute__((used)) static char *
FUNC_8(tOptions * VAR_2, char * VAR_3)
{
    static char const VAR_4[] = "<?";
    size_t VAR_5 = sizeof(VAR_4) + FUNC_5(VAR_1);
    char * VAR_6 = FUNC_0(VAR_5, "prog title");
    size_t VAR_7 = FUNC_5(VAR_2->pzProgName);

    FUNC_4(VAR_6, VAR_4, sizeof(VAR_4) - 1);
    FUNC_4(VAR_6 + sizeof(VAR_4) - 1, VAR_1, VAR_5 - (sizeof(VAR_4) - 1));

    do {
        VAR_3 = FUNC_3(VAR_3+1);

        if ( (FUNC_6(VAR_3, VAR_2->pzProgName, (int)VAR_7) == 0)
           && (FUNC_2(VAR_3[VAR_7])) ) {
            VAR_3 += VAR_7;
            break;
        }

        VAR_3 = FUNC_7(VAR_3, VAR_6);
    } while (VAR_3 != ((void*)0));

    FUNC_1(VAR_6);
    if (VAR_3 != ((void*)0))
        for (;;) {
            if (*VAR_3 == VAR_0) {
                VAR_3 = ((void*)0);
                break;
            }
            if (*(VAR_3++) == '>')
                break;
        }

    return VAR_3;
}

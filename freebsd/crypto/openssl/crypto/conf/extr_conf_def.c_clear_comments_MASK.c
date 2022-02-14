
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 scalar_t__ FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char) ;
 scalar_t__ FUNC_2 (int *,char) ;
 scalar_t__ FUNC_3 (int *,char) ;
 scalar_t__ FUNC_4 (int *,char) ;
 scalar_t__ FUNC_5 (int *,char) ;
 int FUNC_6 (int *,char) ;
 char* FUNC_7 (int *,char*) ;
 char* FUNC_8 (int *,char*) ;
 char* FUNC_9 (int *,char*) ;

__attribute__((used)) static void FUNC_10(CONF *VAR_0, char *VAR_1)
{
    for (;;) {
        if (FUNC_4(VAR_0, *VAR_1)) {
            *VAR_1 = '\0';
            return;
        }
        if (!FUNC_6(VAR_0, *VAR_1)) {
            break;
        }
        VAR_1++;
    }

    for (;;) {
        if (FUNC_0(VAR_0, *VAR_1)) {
            *VAR_1 = '\0';
            return;
        }
        if (FUNC_1(VAR_0, *VAR_1)) {
            VAR_1 = FUNC_7(VAR_0, VAR_1);
            continue;
        }
        if (FUNC_5(VAR_0, *VAR_1)) {
            VAR_1 = FUNC_9(VAR_0, VAR_1);
            continue;
        }
        if (FUNC_3(VAR_0, *VAR_1)) {
            VAR_1 = FUNC_8(VAR_0, VAR_1);
            continue;
        }
        if (FUNC_2(VAR_0, *VAR_1))
            return;
        else
            VAR_1++;
    }
}

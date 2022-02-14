
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int CONF ;


 int FUNC_0 (int *,char) ;
 scalar_t__ FUNC_1 (int *,char) ;
 char* FUNC_2 (int *,char*) ;

__attribute__((used)) static char *FUNC_3(CONF *VAR_0, char *VAR_1)
{
    for (;;) {
        if (FUNC_1(VAR_0, *VAR_1)) {
            VAR_1 = FUNC_2(VAR_0, VAR_1);
            continue;
        }
        if (!FUNC_0(VAR_0, *VAR_1))
            return VAR_1;
        VAR_1++;
    }
}

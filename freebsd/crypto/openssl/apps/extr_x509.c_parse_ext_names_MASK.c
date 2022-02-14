
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;

__attribute__((used)) static int FUNC_1(char *VAR_0, const char **VAR_1)
{
    char *VAR_2, *VAR_3;
    int VAR_4 = 0, VAR_5 = 0;

    VAR_2 = VAR_3 = VAR_0;
    VAR_5 = FUNC_0(VAR_0);

    while (VAR_3 - VAR_0 <= VAR_5) {
        if (*VAR_3 != ',' && *VAR_3 != '\0') {
            VAR_3++;
            continue;
        }
        if (VAR_2 != VAR_3) {

            if (VAR_1 != ((void*)0)) {
                VAR_1[VAR_4] = VAR_2;
                *VAR_3 = '\0';
            }
            VAR_4++;
        }
        VAR_2 = ++VAR_3;
    }

    return VAR_4;
}

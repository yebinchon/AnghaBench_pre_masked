
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char* FUNC_0 (int *,int) ;
 char* FUNC_1 (int *,char const*) ;

__attribute__((used)) static char *
FUNC_2(const char *VAR_0, int VAR_1, apr_pool_t *VAR_2)
{
    int VAR_3, VAR_4 = 0;
    char *VAR_5;


    for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
        if (VAR_0[VAR_3] == '\0')
            VAR_4++;
    }

    if (VAR_4 == 0) {

        VAR_5 = FUNC_1(VAR_2, VAR_0);
    } else {




        char *VAR_6;
        VAR_5 = VAR_6 = FUNC_0(VAR_2, VAR_1 + 2 * VAR_4 + 1);
        for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++) {
            if (VAR_0[VAR_3] != '\0') {
                *(VAR_6++) = VAR_0[VAR_3];
            } else {
                *(VAR_6++) = '\\';
                *(VAR_6++) = '0';
                *(VAR_6++) = '0';
            }
        }
        *VAR_6 = '\0';
    }

    return VAR_5;
}

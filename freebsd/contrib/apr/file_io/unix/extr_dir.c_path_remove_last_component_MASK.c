
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 char const VAR_0 ;
 char* FUNC_0 (int *,char const*,int) ;
 char* FUNC_1 (char const*,int *) ;
 int FUNC_2 (char const*) ;

__attribute__((used)) static char *FUNC_3 (const char *VAR_1, apr_pool_t *VAR_2)
{
    const char *VAR_3 = FUNC_1 (VAR_1, VAR_2);
    int VAR_4;

    for (VAR_4 = (FUNC_2(VAR_3) - 1); VAR_4 >= 0; VAR_4--) {
        if (VAR_1[VAR_4] == VAR_0)
            break;
    }

    return FUNC_0 (VAR_2, VAR_1, (VAR_4 < 0) ? 0 : VAR_4);
}

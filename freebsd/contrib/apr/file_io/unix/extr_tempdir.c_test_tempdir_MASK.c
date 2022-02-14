
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;
typedef int apr_file_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int **,char*,int ,int *) ;
 scalar_t__ FUNC_2 (char,int *) ;
 char* FUNC_3 (int *,char const*,char*,int *) ;

__attribute__((used)) static int FUNC_4(const char *VAR_1, apr_pool_t *VAR_2)
{
    apr_file_t *VAR_3;
    char *VAR_4 = FUNC_3(VAR_2, VAR_1, "/apr-tmp.XXXXXX", ((void*)0));

    if (FUNC_1(&VAR_3, VAR_4, 0, VAR_2) == VAR_0) {
        if (FUNC_2('!', VAR_3) == VAR_0) {
            if (FUNC_0(VAR_3) == VAR_0) {
                return 1;
            }
        }
    }
    return 0;
}

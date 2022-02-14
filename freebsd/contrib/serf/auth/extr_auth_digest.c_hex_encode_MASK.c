
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int apr_pool_t ;


 int VAR_0 ;
 char* FUNC_0 (int *,int) ;
 char FUNC_1 (unsigned char const) ;

__attribute__((used)) static const char *
FUNC_2(const unsigned char *VAR_1,
           apr_pool_t *VAR_2)
{
    int VAR_3;
    char *VAR_4 = FUNC_0(VAR_2, (VAR_0 * 2) + 1);
    for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
        VAR_4[2 * VAR_3] = FUNC_1((VAR_1[VAR_3] >> 4) & 0xf);
        VAR_4[2 * VAR_3 + 1] = FUNC_1(VAR_1[VAR_3] & 0xf);
    }
    VAR_4[VAR_0 * 2] = '\0';
    return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int ssize_t ;


 int FUNC_0 (int const*,size_t,size_t*,size_t*) ;

ssize_t
FUNC_1 (const u_char *VAR_0,
        size_t VAR_1,
        const u_char **VAR_2)
{
    size_t VAR_3, VAR_4, VAR_5, VAR_6;
    const u_char *VAR_7 = VAR_0;
    int VAR_8;

    if (VAR_1 < 1)
 return -1;
    if (*VAR_7++ != 0x60)
 return -1;
    VAR_8 = FUNC_0 (VAR_7, VAR_1 - 1, &VAR_3, &VAR_4);
    if (VAR_8 || 1 + VAR_4 + VAR_3 != VAR_1)
 return -1;
    VAR_7 += VAR_4;
    if (*VAR_7++ != 0x06)
 return -1;
    VAR_8 = FUNC_0 (VAR_7, VAR_1 - 1 - VAR_4 - 1,
   &VAR_5, &VAR_6);
    if (VAR_8)
 return -1;
    VAR_7 += VAR_6;
    *VAR_2 = VAR_7;
    return VAR_5;
}

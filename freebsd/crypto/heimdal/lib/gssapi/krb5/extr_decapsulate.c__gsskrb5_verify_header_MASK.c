
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int gss_OID ;
typedef scalar_t__ OM_uint32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int **,size_t,int ) ;
 scalar_t__ FUNC_1 (int *,void const*,int) ;

OM_uint32
FUNC_2(u_char **VAR_1,
     size_t VAR_2,
     const void *VAR_3,
     gss_OID VAR_4)
{
    OM_uint32 VAR_5;
    size_t VAR_6;
    u_char *VAR_7 = *VAR_1;

    VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_4);
    if (VAR_5)
 return VAR_5;

    VAR_6 = VAR_2 - (*VAR_1 - VAR_7);

    if (VAR_6 < 2)
 return VAR_0;

    if (FUNC_1 (*VAR_1, VAR_3, 2) != 0)
 return VAR_0;
    *VAR_1 += 2;

    return 0;
}

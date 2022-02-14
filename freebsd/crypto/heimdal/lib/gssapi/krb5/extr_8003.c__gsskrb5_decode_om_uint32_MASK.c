
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int krb5_error_code ;
typedef int OM_uint32 ;



krb5_error_code
FUNC_0(const void *VAR_0, OM_uint32 *VAR_1)
{
    const u_char *VAR_2 = VAR_0;
    *VAR_1 = (VAR_2[0] << 0) | (VAR_2[1] << 8) | (VAR_2[2] << 16) | (VAR_2[3] << 24);
    return 0;
}

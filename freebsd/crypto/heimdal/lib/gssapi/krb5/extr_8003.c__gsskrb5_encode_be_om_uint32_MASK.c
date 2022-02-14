
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_char ;
typedef int krb5_error_code ;
typedef int OM_uint32 ;



krb5_error_code
FUNC_0(OM_uint32 VAR_0, u_char *VAR_1)
{
  VAR_1[0] = (VAR_0 >> 24) & 0xFF;
  VAR_1[1] = (VAR_0 >> 16) & 0xFF;
  VAR_1[2] = (VAR_0 >> 8) & 0xFF;
  VAR_1[3] = (VAR_0 >> 0) & 0xFF;
  return 0;
}

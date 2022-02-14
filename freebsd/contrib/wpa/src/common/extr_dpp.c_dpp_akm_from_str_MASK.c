
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dpp_akm { ____Placeholder_dpp_akm } dpp_akm ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static enum dpp_akm FUNC_1(const char *VAR_7)
{
 if (FUNC_0(VAR_7, "psk") == 0)
  return VAR_1;
 if (FUNC_0(VAR_7, "sae") == 0)
  return VAR_4;
 if (FUNC_0(VAR_7, "psk+sae") == 0)
  return VAR_2;
 if (FUNC_0(VAR_7, "dpp") == 0)
  return VAR_0;
 if (FUNC_0(VAR_7, "dpp+sae") == 0)
  return VAR_5;
 if (FUNC_0(VAR_7, "dpp+psk+sae") == 0)
  return VAR_3;
 return VAR_6;
}

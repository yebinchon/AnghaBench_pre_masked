
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char*) ;

__attribute__((used)) static int
FUNC_2(const char *VAR_4)
{
 if (FUNC_1(VAR_4, "ac_be") == 0 || FUNC_1(VAR_4, "be") == 0)
  return VAR_0;
 if (FUNC_1(VAR_4, "ac_bk") == 0 || FUNC_1(VAR_4, "bk") == 0)
  return VAR_1;
 if (FUNC_1(VAR_4, "ac_vi") == 0 || FUNC_1(VAR_4, "vi") == 0)
  return VAR_2;
 if (FUNC_1(VAR_4, "ac_vo") == 0 || FUNC_1(VAR_4, "vo") == 0)
  return VAR_3;
 FUNC_0(1, "unknown wme access class %s", VAR_4);
}

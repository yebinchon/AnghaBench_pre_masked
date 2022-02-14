
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char const*,char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,scalar_t__) ;

int
FUNC_2(const char *VAR_5, const char *VAR_6)
{
 int VAR_7;

 VAR_7 = FUNC_0(VAR_5, VAR_6);
 if (VAR_7 == 0)
  return (VAR_1);
 if (FUNC_1(VAR_5, VAR_6, VAR_0 + 1) == 0)
  return (VAR_4);
 return (VAR_7 < 0 ? VAR_3 : VAR_2);
}

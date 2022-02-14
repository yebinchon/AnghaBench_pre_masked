
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*) ;
 int FUNC_1 (char const*) ;
 int FUNC_2 (char const*,char const*,int) ;

int FUNC_3(const char *VAR_1, const char *VAR_2, int VAR_3)
{
 int VAR_4, VAR_5;
 const char *VAR_6;

 VAR_4 = FUNC_1(VAR_1);
 VAR_5 = FUNC_1(VAR_2);
 if (VAR_5 < VAR_4)
  return 1;

 VAR_3 = VAR_3 == VAR_0 ? FUNC_0(VAR_2) : VAR_3;
 if (VAR_5 - VAR_3 != VAR_4)
  return 1;

 VAR_6 = VAR_2 + VAR_3;

 return FUNC_2(VAR_6, VAR_1, VAR_4);
}

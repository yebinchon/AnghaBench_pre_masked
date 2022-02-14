
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char u8 ;


 scalar_t__ FUNC_0 (char const*,char const*,size_t) ;
 size_t FUNC_1 (char const*) ;

int FUNC_2(const u8 *VAR_0, size_t VAR_1)
{
 static const char *VAR_2 = "anonymous@";
 size_t VAR_3 = FUNC_1(VAR_2);

 if (VAR_1 > VAR_3 &&
     FUNC_0(VAR_0, VAR_2, VAR_3) == 0)
  return 1;

 if (VAR_1 > 1 && VAR_0[0] == '@')
  return 1;

 return 0;
}

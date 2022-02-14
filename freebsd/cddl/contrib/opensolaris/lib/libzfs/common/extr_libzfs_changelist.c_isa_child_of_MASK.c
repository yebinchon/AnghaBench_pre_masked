
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,int) ;

boolean_t
FUNC_2(const char *VAR_2, const char *VAR_3)
{
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3);

 if (FUNC_1(VAR_2, VAR_3, VAR_4) == 0 &&
     (VAR_2[VAR_4] == '@' || VAR_2[VAR_4] == '/' ||
     VAR_2[VAR_4] == '\0'))
  return (VAR_1);
 else
  return (VAR_0);

}

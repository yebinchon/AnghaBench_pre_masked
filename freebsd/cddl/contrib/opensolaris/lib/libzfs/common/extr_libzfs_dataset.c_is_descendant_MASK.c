
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int boolean_t ;


 int VAR_0 ;
 size_t FUNC_0 (char const*) ;
 scalar_t__ FUNC_1 (char const*,char const*,size_t) ;

__attribute__((used)) static boolean_t
FUNC_2(const char *VAR_1, const char *VAR_2)
{
 size_t VAR_3 = FUNC_0(VAR_1);


 if (FUNC_0(VAR_2) < VAR_3)
  return (VAR_0);


 return (VAR_2[VAR_3] == '/' && (FUNC_1(VAR_1, VAR_2, VAR_3) == 0));
}

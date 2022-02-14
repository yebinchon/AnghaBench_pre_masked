
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const) ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 size_t FUNC_2 (char const*) ;

__attribute__((used)) static size_t
FUNC_3(const char *VAR_0, const char *VAR_1, size_t VAR_2)
{
 const size_t VAR_3 = FUNC_2(VAR_0);




 if (VAR_2 <= VAR_3
   || FUNC_0(VAR_1[VAR_2 - VAR_3 - 1]))
  return 0;

 if (FUNC_1(VAR_0, VAR_1 + VAR_2 - VAR_3) == 0)
  return VAR_2 - VAR_3;

 return 0;
}

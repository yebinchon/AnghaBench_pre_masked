
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,int) ;

const char *FUNC_3(const char *VAR_1)
{
 const char *VAR_2;

 if (!VAR_1 || !*VAR_1)
  return ((void*)0);
 VAR_2 = VAR_1 + FUNC_1(VAR_1);

 while (VAR_1 <= VAR_2 && !FUNC_0(*VAR_2))
  VAR_2--;

 if (VAR_2 >= VAR_1) {
  VAR_0 = FUNC_2(VAR_1, VAR_2 - VAR_1);
  return VAR_0 ? VAR_2 + 1 : ((void*)0);
 }

 return VAR_1;
}

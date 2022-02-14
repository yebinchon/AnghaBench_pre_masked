
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const) ;
 int FUNC_1 (char const*) ;
 size_t FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char const*,char const*,size_t) ;

__attribute__((used)) static const char *
FUNC_4(const char **VAR_0, const char *VAR_1)
{
 const char *VAR_2, *VAR_3;
 size_t VAR_4;

 VAR_4 = FUNC_2(VAR_1);
 VAR_2 = *VAR_0;
 FUNC_1(VAR_2);
 VAR_3 = VAR_2;
 if (FUNC_3(VAR_2, VAR_1, VAR_4) != 0)
  return ((void*)0);
 VAR_2 += VAR_4;
 if (*VAR_2 != '\0' && !FUNC_0(*VAR_2))
  return ((void*)0);
 FUNC_1(VAR_2);
 VAR_3 = *VAR_0;
 *VAR_0 = VAR_2;
 return VAR_3;
}

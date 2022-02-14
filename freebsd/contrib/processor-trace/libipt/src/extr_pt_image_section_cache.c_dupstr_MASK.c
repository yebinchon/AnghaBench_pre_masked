
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (size_t) ;
 char* FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (char const*,unsigned long) ;

__attribute__((used)) static char *FUNC_3(const char *VAR_0)
{
 char *VAR_1;
 size_t VAR_2;

 if (!VAR_0)
  return ((void*)0);


 VAR_2 = FUNC_2(VAR_0, 4096ul);

 VAR_1 = FUNC_0(VAR_2 + 1);
 if (!VAR_1)
  return ((void*)0);

 VAR_1[VAR_2] = 0;

 return FUNC_1(VAR_1, VAR_0, VAR_2);
}

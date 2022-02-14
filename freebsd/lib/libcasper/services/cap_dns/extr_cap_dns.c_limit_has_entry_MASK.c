
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 char* FUNC_0 (int const*,int *,void**) ;
 size_t FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char const*,char const*,size_t) ;

__attribute__((used)) static bool
FUNC_3(const nvlist_t *VAR_0, const char *VAR_1)
{
 const char *VAR_2;
 size_t VAR_3;
 void *VAR_4;

 if (VAR_0 == ((void*)0))
  return (0);

 VAR_3 = FUNC_1(VAR_1);

 VAR_4 = ((void*)0);
 while ((VAR_2 = FUNC_0(VAR_0, ((void*)0), &VAR_4)) != ((void*)0)) {
  if (FUNC_2(VAR_2, VAR_1, VAR_3) == 0)
   return (1);
 }

 return (0);
}

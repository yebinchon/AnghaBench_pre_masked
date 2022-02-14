
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int nvlist_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const*,char const*) ;
 char* FUNC_1 (int const*,int *,void**) ;
 scalar_t__ FUNC_2 (char const*,char*,int) ;

__attribute__((used)) static bool
FUNC_3(const nvlist_t *VAR_1, int VAR_2)
{
 const char *VAR_3;
 bool VAR_4;
 void *VAR_5;

 if (VAR_1 == ((void*)0))
  return (1);

 VAR_4 = 1;
 VAR_5 = ((void*)0);
 while ((VAR_3 = FUNC_1(VAR_1, ((void*)0), &VAR_5)) != ((void*)0)) {
  if (FUNC_2(VAR_3, "family", sizeof("family") - 1) != 0)
   continue;
  VAR_4 = 0;
  if (VAR_2 == VAR_0)
   continue;
  if (FUNC_0(VAR_1, VAR_3) == (uint64_t)VAR_2)
   return (1);
 }


 if (VAR_4)
  return (1);

 return (0);
}

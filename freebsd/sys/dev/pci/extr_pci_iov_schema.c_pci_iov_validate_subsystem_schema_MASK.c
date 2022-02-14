
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*,char const*) ;
 int * FUNC_1 (int const*,char const*) ;
 char* FUNC_2 (int const*,int*,void**) ;
 int FUNC_3 (int const*) ;

__attribute__((used)) static int
FUNC_4(const nvlist_t *VAR_2, const char *VAR_3)
{
 const nvlist_t *VAR_4, *VAR_5;
 const char *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;

 if (!FUNC_0(VAR_2, VAR_3))
  return (VAR_0);
 VAR_4 = FUNC_1(VAR_2, VAR_3);

 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_2(VAR_4, &VAR_8, &VAR_7)) != ((void*)0)) {
  if (VAR_8 != VAR_1)
   return (VAR_0);
  VAR_5 = FUNC_1(VAR_4, VAR_6);

  VAR_9 = FUNC_3(VAR_5);
  if (VAR_9 != 0)
   return (VAR_9);
 }

 return (0);
}

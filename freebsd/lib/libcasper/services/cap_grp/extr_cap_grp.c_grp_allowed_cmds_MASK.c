
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,char const*) ;
 char* FUNC_1 (int const*,int*,void**) ;

__attribute__((used)) static int
FUNC_2(const nvlist_t *VAR_3, const nvlist_t *VAR_4)
{
 const char *VAR_5;
 void *VAR_6;
 int VAR_7;

 VAR_6 = ((void*)0);
 while ((VAR_5 = FUNC_1(VAR_4, &VAR_7, &VAR_6)) != ((void*)0)) {
  if (VAR_7 != VAR_2)
   return (VAR_0);
  if (!FUNC_0(VAR_3, VAR_5))
   return (VAR_1);
 }

 return (0);
}

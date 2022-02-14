
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (void*) ;
 char* FUNC_1 (int const*,int*,void**) ;
 scalar_t__ FUNC_2 (char const*,char*) ;
 int FUNC_3 (int const*,int const*) ;
 int FUNC_4 (int const*,int) ;

__attribute__((used)) static int
FUNC_5(const nvlist_t *VAR_3, const nvlist_t *VAR_4)
{
 const nvlist_t *VAR_5;
 const char *VAR_6;
 void *VAR_7;
 int VAR_8, VAR_9;

 VAR_7 = ((void*)0);
 while ((VAR_6 = FUNC_1(VAR_4, &VAR_9, &VAR_7)) != ((void*)0)) {
  if (FUNC_2(VAR_6, "limit") != 0 || VAR_9 != VAR_2)
   return (VAR_0);
  VAR_5 = FUNC_0(VAR_7);
  VAR_8 = FUNC_4(VAR_5, 1);
  if (VAR_8 != 0)
   return (VAR_8);
  if (!FUNC_3(VAR_3, VAR_5))
   return (VAR_1);
 }

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;


 int FUNC_0 (struct type*) ;
 struct type* FUNC_1 (struct type*,int ) ;
 scalar_t__ FUNC_2 (struct type*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 char* FUNC_3 (struct type*,int ) ;
 scalar_t__ FUNC_4 (struct type*) ;
 scalar_t__ FUNC_5 (struct type*) ;
 char* FUNC_6 (struct type*) ;
 int FUNC_7 (struct type*) ;
 struct type* FUNC_8 (int ) ;
 struct type* VAR_2 ;
 scalar_t__ FUNC_9 (char*,char*) ;

int
FUNC_10 (struct type *VAR_3)
{
  FUNC_0 (VAR_3);
  if (FUNC_2 (VAR_3) == VAR_0)
    {
      struct type *VAR_4 = FUNC_8 (FUNC_7 (VAR_3));
      char *VAR_5;
      if (FUNC_2 (VAR_4) != VAR_1)
 return 0;
      while (FUNC_5 (VAR_4) > 0)
 VAR_4 = FUNC_1 (VAR_4, 0);
      VAR_5 = FUNC_6 (VAR_4);
      if (VAR_5 != ((void*)0) && FUNC_9 (VAR_5, "java.lang.Object") == 0)
 return 1;
      VAR_5 = FUNC_4 (VAR_4) > 0 ? FUNC_3 (VAR_4, 0) : (char *) 0;
      if (VAR_5 != ((void*)0) && FUNC_9 (VAR_5, "vtable") == 0)
 {
   if (VAR_2 == ((void*)0))
     VAR_2 = VAR_3;
   return 1;
 }
    }
  return 0;
}

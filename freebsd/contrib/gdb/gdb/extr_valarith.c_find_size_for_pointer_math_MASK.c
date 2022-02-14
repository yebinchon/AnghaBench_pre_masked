
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct type {int dummy; } ;
typedef int LONGEST ;


 scalar_t__ FUNC_0 (struct type*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct type*) ;
 char* FUNC_2 (struct type*) ;
 char* FUNC_3 (struct type*) ;
 int FUNC_4 (struct type*) ;
 struct type* FUNC_5 (int ) ;
 int FUNC_6 (char*,...) ;

__attribute__((used)) static LONGEST
FUNC_7 (struct type *VAR_1)
{
  LONGEST VAR_2 = -1;
  struct type *VAR_3;

  VAR_3 = FUNC_5 (FUNC_4 (VAR_1));

  VAR_2 = FUNC_1 (VAR_3);
  if (VAR_2 == 0)
    {
      if (FUNC_0 (VAR_1) == VAR_0)
 VAR_2 = 1;
      else
 {
   char *VAR_4;

   VAR_4 = FUNC_2 (VAR_3);
   if (VAR_4 == ((void*)0))
     VAR_4 = FUNC_3 (VAR_3);
   if (VAR_4 == ((void*)0))
     FUNC_6 ("Cannot perform pointer math on incomplete types, "
     "try casting to a known type, or void *.");
   else
     FUNC_6 ("Cannot perform pointer math on incomplete type \"%s\", "
     "try casting to a known type, or void *.", VAR_4);
 }
    }
  return VAR_2;
}

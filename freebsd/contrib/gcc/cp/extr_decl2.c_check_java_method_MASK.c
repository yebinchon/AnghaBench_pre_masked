
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 scalar_t__ FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 char* VAR_0 ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,char*,char*) ;
 char* VAR_1 ;

bool
FUNC_8 (tree VAR_2)
{
  bool VAR_3 = 0;
  tree VAR_4 = FUNC_5 (FUNC_3 (VAR_2));
  tree VAR_5 = FUNC_3 (FUNC_3 (VAR_2));

  if (!FUNC_6 (VAR_5))
    {
      FUNC_7 ("Java method %qD has non-Java return type %qT",
      VAR_2, VAR_5);
      VAR_3 = 1;
    }

  VAR_4 = FUNC_2 (VAR_4);
  if (FUNC_0 (VAR_2))
    VAR_4 = FUNC_2 (VAR_4);
  if (FUNC_1 (VAR_2))
    VAR_4 = FUNC_2 (VAR_4);

  for (; VAR_4 != VAR_0; VAR_4 = FUNC_2 (VAR_4))
    {
      tree VAR_6 = FUNC_4 (VAR_4);
      if (!FUNC_6 (VAR_6))
 {
          if (VAR_6 != VAR_1)
     FUNC_7 ("Java method %qD has non-Java parameter type %qT",
     VAR_2, VAR_6);
   VAR_3 = 1;
 }
    }
  return !VAR_3;
}

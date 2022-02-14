
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char* tree ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (char*) ;
 char* FUNC_3 (char*) ;
 char* FUNC_4 (char*,char*) ;
 char* FUNC_5 (int ,char*,char*,int ,char*,char*,int) ;
 char* FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,int,char*) ;
 char* VAR_3 ;
 char* FUNC_8 (char*,char*,char*) ;
 char* FUNC_9 (char*) ;

tree
FUNC_10 (tree VAR_4, tree VAR_5, tree VAR_6, int VAR_7)
{


  if (FUNC_2 (VAR_5) == VAR_1)
    {
      FUNC_7 ("the default argument for parameter %d of %qD has "
      "not yet been parsed",
      VAR_7, VAR_6);
      return VAR_3;
    }

  if (VAR_6 && FUNC_1 (VAR_6))
    VAR_5 = FUNC_8 (VAR_6, VAR_4, VAR_5);

  VAR_5 = FUNC_3 (VAR_5);

  if (FUNC_2 (VAR_5) == VAR_0)
    {
      VAR_5 = FUNC_6 (VAR_4, VAR_5);
      VAR_5 = FUNC_5 (0, VAR_4, VAR_5, VAR_2,
     "default argument", VAR_6, VAR_7);
    }
  else
    {






      if (!FUNC_0 (VAR_5))
 VAR_5 = FUNC_9 (VAR_5);
      VAR_5 = FUNC_5 (0, VAR_4, VAR_5, VAR_2,
     "default argument", VAR_6, VAR_7);
      VAR_5 = FUNC_4 (VAR_4, VAR_5);
    }

  return VAR_5;
}

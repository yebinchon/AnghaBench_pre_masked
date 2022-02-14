
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 char* FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char const*) ;
 int FUNC_7 (char const*) ;
 int VAR_2 ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 int VAR_3 ;
 int FUNC_11 (char) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (char*) ;

tree
FUNC_14 (tree VAR_4, const int VAR_5, tree VAR_6,
       tree VAR_7)
{
  const char *VAR_8;

  FUNC_10 (VAR_4, 1);

  FUNC_13 ("_Z");
  FUNC_11 ('T');

  if (!VAR_5)
    {

      FUNC_11 ('c');
      FUNC_8 (VAR_2, VAR_1);
      FUNC_8 (VAR_6, VAR_7);
    }
  else if (!FUNC_1 (VAR_4))

    FUNC_8 (VAR_6, VAR_7);
  else
    {

      FUNC_11 ('c');
      FUNC_8 (VAR_6, VAR_7);
      VAR_6 = FUNC_9 (FUNC_2 (VAR_4));
      VAR_7 = FUNC_4 (VAR_4);
      if (VAR_7)
 VAR_7 = FUNC_0 (VAR_7);
      FUNC_8 (VAR_6, VAR_7);
      VAR_4 = FUNC_3 (VAR_4);
    }


  FUNC_12 (VAR_4);

  VAR_8 = FUNC_5 ( 0);
  if (VAR_0)
    FUNC_6 (VAR_3, "mangle_thunk = %s\n\n", VAR_8);
  return FUNC_7 (VAR_8);
}

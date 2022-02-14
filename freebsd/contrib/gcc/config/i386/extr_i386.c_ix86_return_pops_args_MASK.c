
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,int ) ;
 scalar_t__ FUNC_8 (char*,int ) ;
 int FUNC_9 (scalar_t__) ;
 scalar_t__ VAR_6 ;

int
FUNC_10 (tree VAR_7, tree VAR_8, int VAR_9)
{
  int VAR_10 = VAR_5 && (!VAR_7 || FUNC_1 (VAR_7) != VAR_0);


  if (! FUNC_8 ("cdecl", FUNC_5 (VAR_8))) {



    if (FUNC_8 ("stdcall", FUNC_5 (VAR_8))
        || FUNC_8 ("fastcall", FUNC_5 (VAR_8)))
      VAR_10 = 1;

    if (VAR_10
        && (FUNC_4 (VAR_8) == VAR_2
     || (FUNC_3 (FUNC_9 (FUNC_4 (VAR_8)))
  == VAR_6)))
      return VAR_9;
  }


  if (FUNC_6 (FUNC_2 (VAR_8), VAR_7)
      && !VAR_4
      && !VAR_1)
    {
      int VAR_11 = FUNC_7 (VAR_8, VAR_7);

      if (!VAR_11)
 return FUNC_0 (VAR_3);
    }

  return 0;
}

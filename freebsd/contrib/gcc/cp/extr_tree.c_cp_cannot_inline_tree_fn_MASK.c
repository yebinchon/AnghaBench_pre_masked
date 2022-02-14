
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int DECL_UNINLINABLE ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ,int ,int ) ;
 int * FUNC_9 (char*,int ) ;
 int FUNC_10 (int ) ;
 scalar_t__ FUNC_11 (int ) ;

int
FUNC_12 (tree* VAR_1)
{
  tree VAR_2 = *VAR_1;



  if (FUNC_4 (VAR_2)
      && FUNC_6 (FUNC_4 (VAR_2)))
    {


      if (!FUNC_2 (FUNC_5
   (FUNC_10 (VAR_2))))
 return 1;

      VAR_2 = *VAR_1 = FUNC_8 (VAR_2, 0, 0);

      if (FUNC_6 (FUNC_4 (VAR_2)))
 return 1;
    }

  if (VAR_0
      && FUNC_9 ("always_inline", FUNC_0 (VAR_2)) == ((void*)0))
    return 1;



  if (!FUNC_1 (VAR_2) && FUNC_3 (VAR_2))
    {
      DECL_UNINLINABLE (VAR_3) = 1;
      return 1;
    }

  if (FUNC_11 (VAR_2))
    {
      DECL_UNINLINABLE (VAR_4) = 1;
      return 1;
    }

  if (! FUNC_7 (VAR_2))
    {
      DECL_UNINLINABLE (VAR_5) = 1;
      return 1;
    }

  return 0;
}

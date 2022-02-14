
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__) ;
 scalar_t__ FUNC_4 () ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_5 (tree *VAR_3, tree VAR_4, tree VAR_5)
{
  tree VAR_6, VAR_7;

  VAR_7 = FUNC_0 (*VAR_3, 1);
  *VAR_3 = FUNC_0 (*VAR_3, 0);

  if (FUNC_2 (*VAR_3))
    {
      if (!VAR_5)
 VAR_5 = FUNC_4 ();
      VAR_6 = FUNC_3 (VAR_0, VAR_2, VAR_5);
      FUNC_1 (VAR_6, VAR_3);
    }

  if (VAR_4)
    {
      VAR_6 = FUNC_3 (VAR_1, VAR_2, VAR_4);
      FUNC_1 (VAR_6, VAR_3);
    }

  FUNC_1 (VAR_7, VAR_3);

  if (VAR_5)
    {
      VAR_6 = FUNC_3 (VAR_1, VAR_2, VAR_5);
      FUNC_1 (VAR_6, VAR_3);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int VAR_4 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,scalar_t__) ;
 int VAR_6 ;
 scalar_t__ FUNC_6 (int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_8 ;
 int FUNC_8 (scalar_t__,int*) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 () ;

tree
FUNC_12 (tree VAR_9)
{
  tree VAR_10 = VAR_2;
  int VAR_11 = 0;

  if (VAR_9 == VAR_7 || !FUNC_11 ())
    return VAR_7;

  if (VAR_8)
    return FUNC_5 (VAR_4, VAR_6, VAR_9);

  if (FUNC_0 (VAR_9) == VAR_1
      && FUNC_0 (FUNC_2 (FUNC_1 (VAR_9, 0))) == VAR_3
      && FUNC_3 (FUNC_2 (VAR_9))
      && ! FUNC_8 (VAR_9, &VAR_11)
      && ! VAR_11)
    {
      VAR_9 = FUNC_9 (VAR_9);
      VAR_10 = FUNC_6 (VAR_5, FUNC_1 (VAR_9, 0));
    }

  VAR_9 = FUNC_7 (VAR_9);

  if (VAR_9 == VAR_7)
    return VAR_7;

  if (VAR_10)
    {
      tree VAR_12 = FUNC_10 ();

      VAR_9 = FUNC_4 (VAR_0, FUNC_2 (VAR_9), VAR_10, VAR_9, VAR_12);
    }

  return VAR_9;
}

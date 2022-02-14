
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;


 int FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__,int ,scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (scalar_t__) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_8 (int) ;
 int VAR_3 ;
 scalar_t__ FUNC_9 (scalar_t__,scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_11 (tree VAR_4, tree VAR_5, tree VAR_6)
{
  int VAR_7, VAR_8 = FUNC_5 (VAR_4);
  tree VAR_9;
  tree VAR_10;

  VAR_10 = FUNC_8 (VAR_8);
  if (FUNC_3 (VAR_6))
    {
      VAR_9 = FUNC_7 (VAR_6);
      FUNC_1 (VAR_9,
      FUNC_2 (VAR_9),
      VAR_10);
    }
  else
    VAR_9 = VAR_10;

  if (FUNC_10 (VAR_4, VAR_9,
      FUNC_0 (VAR_5),
      FUNC_0 (VAR_6),
      VAR_1))
    return VAR_0;

  for (VAR_7 = 0; VAR_7 < VAR_8; ++VAR_7)
    if (! FUNC_4 (VAR_10, VAR_7))
      return VAR_0;
  VAR_5 = FUNC_9 (VAR_5, VAR_9, VAR_3, VAR_0);
  if (VAR_5 == VAR_2


      || !FUNC_6 (FUNC_0 (VAR_5),
         FUNC_0 (VAR_6)))
    return VAR_0;

  return VAR_9;
}

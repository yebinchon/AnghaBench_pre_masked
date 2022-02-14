
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef int REAL_VALUE_TYPE ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int VAR_4 ;
 int FUNC_8 (int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (int ,int ,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (int ,int ,int ) ;
 scalar_t__ FUNC_12 (int ) ;
 int FUNC_13 (int ,int ,int ) ;

__attribute__((used)) static tree
FUNC_14 (tree VAR_8, tree VAR_9)
{
  tree VAR_10 = FUNC_5 (FUNC_5 (VAR_8));
  tree VAR_11, VAR_12;

  if (!FUNC_13 (VAR_9, VAR_3, VAR_4))
    return VAR_1;

  VAR_11 = FUNC_6 (VAR_9);


  if (FUNC_2 (VAR_11) == VAR_2
      && !FUNC_3 (VAR_11))
    {
      REAL_VALUE_TYPE VAR_13;

      VAR_13 = FUNC_4 (VAR_11);
      VAR_12 = FUNC_1 (VAR_13) ? VAR_6 : VAR_7;
      return FUNC_10 (VAR_10, VAR_12);
    }


  if (FUNC_12 (VAR_11))
    return FUNC_11 (VAR_10, VAR_7, VAR_11);


  if (!FUNC_0 (FUNC_7 (FUNC_5 (VAR_11))))
    return FUNC_9 (VAR_0, VAR_10, VAR_11,
   FUNC_8 (FUNC_5 (VAR_11), VAR_5));

  return VAR_1;
}

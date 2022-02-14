
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef int HOST_WIDE_INT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_2 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static tree
FUNC_7 (tree VAR_4, bool VAR_5,
       HOST_WIDE_INT VAR_6, tree VAR_7)
{
  if (VAR_5)

    VAR_4 = FUNC_4 (VAR_2, FUNC_0 (VAR_4), VAR_4,
         FUNC_6 (VAR_6));



  if (VAR_7)
    {
      tree VAR_8;

      VAR_4 = FUNC_5 (VAR_4);

      VAR_8 = FUNC_1 (VAR_1,
         FUNC_3 (FUNC_3
        (VAR_3)),
         VAR_4);

      VAR_8 = FUNC_1 (VAR_0, FUNC_0 (FUNC_0 (VAR_8)), VAR_8);

      VAR_8 = FUNC_2 (VAR_2, FUNC_0 (VAR_8), VAR_8, VAR_7);

      VAR_8 = FUNC_1 (VAR_0, FUNC_0 (FUNC_0 (VAR_8)), VAR_8);

      VAR_4 = FUNC_4 (VAR_2, FUNC_0 (VAR_4), VAR_4, VAR_8);
    }

  if (!VAR_5)

    VAR_4 = FUNC_4 (VAR_2, FUNC_0 (VAR_4), VAR_4,
         FUNC_6 (VAR_6));

  return VAR_4;
}

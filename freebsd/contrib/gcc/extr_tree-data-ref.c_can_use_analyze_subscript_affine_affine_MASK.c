
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,char*) ;

__attribute__((used)) static bool
FUNC_11 (tree *VAR_4, tree *VAR_5)
{
  tree VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

  if (FUNC_5 (FUNC_1 (*VAR_4))
      || FUNC_5 (FUNC_1 (*VAR_5)))

    return 0;

  VAR_7 = FUNC_8 (*VAR_4);
  VAR_8 = FUNC_0 (*VAR_4);
  VAR_9 = FUNC_6 (VAR_7, FUNC_0 (*VAR_5), VAR_0);
  VAR_6 = FUNC_7 (VAR_7, VAR_8, VAR_9);

  if (!FUNC_9 (VAR_6))
    return 0;

  if (VAR_2 && (VAR_3 & VAR_1))
    FUNC_10 (VAR_2, "can_use_subscript_aff_aff_for_symbolic \n");

  *VAR_4 = FUNC_4 (FUNC_2 (*VAR_4),
         VAR_6, FUNC_1 (*VAR_4));
  VAR_10 = FUNC_6 (VAR_7, FUNC_1 (*VAR_5), VAR_0);
  *VAR_5 = FUNC_4 (FUNC_2 (*VAR_5),
         FUNC_3 (VAR_7, 0),
         VAR_10);
  return 1;
}

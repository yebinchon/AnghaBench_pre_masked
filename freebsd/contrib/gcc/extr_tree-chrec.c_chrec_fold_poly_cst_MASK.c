
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;



 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (int ,int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_5 (scalar_t__,int ,scalar_t__) ;
 int FUNC_6 (scalar_t__,int ,scalar_t__) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 int FUNC_9 (int) ;
 int FUNC_10 (scalar_t__) ;

__attribute__((used)) static inline tree
FUNC_11 (enum tree_code VAR_2,
       tree VAR_3,
       tree VAR_4,
       tree VAR_5)
{
  FUNC_9 (VAR_4);
  FUNC_9 (VAR_5);
  FUNC_9 (FUNC_3 (VAR_4) == VAR_0);
  FUNC_9 (!FUNC_10 (VAR_5));
  FUNC_9 (VAR_3 == FUNC_8 (VAR_4));

  switch (VAR_2)
    {
    case 128:
      return FUNC_4
 (FUNC_2 (VAR_4),
  FUNC_7 (VAR_3, FUNC_0 (VAR_4), VAR_5),
  FUNC_1 (VAR_4));

    case 130:
      return FUNC_4
 (FUNC_2 (VAR_4),
  FUNC_5 (VAR_3, FUNC_0 (VAR_4), VAR_5),
  FUNC_1 (VAR_4));

    case 129:
      return FUNC_4
 (FUNC_2 (VAR_4),
  FUNC_6 (VAR_3, FUNC_0 (VAR_4), VAR_5),
  FUNC_6 (VAR_3, FUNC_1 (VAR_4), VAR_5));

    default:
      return VAR_1;
    }
}

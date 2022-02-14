
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (unsigned int,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (scalar_t__,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_7 (scalar_t__,char*,...) ;
 int FUNC_8 (scalar_t__,scalar_t__,int ) ;

__attribute__((used)) static tree
FUNC_9 (unsigned VAR_8, tree VAR_9, enum tree_code VAR_10,
    tree VAR_11, tree VAR_12)
{
  tree VAR_13 = FUNC_6 (VAR_11);
  tree VAR_14 = VAR_1;

  if (VAR_11 == VAR_1)
    return VAR_9;



  if (FUNC_1 (VAR_11) == VAR_2)

    return VAR_4;

  if (VAR_6 && (VAR_7 & VAR_3))
    {
      FUNC_7 (VAR_6, "(add_to_evolution \n");
      FUNC_7 (VAR_6, "  (loop_nb = %d)\n", VAR_8);
      FUNC_7 (VAR_6, "  (chrec_before = ");
      FUNC_8 (VAR_6, VAR_9, 0);
      FUNC_7 (VAR_6, ")\n  (to_add = ");
      FUNC_8 (VAR_6, VAR_11, 0);
      FUNC_7 (VAR_6, ")\n");
    }

  if (VAR_10 == VAR_0)
    VAR_11 = FUNC_5 (VAR_13, VAR_11, FUNC_0 (VAR_13)
      ? FUNC_4 (VAR_13, VAR_5)
      : FUNC_3 (VAR_13, -1));

  VAR_14 = FUNC_2 (VAR_8, VAR_9, VAR_11, VAR_12);

  if (VAR_6 && (VAR_7 & VAR_3))
    {
      FUNC_7 (VAR_6, "  (res = ");
      FUNC_8 (VAR_6, VAR_14, 0);
      FUNC_7 (VAR_6, "))\n");
    }

  return VAR_14;
}

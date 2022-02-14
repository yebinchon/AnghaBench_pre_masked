
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {int original_code; int value; } ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int,int ,int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (int,int,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_7 (int ,char*) ;

struct c_expr
FUNC_8 (enum tree_code VAR_7, struct c_expr VAR_8,
   struct c_expr VAR_9)
{
  struct c_expr VAR_10;

  enum tree_code VAR_11 = VAR_8;
  enum tree_code VAR_12 = VAR_9;

  VAR_10.value = FUNC_3 (VAR_7, VAR_8, VAR_9, 1);
  VAR_10.original_code = VAR_7;

  if (FUNC_0 (VAR_10.value) == VAR_1)
    return VAR_10;



  if (VAR_6)
    FUNC_6 (VAR_7, VAR_11, VAR_12);



  if (VAR_7 == VAR_0 || VAR_7 == VAR_2)
    {
      if ((VAR_11 == VAR_4 && !FUNC_4 (VAR_9))
   || (VAR_12 == VAR_4 && !FUNC_4 (VAR_8)))
 FUNC_7 (VAR_3,
                 "comparison with string literal results in unspecified behaviour");
    }
  else if (FUNC_1 (VAR_7) == VAR_5
    && (VAR_11 == VAR_4 || VAR_12 == VAR_4))
    FUNC_7 (VAR_3,
             "comparison with string literal results in unspecified behaviour");

  if (FUNC_2 (VAR_10.value)
      && !FUNC_2 (VAR_8)
      && !FUNC_2 (VAR_9))
    FUNC_5 (VAR_10.value);

  return VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {int value; } ;
typedef int c_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 struct c_expr FUNC_1 (int *,int ,int) ;
 struct c_expr FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 struct c_expr FUNC_4 (struct c_expr) ;

__attribute__((used)) static struct c_expr
FUNC_5 (c_parser *VAR_4)
{
  if (FUNC_3 (VAR_4, VAR_1))
    return FUNC_1 (VAR_4, VAR_2, 0);
  else
    {
      struct c_expr VAR_5;
      VAR_5 = FUNC_2 (VAR_4, ((void*)0));
      if (FUNC_0 (VAR_5.value) != VAR_3
   && FUNC_0 (VAR_5.value) != VAR_0)
 VAR_5 = FUNC_4 (VAR_5);
      return VAR_5;
    }
}

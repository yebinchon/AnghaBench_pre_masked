
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {int original_code; int value; } ;
typedef int c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 struct c_expr FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 struct c_expr FUNC_4 (struct c_expr) ;

__attribute__((used)) static struct c_expr
FUNC_5 (c_parser *VAR_2)
{
  struct c_expr VAR_3;
  VAR_3 = FUNC_2 (VAR_2, ((void*)0));
  while (FUNC_3 (VAR_2, VAR_1))
    {
      struct c_expr VAR_4;
      FUNC_1 (VAR_2);
      VAR_4 = FUNC_2 (VAR_2, ((void*)0));
      VAR_4 = FUNC_4 (VAR_4);
      VAR_3.value = FUNC_0 (VAR_3.value, VAR_4.value);
      VAR_3.original_code = VAR_0;
    }
  return VAR_3;
}

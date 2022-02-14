
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct c_expr {scalar_t__ value; } ;
typedef int c_parser ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 () ;
 struct c_expr FUNC_2 (int *,scalar_t__,int) ;
 struct c_expr FUNC_3 (int *,struct c_expr*) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 struct c_expr FUNC_5 (struct c_expr) ;
 int FUNC_6 (int) ;
 int FUNC_7 (struct c_expr) ;

__attribute__((used)) static void
FUNC_8 (c_parser *VAR_4, struct c_expr *VAR_5)
{
  struct c_expr VAR_6;
  FUNC_6 (!VAR_5 || FUNC_1 ());
  if (FUNC_4 (VAR_4, VAR_1) && !VAR_5)
    VAR_6 = FUNC_2 (VAR_4, VAR_2, 1);
  else
    {
      VAR_6 = FUNC_3 (VAR_4, VAR_5);
      if (VAR_6.value != VAR_2
   && FUNC_0 (VAR_6.value) != VAR_3
   && FUNC_0 (VAR_6.value) != VAR_0)
 VAR_6 = FUNC_5 (VAR_6);
    }
  FUNC_7 (VAR_6);
}

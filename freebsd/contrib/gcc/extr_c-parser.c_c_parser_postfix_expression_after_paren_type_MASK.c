
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
struct c_type_name {int dummy; } ;
struct c_expr {int original_code; int value; } ;
typedef int c_parser ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (scalar_t__,int ) ;
 struct c_expr FUNC_2 (int *,scalar_t__,int) ;
 struct c_expr FUNC_3 (int *,struct c_expr) ;
 int FUNC_4 (char*) ;
 scalar_t__ VAR_2 ;
 int FUNC_5 () ;
 int VAR_3 ;
 scalar_t__ FUNC_6 (struct c_type_name*) ;
 int FUNC_7 (scalar_t__,struct c_expr) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int ,int *,int ) ;

__attribute__((used)) static struct c_expr
FUNC_10 (c_parser *VAR_5,
           struct c_type_name *VAR_6)
{
  tree VAR_7;
  struct c_expr VAR_8;
  struct c_expr VAR_9;
  FUNC_9 (VAR_1, ((void*)0), 0);
  VAR_7 = FUNC_6 (VAR_6);
  if (VAR_7 != VAR_2 && FUNC_0 (VAR_7))
    {
      FUNC_4 ("compound literal has variable size");
      VAR_7 = VAR_2;
    }
  VAR_8 = FUNC_2 (VAR_5, VAR_7, 0);
  FUNC_5 ();
  FUNC_7 (VAR_7, VAR_8);

  if (VAR_4 && !VAR_3)
    FUNC_8 ("ISO C90 forbids compound literals");
  VAR_9.value = FUNC_1 (VAR_7, VAR_8.value);
  VAR_9.original_code = VAR_0;
  return FUNC_3 (VAR_5, VAR_9);
}

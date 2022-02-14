
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_baton {int frame; } ;
typedef enum lval_type { ____Placeholder_lval_type } lval_type ;
typedef int CORE_ADDR ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int FUNC_2 (char*,int) ;
 int FUNC_3 (int ,int,int*,int*,int *,int*,char*) ;
 int FUNC_4 (int ,int) ;

__attribute__((used)) static CORE_ADDR
FUNC_5 (void *VAR_1, int VAR_2)
{
  struct dwarf_expr_baton *VAR_3 = (struct dwarf_expr_baton *) VAR_1;
  CORE_ADDR VAR_4, VAR_5;
  enum lval_type VAR_6;
  char *VAR_7;
  int VAR_8, VAR_9, VAR_10, VAR_11;

  VAR_9 = FUNC_0 (VAR_2);
  VAR_11 = FUNC_4 (VAR_0, VAR_9);
  VAR_7 = (char *) FUNC_1 (VAR_11);

  FUNC_3 (VAR_3->frame, VAR_9, &VAR_8, &VAR_6, &VAR_5,
    &VAR_10, VAR_7);


  VAR_4 = FUNC_2 (VAR_7, VAR_11);

  return VAR_4;
}

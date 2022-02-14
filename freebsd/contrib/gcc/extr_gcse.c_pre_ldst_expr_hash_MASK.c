
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {int pattern; } ;
typedef int hashval_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int*,int *,int) ;

__attribute__((used)) static hashval_t
FUNC_2 (const void *VAR_0)
{
  int VAR_1 = 0;
  const struct ls_expr *VAR_2 = VAR_0;
  return FUNC_1 (VAR_2->pattern, FUNC_0 (VAR_2->pattern), &VAR_1, ((void*)0), 0);
}

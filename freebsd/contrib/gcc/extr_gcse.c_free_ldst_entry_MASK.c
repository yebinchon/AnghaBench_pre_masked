
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ls_expr {int stores; int loads; } ;


 int FUNC_0 (struct ls_expr*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2 (struct ls_expr * VAR_0)
{
  FUNC_1 (& VAR_0->loads);
  FUNC_1 (& VAR_0->stores);

  FUNC_0 (VAR_0);
}

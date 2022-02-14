
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dwarf_expr_baton {int objfile; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 scalar_t__ FUNC_2 () ;

__attribute__((used)) static CORE_ADDR
FUNC_3 (void *VAR_1, CORE_ADDR VAR_2)
{
  struct dwarf_expr_baton *VAR_3 = (struct dwarf_expr_baton *) VAR_1;
  CORE_ADDR VAR_4;

  if (FUNC_2 ())
    VAR_4 = FUNC_1 (VAR_0,
         VAR_3->objfile,
         VAR_2);


  else
    FUNC_0 ("Cannot find thread-local variables on this target");

  return VAR_4;
}

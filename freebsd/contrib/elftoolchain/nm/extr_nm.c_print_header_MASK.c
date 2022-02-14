
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int undef_only; scalar_t__ print_name; int * elem_print_fn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 TYPE_1__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int * VAR_3 ;
 int * VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static void
FUNC_1(const char *VAR_6, const char *VAR_7)
{

 if (VAR_6 == ((void*)0))
  return;

 if (VAR_2.elem_print_fn == &VAR_5) {
  FUNC_0("\n\n%s from %s",
      VAR_2.undef_only == 0 ? "Symbols" :
      "Undefined symbols", VAR_6);
  if (VAR_7 != ((void*)0))
   FUNC_0("[%s]", VAR_7);
  FUNC_0(":\n\n");

  FUNC_0("Name                  Value           Class        Type         Size             Line  Section\n\n");

 } else {

  if (VAR_2.print_name != VAR_0 && VAR_7 != ((void*)0)) {
   if (VAR_2.elem_print_fn ==
       VAR_4)
    FUNC_0("%s[%s]:\n", VAR_6, VAR_7);
   else if (VAR_2.elem_print_fn == VAR_3)
    FUNC_0("\n%s:\n", VAR_7);

  } else if (VAR_2.print_name == VAR_1) {
   if (VAR_2.elem_print_fn == VAR_3)
    FUNC_0("\n");
   FUNC_0("%s:\n", VAR_6);
  }
 }
}

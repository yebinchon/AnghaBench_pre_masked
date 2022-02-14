
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_9__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ t; int print_size; int (* value_print_fn ) (TYPE_1__ const*) ;int (* size_print_fn ) (TYPE_1__ const*) ;int * sort_fn; } ;
struct TYPE_10__ {int st_size; } ;
typedef TYPE_1__ GElf_Sym ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (char) ;
 int FUNC_1 (char*,char const*) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_9__ VAR_4 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_9(char VAR_5, const char *VAR_6, const GElf_Sym *VAR_7,
    const char *VAR_8)
{

 if (VAR_6 == ((void*)0) || VAR_7 == ((void*)0) || VAR_8 == ((void*)0) ||
     VAR_4.value_print_fn == ((void*)0))
  return;

 if (FUNC_0(VAR_5)) {
  if (VAR_4.t == VAR_1 && VAR_3 == VAR_0)
   FUNC_2("%-8s", "");
  else
   FUNC_2("%-16s", "");
 } else {
  switch ((VAR_4.sort_fn == & VAR_2 ? 2 : 0) +
      VAR_4.print_size) {
  case 3:
   if (VAR_7->st_size != 0) {
    VAR_4.value_print_fn(VAR_7);
    FUNC_2(" ");
    VAR_4.size_print_fn(VAR_7);
   }
   break;

  case 2:
   if (VAR_7->st_size != 0)
    VAR_4.size_print_fn(VAR_7);
   break;

  case 1:
   VAR_4.value_print_fn(VAR_7);
   if (VAR_7->st_size != 0) {
    FUNC_2(" ");
    VAR_4.size_print_fn(VAR_7);
   }
   break;

  case 0:
  default:
   VAR_4.value_print_fn(VAR_7);
  }
 }

 FUNC_2(" %c ", VAR_5);
 FUNC_1("%s", VAR_8);
}

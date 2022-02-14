
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_5__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int (* size_print_fn ) (TYPE_1__ const*) ;int (* value_print_fn ) (TYPE_1__ const*) ;} ;
struct TYPE_6__ {scalar_t__ st_size; } ;
typedef TYPE_1__ GElf_Sym ;


 int FUNC_0 (char) ;
 int FUNC_1 (char*,char const*) ;
 TYPE_5__ VAR_0 ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (TYPE_1__ const*) ;
 int FUNC_4 (TYPE_1__ const*) ;

__attribute__((used)) static void
FUNC_5(char VAR_1, const char *VAR_2, const GElf_Sym *VAR_3,
    const char *VAR_4)
{

 if (VAR_2 == ((void*)0) || VAR_3 == ((void*)0) || VAR_4 == ((void*)0) ||
     VAR_0.value_print_fn == ((void*)0))
  return;

 FUNC_1("%s", VAR_4);
 FUNC_2(" %c ", VAR_1);
 if (!FUNC_0(VAR_1)) {
  VAR_0.value_print_fn(VAR_3);
  FUNC_2(" ");
  if (VAR_3->st_size != 0)
   VAR_0.size_print_fn(VAR_3);
 } else
  FUNC_2("        ");
}

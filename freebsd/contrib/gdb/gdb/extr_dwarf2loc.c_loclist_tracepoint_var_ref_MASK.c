
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct symbol {int dummy; } ;
struct dwarf2_loclist_baton {int dummy; } ;
struct axs_value {int dummy; } ;
struct agent_expr {int scope; } ;


 struct dwarf2_loclist_baton* FUNC_0 (struct symbol*) ;
 int FUNC_1 (struct symbol*) ;
 int FUNC_2 (struct symbol*,struct agent_expr*,struct axs_value*,unsigned char*,size_t) ;
 int FUNC_3 (char*,int ) ;
 unsigned char* FUNC_4 (struct dwarf2_loclist_baton*,size_t*,int ) ;

__attribute__((used)) static void
FUNC_5 (struct symbol * VAR_0, struct agent_expr * VAR_1,
       struct axs_value * VAR_2)
{
  struct dwarf2_loclist_baton *VAR_3 = FUNC_0 (VAR_0);
  unsigned char *VAR_4;
  size_t VAR_5;

  VAR_4 = FUNC_4 (VAR_3, &VAR_5, VAR_1->scope);
  if (VAR_4 == ((void*)0))
    FUNC_3 ("Variable \"%s\" is not available.", FUNC_1 (VAR_0));

  FUNC_2 (VAR_0, VAR_1, VAR_2, VAR_4, VAR_5);
}

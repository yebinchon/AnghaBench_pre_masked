
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;
struct d_print_template {struct d_print_template* next; struct demangle_component const* template_decl; } ;
struct d_print_mod {int dummy; } ;
struct d_print_info {struct d_print_mod* modifiers; struct d_print_template* templates; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 char FUNC_1 (struct d_print_info*) ;
 struct demangle_component const* FUNC_2 (struct demangle_component const*) ;
 int FUNC_3 (struct d_print_info*,struct demangle_component const*) ;
 struct demangle_component const* FUNC_4 (struct demangle_component const*) ;

__attribute__((used)) static void
FUNC_5 (struct d_print_info *VAR_1,
              const struct demangle_component *VAR_2)
{
  if (FUNC_2 (VAR_2)->type != VAR_0)
    FUNC_3 (VAR_1, FUNC_2 (VAR_2));
  else
    {
      struct d_print_mod *VAR_3;
      struct d_print_template VAR_4;






      VAR_3 = VAR_1->modifiers;
      VAR_1->modifiers = ((void*)0);

      VAR_4.next = VAR_1->templates;
      VAR_1->templates = &VAR_4;
      VAR_4.template_decl = FUNC_2 (VAR_2);

      FUNC_3 (VAR_1, FUNC_2 (FUNC_2 (VAR_2)));

      VAR_1->templates = VAR_4.next;

      if (FUNC_1 (VAR_1) == '<')
 FUNC_0 (VAR_1, ' ');
      FUNC_0 (VAR_1, '<');
      FUNC_3 (VAR_1, FUNC_4 (FUNC_2 (VAR_2)));


      if (FUNC_1 (VAR_1) == '>')
 FUNC_0 (VAR_1, ' ');
      FUNC_0 (VAR_1, '>');

      VAR_1->modifiers = VAR_3;
    }
}

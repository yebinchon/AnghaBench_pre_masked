
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {scalar_t__ type; } ;
struct d_print_template {int dummy; } ;
struct d_print_mod {int printed; struct d_print_mod* next; struct demangle_component* mod; struct d_print_template* templates; } ;
struct d_print_info {int options; struct d_print_template* templates; struct d_print_mod* modifiers; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,char*) ;
 struct demangle_component* FUNC_2 (struct demangle_component*) ;
 int FUNC_3 (struct d_print_info*,struct demangle_component*,struct d_print_mod*) ;
 int FUNC_4 (struct d_print_info*,struct demangle_component*) ;
 int FUNC_5 (struct d_print_info*,struct demangle_component*,struct d_print_mod*) ;
 int FUNC_6 (struct d_print_info*,struct demangle_component*) ;
 scalar_t__ FUNC_7 (struct d_print_info*) ;
 struct demangle_component* FUNC_8 (struct demangle_component*) ;

__attribute__((used)) static void
FUNC_9 (struct d_print_info *VAR_7,
                  struct d_print_mod *VAR_8, int VAR_9)
{
  struct d_print_template *VAR_10;

  if (VAR_8 == ((void*)0) || FUNC_7 (VAR_7))
    return;

  if (VAR_8->printed
      || (! VAR_9
   && (VAR_8->mod->type == VAR_4
       || VAR_8->mod->type == VAR_5
       || VAR_8->mod->type == VAR_1)))
    {
      FUNC_9 (VAR_7, VAR_8->next, VAR_9);
      return;
    }

  VAR_8->printed = 1;

  VAR_10 = VAR_7->templates;
  VAR_7->templates = VAR_8->templates;

  if (VAR_8->mod->type == VAR_2)
    {
      FUNC_5 (VAR_7, VAR_8->mod, VAR_8->next);
      VAR_7->templates = VAR_10;
      return;
    }
  else if (VAR_8->mod->type == VAR_0)
    {
      FUNC_3 (VAR_7, VAR_8->mod, VAR_8->next);
      VAR_7->templates = VAR_10;
      return;
    }
  else if (VAR_8->mod->type == VAR_3)
    {
      struct d_print_mod *VAR_11;
      struct demangle_component *VAR_12;






      VAR_11 = VAR_7->modifiers;
      VAR_7->modifiers = ((void*)0);
      FUNC_4 (VAR_7, FUNC_2 (VAR_8->mod));
      VAR_7->modifiers = VAR_11;

      if ((VAR_7->options & VAR_6) == 0)
 FUNC_1 (VAR_7, "::");
      else
 FUNC_0 (VAR_7, '.');

      VAR_12 = FUNC_8 (VAR_8->mod);
      while (VAR_12->type == VAR_4
      || VAR_12->type == VAR_5
      || VAR_12->type == VAR_1)
 VAR_12 = FUNC_2 (VAR_12);

      FUNC_4 (VAR_7, VAR_12);

      VAR_7->templates = VAR_10;
      return;
    }

  FUNC_6 (VAR_7, VAR_8->mod);

  VAR_7->templates = VAR_10;

  FUNC_9 (VAR_7, VAR_8->next, VAR_9);
}

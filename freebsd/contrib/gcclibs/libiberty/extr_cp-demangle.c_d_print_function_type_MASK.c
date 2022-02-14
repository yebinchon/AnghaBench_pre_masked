
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct demangle_component {int dummy; } ;
struct d_print_mod {TYPE_1__* mod; scalar_t__ printed; struct d_print_mod* next; } ;
struct d_print_info {struct d_print_mod* modifiers; } ;
struct TYPE_2__ {int type; } ;
 int FUNC_0 (struct d_print_info*,char) ;
 char FUNC_1 (struct d_print_info*) ;
 int * FUNC_2 (struct demangle_component const*) ;
 int FUNC_3 (struct d_print_info*,int *) ;
 int FUNC_4 (struct d_print_info*,struct d_print_mod*,int) ;
 int * FUNC_5 (struct demangle_component const*) ;

__attribute__((used)) static void
FUNC_6 (struct d_print_info *VAR_0,
                       const struct demangle_component *VAR_1,
                       struct d_print_mod *VAR_2)
{
  int VAR_3;
  int VAR_4;
  int VAR_5;
  struct d_print_mod *VAR_6;
  struct d_print_mod *VAR_7;

  VAR_3 = 0;
  VAR_4 = 0;
  VAR_5 = 0;
  for (VAR_6 = VAR_2; VAR_6 != ((void*)0); VAR_6 = VAR_6->next)
    {
      if (VAR_6->printed)
 break;

      VAR_4 = 1;
      switch (VAR_6->mod->type)
 {
 case 135:
 case 133:
   VAR_3 = 1;
   break;
 case 132:
 case 129:
 case 138:
 case 130:
 case 139:
 case 136:
 case 134:
   VAR_5 = 1;
   VAR_3 = 1;
   break;
 case 131:
 case 128:
 case 137:
   break;
 default:
   break;
 }
      if (VAR_3)
 break;
    }

  if (FUNC_2 (VAR_1) != ((void*)0) && ! VAR_4)
    VAR_3 = 1;

  if (VAR_3)
    {
      if (! VAR_5)
 {
   if (FUNC_1 (VAR_0) != '('
       && FUNC_1 (VAR_0) != '*')
     VAR_5 = 1;
 }
      if (VAR_5 && FUNC_1 (VAR_0) != ' ')
 FUNC_0 (VAR_0, ' ');
      FUNC_0 (VAR_0, '(');
    }

  VAR_7 = VAR_0->modifiers;
  VAR_0->modifiers = ((void*)0);

  FUNC_4 (VAR_0, VAR_2, 0);

  if (VAR_3)
    FUNC_0 (VAR_0, ')');

  FUNC_0 (VAR_0, '(');

  if (FUNC_5 (VAR_1) != ((void*)0))
    FUNC_3 (VAR_0, FUNC_5 (VAR_1));

  FUNC_0 (VAR_0, ')');

  FUNC_4 (VAR_0, VAR_2, 1);

  VAR_0->modifiers = VAR_7;
}

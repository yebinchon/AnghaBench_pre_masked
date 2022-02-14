
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct demangle_component {int type; } ;
struct d_print_info {int options; } ;
 int VAR_0 ;
 int FUNC_0 (struct d_print_info*,char) ;
 int FUNC_1 (struct d_print_info*,char*) ;
 char FUNC_2 (struct d_print_info*) ;
 struct demangle_component const* FUNC_3 (struct demangle_component const*) ;
 int FUNC_4 (struct d_print_info*,struct demangle_component const*) ;
 struct demangle_component const* FUNC_5 (struct demangle_component const*) ;

__attribute__((used)) static void
FUNC_6 (struct d_print_info *VAR_1,
             const struct demangle_component *VAR_2)
{
  switch (VAR_2->type)
    {
    case 133:
    case 132:
      FUNC_1 (VAR_1, " restrict");
      return;
    case 129:
    case 128:
      FUNC_1 (VAR_1, " volatile");
      return;
    case 139:
    case 138:
      FUNC_1 (VAR_1, " const");
      return;
    case 130:
      FUNC_0 (VAR_1, ' ');
      FUNC_4 (VAR_1, FUNC_5 (VAR_2));
      return;
    case 136:

      if ((VAR_1->options & VAR_0) == 0)
 FUNC_0 (VAR_1, '*');
      return;
    case 134:
      FUNC_0 (VAR_1, '&');
      return;
    case 140:
      FUNC_1 (VAR_1, "complex ");
      return;
    case 137:
      FUNC_1 (VAR_1, "imaginary ");
      return;
    case 135:
      if (FUNC_2 (VAR_1) != '(')
 FUNC_0 (VAR_1, ' ');
      FUNC_4 (VAR_1, FUNC_3 (VAR_2));
      FUNC_1 (VAR_1, "::*");
      return;
    case 131:
      FUNC_4 (VAR_1, FUNC_3 (VAR_2));
      return;
    default:


      FUNC_4 (VAR_1, VAR_2);
      return;
    }
}

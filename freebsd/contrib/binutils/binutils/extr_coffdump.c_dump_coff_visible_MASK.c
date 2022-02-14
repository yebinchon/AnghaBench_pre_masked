
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct coff_visible {int type; } ;


 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static void
FUNC_4 (struct coff_visible *VAR_0)
{
  FUNC_3 (1);
  switch (VAR_0->type)
    {
    case 135:
      FUNC_2 ("coff_vis_ext_def");
      break;
    case 134:
      FUNC_2 ("coff_vis_ext_ref");
      break;
    case 133:
      FUNC_2 ("coff_vis_int_def");
      break;
    case 136:
      FUNC_2 ("coff_vis_common");
      break;
    case 138:
      FUNC_2 ("coff_vis_auto");
      break;
    case 137:
      FUNC_2 ("coff_vis_autoparam");
      break;
    case 129:
      FUNC_2 ("coff_vis_regparam");
      break;
    case 130:
      FUNC_2 ("coff_vis_register");
      break;
    case 128:
      FUNC_2 ("coff_vis_tag");
      break;
    case 131:
      FUNC_2 ("coff_vis_member_of_struct");
      break;
    case 132:
      FUNC_2 ("coff_vis_member_of_enum");
      break;
    default:
      FUNC_0 ();
    }
  FUNC_1 ();
  FUNC_3 (-1);
}

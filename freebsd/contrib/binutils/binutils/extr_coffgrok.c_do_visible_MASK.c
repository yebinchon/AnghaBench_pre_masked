
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct internal_syment {int n_sclass; int n_value; int n_scnum; } ;
struct coff_visible {int type; } ;
typedef enum coff_vis_type { ____Placeholder_coff_vis_type } coff_vis_type ;
struct TYPE_3__ {struct internal_syment syment; } ;
struct TYPE_4__ {TYPE_1__ u; } ;
 int VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 TYPE_2__* VAR_12 ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static struct coff_visible *
FUNC_2 (int VAR_13)
{
  struct internal_syment *VAR_14 = &VAR_12[VAR_13].u.syment;
  struct coff_visible *VAR_15 =
    (struct coff_visible *) (FUNC_1 (sizeof (struct coff_visible)));
  enum coff_vis_type VAR_16;
  switch (VAR_14->n_sclass)
    {
    case 135:
    case 134:
    case 138:
      VAR_16 = VAR_8;
      break;
    case 136:
      VAR_16 = VAR_7;
      break;

    case 132:
      VAR_16 = VAR_10;
      break;

    case 133:
      VAR_16 = VAR_9;
      break;
    case 130:
    case 128:
    case 140:
    case 129:
      VAR_16 = VAR_11;
      break;
    case 141:
    case 143:
      VAR_16 = VAR_2;
      break;
    case 142:


      VAR_16 = VAR_1;
      break;
    case 137:
    case 131:
      VAR_16 = VAR_6;
      break;
    case 139:
      if (VAR_14->n_scnum == VAR_0)
 {
   if (VAR_14->n_value)
     VAR_16 = VAR_3;
   else
     VAR_16 = VAR_5;
 }
      else
 VAR_16 = VAR_4;
      break;
    default:
      FUNC_0 ();
      break;

    }
  VAR_15->type = VAR_16;
  return VAR_15;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int rc_uint_type ;
typedef int rc_res_id ;
struct TYPE_7__ {int dir; } ;
struct TYPE_6__ {int id; } ;
struct TYPE_9__ {TYPE_1__ u; int named; } ;
struct TYPE_8__ {TYPE_2__ u; TYPE_5__ id; } ;
typedef TYPE_3__ rc_res_entry ;
typedef int FILE ;
 int FUNC_0 (int *,char*,...) ;
 int FUNC_1 (int *,TYPE_5__,int) ;
 int FUNC_2 (int *,char*,...) ;
 int FUNC_3 (int *,int ,int const*,int const*,int *,int) ;

__attribute__((used)) static void
FUNC_4 (FILE *VAR_0, const rc_res_entry *VAR_1,
   const rc_res_id *VAR_2, const rc_res_id *VAR_3,
   rc_uint_type *VAR_4, int VAR_5)
{
  FUNC_0 (VAR_0, "\n");
  switch (VAR_5)
    {
    case 1:
      FUNC_2 (VAR_0, "Type: ");
      if (VAR_1->id.named)
 FUNC_1 (VAR_0, VAR_1->id, 1);
      else
 {
   const char *VAR_6;

   switch (VAR_1->id.u.id)
     {
     case 144: VAR_6 = "cursor"; break;
     case 145: VAR_6 = "bitmap"; break;
     case 136: VAR_6 = "icon"; break;
     case 135: VAR_6 = "menu"; break;
     case 143: VAR_6 = "dialog"; break;
     case 131: VAR_6 = "stringtable"; break;
     case 140: VAR_6 = "fontdir"; break;
     case 141: VAR_6 = "font"; break;
     case 148: VAR_6 = "accelerators"; break;
     case 132: VAR_6 = "rcdata"; break;
     case 134: VAR_6 = "messagetable"; break;
     case 139: VAR_6 = "group cursor"; break;
     case 138: VAR_6 = "group icon"; break;
     case 129: VAR_6 = "version"; break;
     case 142: VAR_6 = "dlginclude"; break;
     case 133: VAR_6 = "plugplay"; break;
     case 128: VAR_6 = "vxd"; break;
     case 147: VAR_6 = "anicursor"; break;
     case 146: VAR_6 = "aniicon"; break;
     case 130: VAR_6 = "toolbar"; break;
     case 137: VAR_6 = "html"; break;
     default: VAR_6 = ((void*)0); break;
     }

   if (VAR_6 != ((void*)0))
     FUNC_0 (VAR_0, "%s", VAR_6);
   else
     FUNC_1 (VAR_0, VAR_1->id, 1);
 }
      break;

    case 2:
      FUNC_2 (VAR_0, "Name: ");
      FUNC_1 (VAR_0, VAR_1->id, 1);
      break;

    case 3:
      FUNC_2 (VAR_0, "Language: ");
      FUNC_1 (VAR_0, VAR_1->id, 1);
      break;

    default:
      FUNC_2 (VAR_0, "Level %d: ", VAR_5);
      FUNC_1 (VAR_0, VAR_1->id, 1);
    }

  FUNC_3 (VAR_0, VAR_1->u.dir, VAR_2, VAR_3, VAR_4, VAR_5 + 1);
}

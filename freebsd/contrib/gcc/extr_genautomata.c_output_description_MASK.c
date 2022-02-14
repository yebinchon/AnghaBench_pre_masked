
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_17__ {char* name; int regexp; int condexp; } ;
struct TYPE_16__ {char* name; int regexp; } ;
struct TYPE_15__ {char* name; int * final_absence_list; int * absence_list; int * final_presence_list; int * presence_list; int * excl_list; } ;
struct TYPE_14__ {int decls_num; TYPE_1__** decls; } ;
struct TYPE_13__ {scalar_t__ mode; } ;
struct TYPE_12__ {int latency; char* out_insn_name; char* in_insn_name; } ;


 TYPE_10__* FUNC_0 (TYPE_1__*) ;
 TYPE_8__* FUNC_1 (TYPE_1__*) ;
 TYPE_6__* FUNC_2 (TYPE_1__*) ;
 TYPE_4__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_6 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;

__attribute__((used)) static void
FUNC_9 (void)
{
  decl_t VAR_7;
  int VAR_8;

  for (VAR_8 = 0; VAR_8 < VAR_1->decls_num; VAR_8++)
    {
      VAR_7 = VAR_1->decls [VAR_8];
      if (VAR_7->mode == VAR_5)
 {
   if (FUNC_3 (VAR_7)->excl_list != ((void*)0))
     {
       FUNC_4 (VAR_6, "unit %s exlusion_set: ",
         FUNC_3 (VAR_7)->name);
       FUNC_7 (FUNC_3 (VAR_7)->excl_list);
       FUNC_4 (VAR_6, "\n");
     }
   if (FUNC_3 (VAR_7)->presence_list != ((void*)0))
     {
       FUNC_4 (VAR_6, "unit %s presence_set: ",
         FUNC_3 (VAR_7)->name);
       FUNC_5 (FUNC_3 (VAR_7)->presence_list);
       FUNC_4 (VAR_6, "\n");
     }
   if (FUNC_3 (VAR_7)->final_presence_list != ((void*)0))
     {
       FUNC_4 (VAR_6, "unit %s final_presence_set: ",
         FUNC_3 (VAR_7)->name);
       FUNC_5
  (FUNC_3 (VAR_7)->final_presence_list);
       FUNC_4 (VAR_6, "\n");
     }
   if (FUNC_3 (VAR_7)->absence_list != ((void*)0))
     {
       FUNC_4 (VAR_6, "unit %s absence_set: ",
         FUNC_3 (VAR_7)->name);
       FUNC_5 (FUNC_3 (VAR_7)->absence_list);
       FUNC_4 (VAR_6, "\n");
     }
   if (FUNC_3 (VAR_7)->final_absence_list != ((void*)0))
     {
       FUNC_4 (VAR_6, "unit %s final_absence_set: ",
         FUNC_3 (VAR_7)->name);
       FUNC_5
  (FUNC_3 (VAR_7)->final_absence_list);
       FUNC_4 (VAR_6, "\n");
     }
 }
    }
  FUNC_4 (VAR_6, "\n");
  for (VAR_8 = 0; VAR_8 < VAR_1->decls_num; VAR_8++)
    {
      VAR_7 = VAR_1->decls [VAR_8];
      if (VAR_7->mode == VAR_4)
 {
          FUNC_4 (VAR_6, "reservation %s: ",
     FUNC_2 (VAR_7)->name);
          FUNC_6 (FUNC_2 (VAR_7)->regexp);
          FUNC_4 (VAR_6, "\n");
        }
      else if (VAR_7->mode == VAR_3 && VAR_7 != VAR_0)
        {
          FUNC_4 (VAR_6, "insn reservation %s ",
     FUNC_1 (VAR_7)->name);
          FUNC_8 (VAR_6,
       FUNC_1 (VAR_7)->condexp);
          FUNC_4 (VAR_6, ": ");
          FUNC_6 (FUNC_1 (VAR_7)->regexp);
          FUNC_4 (VAR_6, "\n");
        }
      else if (VAR_7->mode == VAR_2)
 FUNC_4 (VAR_6, "bypass %d %s %s\n",
   FUNC_0 (VAR_7)->latency,
   FUNC_0 (VAR_7)->out_insn_name,
   FUNC_0 (VAR_7)->in_insn_name);
    }
  FUNC_4 (VAR_6, "\n\f\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_4__* type_p ;
struct TYPE_8__ {int * file; } ;
struct TYPE_9__ {TYPE_1__ line; } ;
struct TYPE_10__ {TYPE_2__ s; } ;
struct TYPE_11__ {scalar_t__ gc_used; struct TYPE_11__* next; TYPE_3__ u; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,TYPE_4__*) ;

__attribute__((used)) static void
FUNC_2 (type_p VAR_3, type_p VAR_4)
{
  type_p VAR_5;

  FUNC_0 (VAR_2, "\n/* Enumeration of types known.  */\n");
  FUNC_0 (VAR_2, "enum gt_types_enum {\n");
  for (VAR_5 = VAR_3; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->gc_used == VAR_1
 || VAR_5->gc_used == VAR_0)
      {
 if (VAR_5->gc_used == VAR_0
     && VAR_5->u.s.line.file == ((void*)0))
   continue;

 FUNC_0 (VAR_2, " gt_ggc_e_");
 FUNC_1 (VAR_2, VAR_5);
 FUNC_0 (VAR_2, ", \n");
      }
  for (VAR_5 = VAR_4; VAR_5; VAR_5 = VAR_5->next)
    if (VAR_5->gc_used == VAR_1)
      {
 FUNC_0 (VAR_2, " gt_e_");
 FUNC_1 (VAR_2, VAR_5);
 FUNC_0 (VAR_2, ", \n");
      }
  FUNC_0 (VAR_2, " gt_types_enum_last\n");
  FUNC_0 (VAR_2, "};\n");
}

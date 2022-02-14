
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef TYPE_1__* decl_t ;
struct TYPE_11__ {int latency; } ;
struct TYPE_10__ {int default_latency; } ;
struct TYPE_9__ {int max_insn_reserv_cycles; int decls_num; TYPE_1__** decls; } ;
struct TYPE_8__ {scalar_t__ mode; } ;


 TYPE_6__* FUNC_0 (TYPE_1__*) ;
 TYPE_4__* FUNC_1 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 TYPE_2__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (int) ;
 int VAR_4 ;

__attribute__((used)) static void
FUNC_4 (void)
{
  int VAR_5, VAR_6, VAR_7;
  decl_t VAR_8;

  VAR_6 = VAR_1->max_insn_reserv_cycles;
  for (VAR_5 = 0; VAR_5 < VAR_1->decls_num; VAR_5++)
    {
      VAR_8 = VAR_1->decls [VAR_5];
      if (VAR_8->mode == VAR_3 && VAR_8 != VAR_0)
 {
   VAR_7 = FUNC_1 (VAR_8)->default_latency;
   if (VAR_7 > VAR_6)
     VAR_6 = VAR_7;
 }
      else if (VAR_8->mode == VAR_2)
 {
   VAR_7 = FUNC_0 (VAR_8)->latency;
   if (VAR_7 > VAR_6)
     VAR_6 = VAR_7;
 }
    }
  for (VAR_5 = 0; (1 << VAR_5) <= VAR_6; VAR_5++)
    ;
  FUNC_3 (VAR_5 >= 0);
  FUNC_2 (VAR_4, "\nconst int max_insn_queue_index = %d;\n\n",
    (1 << VAR_5) - 1);
}

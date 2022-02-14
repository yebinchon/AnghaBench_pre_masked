
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct struct_equiv_checkpoint {size_t local_count; scalar_t__ version; int input_valid; int input_count; int y_start; int x_start; int ninsns; } ;
struct TYPE_2__ {size_t local_count; scalar_t__ version; int input_valid; int input_count; int y_start; int x_start; int ninsns; } ;
struct equiv_info {int need_rerun; TYPE_1__ cur; int * y_local; int y_local_live; int * x_local; int x_local_live; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

__attribute__((used)) static void
FUNC_3 (struct struct_equiv_checkpoint *VAR_0,
     struct equiv_info *VAR_1)
{
  VAR_1->cur.ninsns = VAR_0->ninsns;
  VAR_1->cur.x_start = VAR_0->x_start;
  VAR_1->cur.y_start = VAR_0->y_start;
  VAR_1->cur.input_count = VAR_0->input_count;
  VAR_1->cur.input_valid = VAR_0->input_valid;
  while (VAR_1->cur.local_count > VAR_0->local_count)
    {
      VAR_1->cur.local_count--;
      VAR_1->cur.version--;
      if (FUNC_1 (VAR_1->x_local_live,
      FUNC_0 (VAR_1->x_local[VAR_1->cur.local_count])))
 {
   FUNC_2 (VAR_1->x_local_live,
         VAR_1->x_local[VAR_1->cur.local_count], 0);
   FUNC_2 (VAR_1->y_local_live,
         VAR_1->y_local[VAR_1->cur.local_count], 0);
   VAR_1->cur.version--;
 }
    }
  if (VAR_1->cur.version != VAR_0->version)
    VAR_1->need_rerun = 1;
}

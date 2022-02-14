
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mem_ref_loc {int stmt; struct mem_ref_loc* next; } ;
struct mem_ref {struct mem_ref_loc* locs; int mem; int vops; int is_stored; } ;
struct loop {int dummy; } ;
typedef int edge ;
typedef int bitmap ;
struct TYPE_2__ {struct loop* always_executed_in; } ;


 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (struct loop*,struct loop*) ;
 int FUNC_3 (struct loop*,int *,unsigned int,int ,struct mem_ref_loc*) ;
 scalar_t__ FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5 (struct loop *VAR_0, edge *VAR_1, unsigned VAR_2,
     bitmap VAR_3, struct mem_ref *VAR_4)
{
  struct mem_ref_loc *VAR_5;
  struct loop *VAR_6;


  if (!VAR_4->is_stored)
    return;



  if (FUNC_1 (VAR_4->vops, VAR_3))
    return;

  if (FUNC_4 (VAR_4->mem))
    {
      for (VAR_5 = VAR_4->locs; VAR_5; VAR_5 = VAR_5->next)
 {
   if (!FUNC_0 (VAR_5->stmt))
     continue;

   VAR_6 = FUNC_0 (VAR_5->stmt)->always_executed_in;
   if (!VAR_6)
     continue;

   if (VAR_6 == VAR_0
       || FUNC_2 (VAR_6, VAR_0))
     break;
 }

      if (!VAR_5)
 return;
    }

  FUNC_3 (VAR_0, VAR_1, VAR_2, VAR_4->mem, VAR_4->locs);
}

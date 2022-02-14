
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int count; } ;
struct bearer {size_t priority; TYPE_1__ nodes; int active; } ;
struct bcbearer_pair {struct bearer* secondary; struct bearer* primary; } ;
struct TYPE_5__ {struct bcbearer_pair* bpairs; struct bcbearer_pair* bpairs_temp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__* VAR_3 ;
 int FUNC_0 (struct bcbearer_pair*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct bearer* VAR_4 ;
 scalar_t__ FUNC_3 (TYPE_1__*,TYPE_1__*) ;

void FUNC_4(void)
{
 struct bcbearer_pair *VAR_5 = VAR_3->bpairs_temp;
 struct bcbearer_pair *VAR_6;
 int VAR_7;
 int VAR_8;

 FUNC_1(&VAR_2);



 FUNC_0(VAR_5, 0, sizeof(VAR_3->bpairs_temp));

 for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++) {
  struct bearer *VAR_9 = &VAR_4[VAR_7];

  if (!VAR_9->active || !VAR_9->nodes.count)
   continue;

  if (!VAR_5[VAR_9->priority].primary)
   VAR_5[VAR_9->priority].primary = VAR_9;
  else
   VAR_5[VAR_9->priority].secondary = VAR_9;
 }



 VAR_6 = VAR_3->bpairs;
 FUNC_0(VAR_3->bpairs, 0, sizeof(VAR_3->bpairs));

 for (VAR_8 = VAR_1; VAR_8 >= 0; VAR_8--) {

  if (!VAR_5[VAR_8].primary)
   continue;

  VAR_6->primary = VAR_5[VAR_8].primary;

  if (VAR_5[VAR_8].secondary) {
   if (FUNC_3(&VAR_5[VAR_8].primary->nodes,
         &VAR_5[VAR_8].secondary->nodes)) {
    VAR_6->secondary = VAR_5[VAR_8].secondary;
   } else {
    VAR_6++;
    VAR_6->primary = VAR_5[VAR_8].secondary;
   }
  }

  VAR_6++;
 }

 FUNC_2(&VAR_2);
}

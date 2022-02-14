
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct eh_region {struct eh_region* next_peer; struct eh_region* outer; struct eh_region* inner; int region_number; } ;
struct TYPE_4__ {TYPE_1__* eh; } ;
struct TYPE_3__ {int region_array; scalar_t__ last_region_number; struct eh_region* region_tree; } ;


 int FUNC_0 (int ,int ,int ,struct eh_region*) ;
 int FUNC_1 (int ,int ,int ,scalar_t__) ;
 TYPE_2__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_2 (void)
{
  struct eh_region *VAR_3;

  VAR_3 = VAR_0->eh->region_tree;
  if (! VAR_3)
    return;

  FUNC_1 (VAR_1, VAR_2, VAR_0->eh->region_array,
   VAR_0->eh->last_region_number + 1);
  FUNC_0 (VAR_1, VAR_0->eh->region_array, 0, 0);

  while (1)
    {
      FUNC_0 (VAR_1, VAR_0->eh->region_array, VAR_3->region_number, VAR_3);


      if (VAR_3->inner)
 VAR_3 = VAR_3->inner;

      else if (VAR_3->next_peer)
 VAR_3 = VAR_3->next_peer;

      else
 {
   do {
     VAR_3 = VAR_3->outer;
     if (VAR_3 == ((void*)0))
       return;
   } while (VAR_3->next_peer == ((void*)0));
   VAR_3 = VAR_3->next_peer;
 }
    }
}

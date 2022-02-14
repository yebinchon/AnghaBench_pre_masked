
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ ch_slot; size_t ch_slotnum; TYPE_2__* chassis; } ;
typedef TYPE_1__ ibnd_node_t ;
struct TYPE_6__ {TYPE_1__** spinenode; TYPE_1__** linenode; } ;
typedef TYPE_2__ ibnd_chassis_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static int FUNC_0(ibnd_node_t * VAR_2, ibnd_chassis_t * VAR_3)
{
 if (VAR_2->ch_slot == VAR_0){

  if (VAR_3->linenode[VAR_2->ch_slotnum])
   return 0;

  VAR_3->linenode[VAR_2->ch_slotnum] = VAR_2;
 }
 else if (VAR_2->ch_slot == VAR_1){

  if (VAR_3->spinenode[VAR_2->ch_slotnum])
   return 0;

  VAR_3->spinenode[VAR_2->ch_slotnum] = VAR_2;
 }
 else
  return 0;

 VAR_2->chassis = VAR_3;

 return 0;
}

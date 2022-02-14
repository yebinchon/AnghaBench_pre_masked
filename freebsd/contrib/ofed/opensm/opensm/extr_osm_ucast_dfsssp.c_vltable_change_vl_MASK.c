
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ num_lids; scalar_t__* vls; } ;
typedef TYPE_1__ vltable_t ;
typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint64_t ;



__attribute__((used)) static void FUNC_0(vltable_t * VAR_0, uint8_t VAR_1, uint8_t VAR_2,
         uint64_t VAR_3)
{
 uint64_t VAR_4 = 0, VAR_5 = 0;
 uint64_t VAR_6 = 0, VAR_7 = 0;

 for (VAR_6 = 0; VAR_6 < VAR_0->num_lids; VAR_6++) {
  for (VAR_7 = 0; VAR_7 < VAR_0->num_lids; VAR_7++) {
   if (VAR_4 == VAR_3) {
    VAR_5 = 1;
    break;
   }
   if (VAR_6 != VAR_7) {
    if (VAR_0->
        vls[VAR_6 + VAR_7 * VAR_0->num_lids] ==
        VAR_1) {
     VAR_0->vls[VAR_6 +
           VAR_7 * VAR_0->num_lids] =
         VAR_2;
     VAR_4++;
    }
   }
  }
  if (VAR_5)
   break;
 }
}

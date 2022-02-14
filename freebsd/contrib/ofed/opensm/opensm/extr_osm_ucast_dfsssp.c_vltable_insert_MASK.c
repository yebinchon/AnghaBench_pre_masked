
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_lids; int * vls; } ;
typedef TYPE_1__ vltable_t ;
typedef int uint8_t ;
typedef int int64_t ;
typedef int ib_net16_t ;


 int FUNC_0 (int *,TYPE_1__*) ;

__attribute__((used)) static inline void FUNC_1(vltable_t * VAR_0, ib_net16_t VAR_1,
      ib_net16_t VAR_2, uint8_t VAR_3)
{
 int64_t VAR_4 = FUNC_0(&VAR_1, VAR_0);
 int64_t VAR_5 = FUNC_0(&VAR_2, VAR_0);

 if (VAR_4 > -1 && VAR_5 > -1)
  VAR_0->vls[VAR_4 + VAR_5 * VAR_0->num_lids] = VAR_3;
}

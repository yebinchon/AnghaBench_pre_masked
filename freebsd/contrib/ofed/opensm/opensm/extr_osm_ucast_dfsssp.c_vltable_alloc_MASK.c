
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int num_lids; int * vls; int * lids; } ;
typedef TYPE_1__ vltable_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int ib_net16_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (TYPE_1__**) ;

__attribute__((used)) static int FUNC_3(vltable_t ** VAR_1, uint64_t VAR_2)
{

 *VAR_1 = (vltable_t *) FUNC_0(sizeof(vltable_t));
 if (!(*VAR_1))
  goto ERROR;
 (*VAR_1)->num_lids = VAR_2;
 (*VAR_1)->lids = (ib_net16_t *) FUNC_0(VAR_2 * sizeof(ib_net16_t));
 if (!((*VAR_1)->lids))
  goto ERROR;
 (*VAR_1)->vls = (uint8_t *) FUNC_0(VAR_2 * VAR_2 * sizeof(uint8_t));
 if (!((*VAR_1)->vls))
  goto ERROR;
 FUNC_1((*VAR_1)->vls, VAR_0, VAR_2 * VAR_2);

 return 0;

ERROR:
 FUNC_2(VAR_1);

 return 1;
}

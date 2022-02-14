
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* vls; struct TYPE_4__* lids; } ;
typedef TYPE_1__ vltable_t ;


 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void FUNC_1(vltable_t ** VAR_0)
{
 if (*VAR_0) {
  if ((*VAR_0)->lids)
   FUNC_0((*VAR_0)->lids);
  if ((*VAR_0)->vls)
   FUNC_0((*VAR_0)->vls);
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct t_switch {TYPE_1__* ptgrp; } ;
struct TYPE_2__ {struct TYPE_2__* to_stree_root; struct TYPE_2__* to_stree_tip; } ;



__attribute__((used)) static
void FUNC_0(struct t_switch *VAR_0, struct t_switch *VAR_1,
         unsigned VAR_2, unsigned VAR_3)
{
 VAR_0->ptgrp[VAR_3].to_stree_tip = &VAR_1->ptgrp[VAR_2];
 VAR_1->ptgrp[VAR_2].to_stree_root = &VAR_0->ptgrp[VAR_3];
}

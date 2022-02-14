
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct t_switch {TYPE_2__* ptgrp; TYPE_1__* torus; } ;
struct TYPE_4__ {scalar_t__ to_stree_root; } ;
struct TYPE_3__ {struct t_switch* master_stree_root; } ;


 int VAR_0 ;

__attribute__((used)) static
bool FUNC_0(struct t_switch *VAR_1)
{
 int VAR_2;
 bool VAR_3;

 VAR_3 = VAR_1 == VAR_1->torus->master_stree_root;
 for (VAR_2 = 0; VAR_2 < 2 * VAR_0; VAR_2++)
  VAR_3 = VAR_3 || VAR_1->ptgrp[VAR_2].to_stree_root;

 return VAR_3;
}

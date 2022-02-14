
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct t_switch {TYPE_2__* ptgrp; } ;
struct TYPE_8__ {TYPE_3__* end; } ;
struct TYPE_7__ {struct t_switch* sw; } ;
struct TYPE_6__ {TYPE_1__** port; int port_cnt; } ;
struct TYPE_5__ {TYPE_4__* link; } ;



__attribute__((used)) static
struct t_switch *FUNC_0(struct t_switch *VAR_0, unsigned VAR_1, int VAR_2)
{
 unsigned VAR_3, VAR_4 = 0;

 if (!VAR_2)
  return ((void*)0);







 VAR_3 = 2 * VAR_1;
 if (VAR_2 > 0) {
  VAR_3++;
  VAR_4 = 1;
 }

 if (!VAR_0->ptgrp[VAR_3].port_cnt)
  return ((void*)0);

 return VAR_0->ptgrp[VAR_3].port[0]->link->end[VAR_4].sw;
}

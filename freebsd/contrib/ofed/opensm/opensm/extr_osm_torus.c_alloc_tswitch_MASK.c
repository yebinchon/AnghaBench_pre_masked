
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct torus {scalar_t__ switch_cnt; scalar_t__ sw_pool_sz; int portgrp_sz; struct t_switch** sw_pool; TYPE_1__* osm; } ;
struct t_switch {size_t port_cnt; TYPE_2__* ptgrp; int * port; struct f_switch* tmp; struct torus* torus; int n_id; } ;
struct f_switch {int port_cnt; int n_id; } ;
struct TYPE_4__ {unsigned int port_grp; int * port; struct t_switch* sw; } ;
struct TYPE_3__ {int log; } ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 int VAR_1 ;
 struct t_switch* FUNC_1 (int,size_t) ;
 int VAR_2 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static
struct t_switch *FUNC_3(struct torus *VAR_3, struct f_switch *VAR_4)
{
 unsigned VAR_5;
 size_t VAR_6;
 struct t_switch *VAR_7 = ((void*)0);
 void *VAR_8;

 if (!VAR_4)
  goto out;

 if (VAR_3->switch_cnt >= VAR_3->sw_pool_sz) {




  FUNC_0(&VAR_3->osm->log, VAR_0,
   "ERR 4E14: unexpectedly requested too many switch "
   "structures!\n");
  goto out;
 }
 VAR_6 = sizeof(*VAR_7)
  + VAR_4->port_cnt * sizeof(*VAR_7->port)
  + VAR_1 * VAR_3->portgrp_sz * sizeof(*VAR_7->ptgrp[0].port);
 VAR_7 = FUNC_1(1, VAR_6);
 if (!VAR_7) {
  FUNC_0(&VAR_3->osm->log, VAR_0,
   "ERR 4E15: calloc: %s\n", FUNC_2(VAR_2));
  goto out;
 }
 VAR_7->port = (void *)(VAR_7 + 1);
 VAR_7->n_id = VAR_4->n_id;
 VAR_7->port_cnt = VAR_4->port_cnt;
 VAR_7->torus = VAR_3;
 VAR_7->tmp = VAR_4;

 VAR_8 = &VAR_7->port[VAR_7->port_cnt];

 for (VAR_5 = 0; VAR_5 < VAR_1; VAR_5++) {
  VAR_7->ptgrp[VAR_5].port_grp = VAR_5;
  VAR_7->ptgrp[VAR_5].sw = VAR_7;
  VAR_7->ptgrp[VAR_5].port = VAR_8;
  VAR_8 = &VAR_7->ptgrp[VAR_5].port[VAR_3->portgrp_sz];
 }
 VAR_3->sw_pool[VAR_3->switch_cnt++] = VAR_7;
out:
 return VAR_7;
}

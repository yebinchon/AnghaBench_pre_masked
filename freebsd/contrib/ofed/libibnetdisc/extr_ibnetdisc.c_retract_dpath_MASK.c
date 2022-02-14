
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_13__ {TYPE_5__* user_data; } ;
typedef TYPE_4__ smp_engine_t ;
struct TYPE_14__ {TYPE_2__* cfg; TYPE_7__* f_int; } ;
typedef TYPE_5__ ibnd_scan_t ;
struct TYPE_10__ {size_t cnt; scalar_t__* p; } ;
struct TYPE_15__ {TYPE_1__ drpath; } ;
typedef TYPE_6__ ib_portid_t ;
struct TYPE_12__ {scalar_t__ maxhops_discovered; } ;
struct TYPE_16__ {TYPE_3__ fabric; } ;
typedef TYPE_7__ f_internal_t ;
struct TYPE_11__ {scalar_t__ max_hops; } ;



__attribute__((used)) static int FUNC_0(smp_engine_t * VAR_0, ib_portid_t * VAR_1)
{
 ibnd_scan_t *VAR_2 = VAR_0->user_data;
 f_internal_t *VAR_3 = VAR_2->f_int;

 if (VAR_2->cfg->max_hops &&
     VAR_3->fabric.maxhops_discovered > VAR_2->cfg->max_hops)
  return 0;






 VAR_3->fabric.maxhops_discovered++;
 VAR_1->drpath.p[VAR_1->drpath.cnt] = 0;
 VAR_1->drpath.cnt--;
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;
typedef struct TYPE_12__ TYPE_11__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_16__ {TYPE_5__* user_data; } ;
typedef TYPE_4__ smp_engine_t ;
struct TYPE_14__ {scalar_t__ lid; } ;
struct TYPE_17__ {unsigned int initial_hops; TYPE_2__ selfportid; TYPE_1__* cfg; TYPE_7__* f_int; } ;
typedef TYPE_5__ ibnd_scan_t ;
struct TYPE_12__ {int drdlid; scalar_t__ cnt; scalar_t__ drslid; } ;
struct TYPE_18__ {TYPE_11__ drpath; scalar_t__ lid; } ;
typedef TYPE_6__ ib_portid_t ;
struct TYPE_15__ {scalar_t__ maxhops_discovered; } ;
struct TYPE_19__ {TYPE_3__ fabric; } ;
typedef TYPE_7__ f_internal_t ;
struct TYPE_13__ {scalar_t__ max_hops; } ;


 int FUNC_0 (char*,int,int ) ;
 scalar_t__ FUNC_1 (TYPE_11__*,int) ;
 int FUNC_2 (TYPE_6__*) ;

__attribute__((used)) static int FUNC_3(smp_engine_t * VAR_0, ib_portid_t * VAR_1,
   int VAR_2)
{
 ibnd_scan_t *VAR_3 = VAR_0->user_data;
 f_internal_t *VAR_4 = VAR_3->f_int;

 if (VAR_3->cfg->max_hops &&
     VAR_4->fabric.maxhops_discovered > VAR_3->cfg->max_hops)
  return 0;

 if (VAR_1->lid) {

  VAR_1->drpath.drslid = (uint16_t) VAR_3->selfportid.lid;
  VAR_1->drpath.drdlid = 0xFFFF;
 }

 if (FUNC_1(&VAR_1->drpath, VAR_2) < 0) {
  FUNC_0("add port %d to DR path failed; %s\n", VAR_2,
      FUNC_2(VAR_1));
  return -1;
 }

 if (((unsigned) VAR_1->drpath.cnt - VAR_3->initial_hops) >
     VAR_4->fabric.maxhops_discovered)
  VAR_4->fabric.maxhops_discovered++;

 return 1;
}

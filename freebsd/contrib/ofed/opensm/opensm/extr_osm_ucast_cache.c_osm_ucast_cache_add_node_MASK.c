
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_21__ {int p_log; int cache_valid; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_22__ {struct TYPE_22__* p_remote_physp; TYPE_4__* p_node; } ;
typedef TYPE_3__ osm_physp_t ;
struct TYPE_23__ {TYPE_1__* sw; } ;
typedef TYPE_4__ osm_node_t ;
struct TYPE_24__ {int max_lid_ho; int * lft; int * hops; scalar_t__ num_hops; int dropped; } ;
typedef TYPE_5__ cache_switch_t ;
struct TYPE_20__ {int max_lid_ho; scalar_t__ lft_size; int * lft; int * new_lft; int * hops; scalar_t__ num_hops; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,int ,char*,...) ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_5__*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (TYPE_4__*,int ) ;
 int FUNC_8 (TYPE_4__*) ;
 TYPE_3__* FUNC_9 (TYPE_4__*,int) ;
 scalar_t__ FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_2__*,TYPE_3__*,TYPE_3__*) ;
 int FUNC_12 (TYPE_2__*) ;

void FUNC_13(osm_ucast_mgr_t * VAR_5, osm_node_t * VAR_6)
{
 uint16_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;
 osm_physp_t *VAR_10;
 cache_switch_t *VAR_11;

 FUNC_2(VAR_5->p_log);

 if (!VAR_5->cache_valid)
  goto Exit;

 if (FUNC_10(VAR_6) == VAR_0) {

  VAR_7 = FUNC_6(FUNC_7(VAR_6, 0));

  if (!VAR_7) {
   FUNC_1(VAR_5->p_log, VAR_3,
    "Skip caching. Switch dropped before "
    "it gets a valid lid.\n");
   FUNC_12(VAR_5);
   goto Exit;
  }

  FUNC_1(VAR_5->p_log, VAR_1,
   "Caching dropped switch lid %u\n", VAR_7);

  if (!VAR_6->sw) {

   FUNC_1(VAR_5->p_log, VAR_2,
    "ERR AD03: no switch info for node lid %u - "
    "clearing cache\n", VAR_7);
   FUNC_12(VAR_5);
   goto Exit;
  }


  VAR_8 = FUNC_8(VAR_6);
  for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++) {

   VAR_10 = FUNC_9(VAR_6, VAR_9);
   if (!VAR_10 || !VAR_10->p_remote_physp)
    continue;

   FUNC_11(VAR_5, VAR_10,
       VAR_10->p_remote_physp);
  }
  VAR_11 = FUNC_4(VAR_5, VAR_7);


  if (!VAR_11 || !FUNC_5(VAR_11)) {
   FUNC_1(VAR_5->p_log, VAR_1,
    "Dropped non-leaf switch (lid %u)\n", VAR_7);
   FUNC_12(VAR_5);
   goto Exit;
  }

  VAR_11->dropped = VAR_4;

  if (!VAR_6->sw->num_hops || !VAR_6->sw->hops) {
   FUNC_1(VAR_5->p_log, VAR_1,
    "No LID matrices for switch lid %u\n", VAR_7);
   FUNC_12(VAR_5);
   goto Exit;
  }



  VAR_11->num_hops = VAR_6->sw->num_hops;
  VAR_6->sw->num_hops = 0;
  VAR_11->hops = VAR_6->sw->hops;
  VAR_6->sw->hops = ((void*)0);



  if (VAR_6->sw->new_lft) {


   VAR_11->lft = VAR_6->sw->new_lft;
   VAR_6->sw->new_lft = ((void*)0);
  } else {

   VAR_11->lft = VAR_6->sw->lft;
   VAR_6->sw->lft = ((void*)0);
   VAR_6->sw->lft_size = 0;
  }
  VAR_11->max_lid_ho = VAR_6->sw->max_lid_ho;
 } else {

  VAR_8 = FUNC_8(VAR_6);
  for (VAR_9 = 1; VAR_9 < VAR_8; VAR_9++) {

   VAR_10 = FUNC_9(VAR_6, VAR_9);
   if (!VAR_10 || !VAR_10->p_remote_physp)
    continue;

   FUNC_0(FUNC_10
      (VAR_10->p_remote_physp->p_node) ==
      VAR_0);

   FUNC_11(VAR_5,
       VAR_10->p_remote_physp,
       VAR_10);
  }
 }
Exit:
 FUNC_3(VAR_5->p_log);
}

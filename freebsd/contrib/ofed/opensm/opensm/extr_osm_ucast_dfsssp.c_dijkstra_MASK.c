
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ distance; scalar_t__ state; scalar_t__ guid; int heap_id; TYPE_4__* used_link; TYPE_4__* links; scalar_t__ hops; int lid; } ;
typedef TYPE_1__ vertex_t ;
typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef size_t uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int p_log; } ;
typedef TYPE_2__ osm_ucast_mgr_t ;
struct TYPE_16__ {int * p_node; TYPE_7__* p_physp; } ;
typedef TYPE_3__ osm_port_t ;
typedef int osm_node_t ;
struct TYPE_17__ {scalar_t__ guid; int weight; size_t to; size_t from; struct TYPE_17__* next; int to_port; int from_port; } ;
typedef TYPE_4__ link_t ;
typedef int binary_heap_t ;
struct TYPE_18__ {int port_num; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,int ,char*) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_5 ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (TYPE_4__*) ;
 int FUNC_5 (TYPE_1__*,size_t,int **) ;
 int FUNC_6 (int *) ;
 TYPE_1__* FUNC_7 (int *) ;
 int FUNC_8 (int *,int ) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (TYPE_7__*) ;
 int FUNC_11 (int *) ;
 int * FUNC_12 (int *,int ,int *) ;
 scalar_t__ FUNC_13 (int *) ;
 int FUNC_14 (TYPE_4__*) ;
 int FUNC_15 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_16(osm_ucast_mgr_t * VAR_6, vertex_t * VAR_7,
      uint32_t VAR_8, osm_port_t * VAR_9, uint16_t VAR_10)
{
 uint32_t VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;
 osm_node_t *VAR_14 = ((void*)0);
 uint8_t VAR_15 = 0;
 vertex_t *VAR_16 = ((void*)0);
 link_t *VAR_17 = ((void*)0);
 uint64_t VAR_18 = 0;
 binary_heap_t *VAR_19 = ((void*)0);
 int VAR_20 = 0;

 FUNC_1(VAR_6->p_log);


 for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++) {
  VAR_7[VAR_11].hops = 0;
  VAR_7[VAR_11].used_link = ((void*)0);
  VAR_7[VAR_11].distance = VAR_3;
  VAR_7[VAR_11].state = VAR_5;
 }


 if (FUNC_13(VAR_9->p_node) == VAR_1) {

  VAR_17 = VAR_7[0].links;

  FUNC_15(&VAR_7[0]);
  VAR_7[0].guid =
      FUNC_3(FUNC_11(VAR_9->p_node));
  VAR_7[0].lid = VAR_10;
  VAR_13 = 0;

  VAR_7[0].links = VAR_17;




  if (VAR_9->p_physp && FUNC_10(VAR_9->p_physp)) {
   VAR_14 =
       FUNC_12(VAR_9->p_node,
           VAR_9->p_physp->port_num,
           &VAR_15);

   if (VAR_14
       && (FUNC_13(VAR_14) ==
    VAR_2)) {
    if (!(VAR_7[0].links)) {
     VAR_7[0].links =
         (link_t *) FUNC_9(sizeof(link_t));
     if (!(VAR_7[0].links)) {
      FUNC_0(VAR_6->p_log,
       VAR_4,
       "ERR AD07: cannot allocate memory for a link\n");
      return 1;
     }
    }
    FUNC_14(VAR_7[0].links);
    VAR_7[0].links->guid =
        FUNC_3(FUNC_11
           (VAR_14));
    VAR_7[0].links->from_port =
        VAR_9->p_physp->port_num;
    VAR_7[0].links->to_port = VAR_15;
    VAR_7[0].links->weight = 1;
    for (VAR_12 = 1; VAR_12 < VAR_8; VAR_12++) {
     if (VAR_7[0].links->guid ==
         VAR_7[VAR_12].guid) {
      VAR_7[0].links->to = VAR_12;
      break;
     }
    }
   }
  } else {

   FUNC_0(VAR_6->p_log, VAR_4,
    "ERR AD0B: unsupported network state (CA with"
    " unhealthy link state discovered; should have"
    " been filtered out before already; gracefully"
    " shutdown this routing engine)\n");
   return 1;
  }

 } else {

  if (VAR_7[0].links) {
   FUNC_4(VAR_7[0].links);
   FUNC_15(&VAR_7[0]);
  }

  VAR_18 = FUNC_3(FUNC_11(VAR_9->p_node));
  for (VAR_11 = 1; VAR_11 < VAR_8; VAR_11++) {
   if (VAR_18 == VAR_7[VAR_11].guid) {
    VAR_13 = VAR_11;
    break;
   }
  }
 }


 VAR_7[VAR_13].distance = 0;
 VAR_7[VAR_13].state = VAR_0;
 VAR_7[VAR_13].hops = 0;


 if (FUNC_13(VAR_9->p_node) == VAR_1)
  VAR_20 = FUNC_5(VAR_7, VAR_8, &VAR_19);
 else
  VAR_20 = FUNC_5(&VAR_7[1], VAR_8 - 1, &VAR_19);
 if (VAR_20) {
  FUNC_0(VAR_6->p_log, VAR_4,
   "ERR AD09: cannot allocate memory for heap or heap->node in heap_create(...)\n");
  return VAR_20;
 }

 VAR_16 = FUNC_7(VAR_19);
 while (VAR_16) {
  VAR_16->state = VAR_0;
  if (VAR_16->used_link)
   VAR_16->hops =
       VAR_7[VAR_16->used_link->from].hops + 1;


  for (VAR_17 = VAR_16->links; VAR_17 != ((void*)0); VAR_17 = VAR_17->next) {
   if ((VAR_7[VAR_17->to].state != VAR_0)
       && (VAR_16->distance + VAR_17->weight <
    VAR_7[VAR_17->to].distance)) {
    VAR_7[VAR_17->to].used_link = VAR_17;
    VAR_7[VAR_17->to].distance =
        VAR_16->distance + VAR_17->weight;
    FUNC_8(VAR_19, VAR_7[VAR_17->to].heap_id);
   }
  }

  VAR_16 = FUNC_7(VAR_19);
 }


 FUNC_6(VAR_19);
 VAR_19 = ((void*)0);

 FUNC_2(VAR_6->p_log);
 return 0;
}

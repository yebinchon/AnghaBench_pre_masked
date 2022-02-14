
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
typedef size_t uint16_t ;
struct TYPE_22__ {TYPE_1__* p_physp; TYPE_4__* p_node; } ;
typedef TYPE_3__ osm_port_t ;
struct TYPE_23__ {TYPE_2__* sw; } ;
typedef TYPE_4__ osm_node_t ;
struct TYPE_24__ {int channelID; struct TYPE_24__* linklist; struct TYPE_24__* srcdest_pairs; struct TYPE_24__* next; scalar_t__ num_pairs; struct TYPE_24__* node; } ;
typedef TYPE_5__ cdg_node_t ;
typedef TYPE_5__ cdg_link_t ;
struct TYPE_21__ {scalar_t__* new_lft; } ;
struct TYPE_20__ {scalar_t__ port_num; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_5__**,TYPE_5__*) ;
 TYPE_5__* FUNC_1 (TYPE_5__*,int) ;
 size_t FUNC_2 (int ) ;
 int FUNC_3 (TYPE_5__*) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_6 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*,int) ;

__attribute__((used)) static int FUNC_9(cdg_node_t ** VAR_1,
        osm_port_t * VAR_2, uint16_t VAR_3,
        osm_port_t * VAR_4, uint16_t VAR_5)
{
 osm_node_t *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 uint16_t VAR_8 = 0, VAR_9 = 0;
 uint32_t VAR_10 = 0;
 uint8_t VAR_11 = 0, VAR_12 = 0;
 uint64_t VAR_13 = 0;

 cdg_node_t *VAR_14 = ((void*)0), *VAR_15 = ((void*)0), *VAR_16 = ((void*)0);
 cdg_link_t *VAR_17 = ((void*)0);


 VAR_10 = (((uint32_t) VAR_3) << 16) + ((uint32_t) VAR_5);

 VAR_14 = (cdg_node_t *) FUNC_4(sizeof(cdg_node_t));
 if (!VAR_14)
  goto ERROR;
 FUNC_7(VAR_14);
 VAR_16 = VAR_14;




 VAR_7 =
     FUNC_6(VAR_2->p_node,
         VAR_2->p_physp->port_num, &VAR_12);

 while (VAR_7 && VAR_7->sw) {
  VAR_6 = VAR_7;
  VAR_11 = VAR_6->sw->new_lft[VAR_5];

  if (VAR_11 == VAR_0)
   goto ERROR;
  VAR_8 = FUNC_2(FUNC_5(VAR_6, 0));




  VAR_7 =
      FUNC_6(VAR_6, VAR_11,
          &VAR_12);

  if (!VAR_7 || !VAR_7->sw)
   break;
  VAR_9 = FUNC_2(FUNC_5(VAR_7, 0));

  VAR_13 =
      (((uint64_t) VAR_8) << 48) +
      (((uint64_t) VAR_11) << 32) +
      (((uint64_t) VAR_9) << 16) + ((uint64_t) VAR_12);
  VAR_15 = FUNC_1(*VAR_1, VAR_13);
  if (VAR_15) {

   VAR_17 = VAR_16->linklist;
   while (VAR_17 && VAR_17->node != VAR_15
          && VAR_17->next)
    VAR_17 = VAR_17->next;

   if (VAR_17) {
    if (VAR_17->node == VAR_15) {
     FUNC_8(VAR_17,
             VAR_10);
    } else {
     VAR_17->next =
         (cdg_link_t *)
         FUNC_4(sizeof(cdg_link_t));
     if (!VAR_17->next)
      goto ERROR;
     VAR_17 = VAR_17->next;
     VAR_17->node = VAR_15;
     VAR_17->num_pairs = 0;
     VAR_17->srcdest_pairs = ((void*)0);
     FUNC_8(VAR_17,
             VAR_10);
     VAR_17->next = ((void*)0);
    }
   } else {

    VAR_16->linklist =
        (cdg_link_t *) FUNC_4(sizeof(cdg_link_t));
    if (!VAR_16->linklist)
     goto ERROR;
    VAR_16->linklist->node = VAR_15;
    VAR_16->linklist->num_pairs = 0;
    VAR_16->linklist->srcdest_pairs = ((void*)0);
    FUNC_8(VAR_16->linklist,
            VAR_10);
    VAR_16->linklist->next = ((void*)0);
   }
  } else {

   VAR_15 = (cdg_node_t *) FUNC_4(sizeof(cdg_node_t));
   if (!VAR_15)
    goto ERROR;
   FUNC_7(VAR_15);
   VAR_15->channelID = VAR_13;
   FUNC_0(VAR_1, VAR_15);


   VAR_17 = VAR_16->linklist;
   while (VAR_17 && VAR_17->next)
    VAR_17 = VAR_17->next;
   if (VAR_17) {

    VAR_17->next =
        (cdg_link_t *) FUNC_4(sizeof(cdg_link_t));
    if (!VAR_17->next)
     goto ERROR;
    VAR_17 = VAR_17->next;
    VAR_17->node = VAR_15;
    VAR_17->num_pairs = 0;
    VAR_17->srcdest_pairs = ((void*)0);
    FUNC_8(VAR_17, VAR_10);
    VAR_17->next = ((void*)0);
   } else {

    VAR_16->linklist =
        (cdg_link_t *) FUNC_4(sizeof(cdg_link_t));
    if (!VAR_16->linklist)
     goto ERROR;
    VAR_16->linklist->node = VAR_15;
    VAR_16->linklist->num_pairs = 0;
    VAR_16->linklist->srcdest_pairs = ((void*)0);
    FUNC_8(VAR_16->linklist,
            VAR_10);
    VAR_16->linklist->next = ((void*)0);
   }
  }
  VAR_16 = VAR_15;
 }

 if (VAR_14->linklist) {
  if (VAR_14->linklist->srcdest_pairs)
   FUNC_3(VAR_14->linklist->srcdest_pairs);
  FUNC_3(VAR_14->linklist);
 }
 FUNC_3(VAR_14);

 return 0;

ERROR:

 if (VAR_14) {
  if (VAR_14->linklist)
   FUNC_3(VAR_14->linklist);
  FUNC_3(VAR_14);
 }

 return 1;
}

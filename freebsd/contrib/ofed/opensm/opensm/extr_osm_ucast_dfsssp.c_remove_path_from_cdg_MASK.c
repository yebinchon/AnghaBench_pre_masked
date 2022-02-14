
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef size_t uint16_t ;
struct TYPE_19__ {TYPE_1__* p_physp; TYPE_4__* p_node; } ;
typedef TYPE_3__ osm_port_t ;
struct TYPE_20__ {TYPE_2__* sw; } ;
typedef TYPE_4__ osm_node_t ;
struct TYPE_21__ {struct TYPE_21__* linklist; int removed; struct TYPE_21__* node; struct TYPE_21__* next; } ;
typedef TYPE_5__ cdg_node_t ;
typedef TYPE_5__ cdg_link_t ;
struct TYPE_18__ {scalar_t__* new_lft; } ;
struct TYPE_17__ {scalar_t__ port_num; } ;


 scalar_t__ VAR_0 ;
 TYPE_5__* FUNC_0 (TYPE_5__*,int) ;
 size_t FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*,int ) ;
 TYPE_4__* FUNC_5 (TYPE_4__*,scalar_t__,scalar_t__*) ;
 int FUNC_6 (TYPE_5__*) ;

__attribute__((used)) static int FUNC_7(cdg_node_t ** VAR_1, osm_port_t * VAR_2,
    uint16_t VAR_3, osm_port_t * VAR_4,
    uint16_t VAR_5)
{
 osm_node_t *VAR_6 = ((void*)0), *VAR_7 = ((void*)0);
 uint16_t VAR_8 = 0, VAR_9 = 0;
 uint8_t VAR_10 = 0, VAR_11 = 0;
 uint64_t VAR_12 = 0;

 cdg_node_t *VAR_13 = ((void*)0), *VAR_14 = ((void*)0), *VAR_15 = ((void*)0);
 cdg_link_t *VAR_16 = ((void*)0);

 VAR_13 = (cdg_node_t *) FUNC_3(sizeof(cdg_node_t));
 if (!VAR_13)
  goto ERROR;
 FUNC_6(VAR_13);
 VAR_15 = VAR_13;




 VAR_7 =
     FUNC_5(VAR_2->p_node,
         VAR_2->p_physp->port_num, &VAR_11);

 while (VAR_7 && VAR_7->sw) {
  VAR_6 = VAR_7;
  VAR_10 = VAR_6->sw->new_lft[VAR_5];

  if (VAR_10 == VAR_0)
   goto ERROR;
  VAR_8 = FUNC_1(FUNC_4(VAR_6, 0));

  VAR_7 =
      FUNC_5(VAR_6, VAR_10,
          &VAR_11);

  if (!VAR_7 || !VAR_7->sw)
   break;
  VAR_9 = FUNC_1(FUNC_4(VAR_7, 0));

  VAR_12 =
      (((uint64_t) VAR_8) << 48) +
      (((uint64_t) VAR_10) << 32) +
      (((uint64_t) VAR_9) << 16) + ((uint64_t) VAR_11);
  VAR_14 = FUNC_0(*VAR_1, VAR_12);
  if (VAR_14) {

   VAR_16 = VAR_15->linklist;
   while (VAR_16 && VAR_16->node != VAR_14
          && VAR_16->next)
    VAR_16 = VAR_16->next;

   if (VAR_16) {
    if (VAR_16->node == VAR_14) {
     VAR_16->removed++;
    } else {

    }
   } else {

   }
  } else {

   goto ERROR;
  }
  VAR_15 = VAR_14;
 }

 if (VAR_13->linklist)
  FUNC_2(VAR_13->linklist);
 FUNC_2(VAR_13);

 return 0;

ERROR:

 if (VAR_13) {
  if (VAR_13->linklist)
   FUNC_2(VAR_13->linklist);
  FUNC_2(VAR_13);
 }

 return 1;
}

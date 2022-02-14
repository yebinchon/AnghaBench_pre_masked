
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct fabric {TYPE_1__* osm; } ;
struct TYPE_12__ {int * p_node; int * priv; } ;
typedef TYPE_2__ osm_switch_t ;
struct TYPE_13__ {int sw_guid_tbl; int port_guid_tbl; } ;
typedef TYPE_3__ osm_subn_t ;
struct TYPE_14__ {TYPE_5__* p_physp; int * priv; } ;
typedef TYPE_4__ osm_port_t ;
struct TYPE_15__ {scalar_t__ port_num; int * p_node; struct TYPE_15__* p_remote_physp; } ;
typedef TYPE_5__ osm_physp_t ;
typedef int osm_node_t ;
typedef int guid_t ;
typedef int cl_map_item_t ;
struct TYPE_11__ {int log; TYPE_3__ subn; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct fabric*,int ,int) ;
 int FUNC_3 (struct fabric*,TYPE_4__*,int ,int ) ;
 int FUNC_4 (struct fabric*,int ,int ,int ,int ) ;
 int FUNC_5 (struct fabric*,TYPE_4__*) ;
 int * FUNC_6 (int *) ;
 int * FUNC_7 (int *) ;
 int * FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 TYPE_5__* FUNC_11 (int *,int) ;
 scalar_t__ FUNC_12 (int *) ;
 int FUNC_13 (TYPE_5__*) ;
 scalar_t__ FUNC_14 (TYPE_5__*) ;

__attribute__((used)) static
bool FUNC_15(struct fabric *VAR_3)
{
 osm_subn_t *VAR_4 = &VAR_3->osm->subn;
 osm_switch_t *VAR_5;
 osm_physp_t *VAR_6, *VAR_7;
 osm_port_t *VAR_8;
 osm_node_t *VAR_9;
 cl_map_item_t *VAR_10;
 uint8_t VAR_11, VAR_12;
 int VAR_13, VAR_14;
 guid_t VAR_15;
 bool VAR_16 = 1;

 FUNC_0(&VAR_3->osm->log);
 VAR_10 = FUNC_7(&VAR_4->sw_guid_tbl);
 while (VAR_10 != FUNC_6(&VAR_4->sw_guid_tbl)) {

  VAR_5 = (osm_switch_t *)VAR_10;
  VAR_10 = FUNC_8(VAR_10);
  VAR_5->priv = ((void*)0);
  VAR_9 = VAR_5->p_node;

  if (FUNC_12(VAR_9) != VAR_2)
   continue;

  VAR_14 = FUNC_10(VAR_9);
  VAR_15 = FUNC_9(VAR_9);

  VAR_16 = FUNC_2(VAR_3, VAR_15, VAR_14);
  if (!VAR_16)
   goto out;
 }



 VAR_10 = FUNC_7(&VAR_4->port_guid_tbl);
 while (VAR_10 != FUNC_6(&VAR_4->port_guid_tbl)) {

  VAR_8 = (osm_port_t *)VAR_10;
  VAR_10 = FUNC_8(VAR_10);
  VAR_8->priv = ((void*)0);

  VAR_6 = VAR_8->p_physp;
  if (!(VAR_6 && FUNC_14(VAR_6)))
   continue;

  VAR_11 = FUNC_12(VAR_6->p_node);



  if (VAR_6->port_num == 0 && VAR_11 == VAR_2) {
   VAR_16 = FUNC_5(VAR_3, VAR_8);
   if (!VAR_16)
    goto out;
   continue;
  }
  VAR_7 = VAR_6->p_remote_physp;
  if (!(VAR_7 && FUNC_14(VAR_7)))
   continue;

  VAR_12 = FUNC_12(VAR_7->p_node);

  if ((VAR_11 != VAR_0 &&
       VAR_11 != VAR_1) ||
      VAR_12 != VAR_2)
   continue;

  VAR_16 =
   FUNC_3(VAR_3, VAR_8,
          FUNC_9(VAR_7->p_node),
          FUNC_13(VAR_7));
  if (!VAR_16)
   goto out;
 }



 VAR_10 = FUNC_7(&VAR_4->sw_guid_tbl);
 while (VAR_10 != FUNC_6(&VAR_4->sw_guid_tbl)) {

  VAR_5 = (osm_switch_t *)VAR_10;
  VAR_10 = FUNC_8(VAR_10);

  VAR_14 = FUNC_10(VAR_5->p_node);
  for (VAR_13 = 0; VAR_13 < VAR_14; VAR_13++) {

   VAR_6 = FUNC_11(VAR_5->p_node, VAR_13);
   if (!(VAR_6 && FUNC_14(VAR_6)))
    continue;

   VAR_7 = VAR_6->p_remote_physp;
   if (!(VAR_7 && FUNC_14(VAR_7)))
    continue;

   if (VAR_6 == VAR_7)
    continue;

   VAR_11 = FUNC_12(VAR_6->p_node);
   VAR_12 = FUNC_12(VAR_7->p_node);

   if (VAR_11 != VAR_2 ||
       VAR_12 != VAR_2)
    continue;

   VAR_16 =
    FUNC_4(VAR_3,
        FUNC_9(VAR_6->p_node),
        FUNC_13(VAR_6),
        FUNC_9(VAR_7->p_node),
        FUNC_13(VAR_7));
   if (!VAR_16)
    goto out;
  }
 }
out:
 FUNC_1(&VAR_3->osm->log);
 return VAR_16;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct dnup_node {scalar_t__ rank; } ;
struct TYPE_12__ {scalar_t__ num_ports; struct dnup_node* priv; TYPE_7__* p_node; } ;
typedef TYPE_3__ osm_switch_t ;
struct TYPE_13__ {int sw; } ;
typedef TYPE_4__ osm_node_t ;
struct TYPE_14__ {TYPE_2__* p_osm; } ;
typedef TYPE_5__ dnup_t ;
typedef int cl_map_item_t ;
struct TYPE_15__ {int print_desc; } ;
struct TYPE_10__ {int sw_guid_tbl; } ;
struct TYPE_11__ {int log; TYPE_1__ subn; } ;


 int FUNC_0 (int *,int ,char*,...) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *) ;
 int VAR_1 ;
 int * FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 struct dnup_node* FUNC_6 (TYPE_3__*) ;
 int FUNC_7 (struct dnup_node*) ;
 int FUNC_8 (TYPE_5__*) ;
 TYPE_4__* FUNC_9 (TYPE_7__*,scalar_t__,scalar_t__*) ;

__attribute__((used)) static int FUNC_10(void *VAR_2)
{
 dnup_t *VAR_3 = VAR_2;
 cl_map_item_t *VAR_4;
 osm_switch_t *VAR_5;
 int VAR_6 = 0;
 int VAR_7 = 0;
 uint8_t VAR_8, VAR_9;

 FUNC_1(&VAR_3->p_osm->log);

 for (VAR_4 = FUNC_4(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 != FUNC_3(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 = FUNC_5(VAR_4)) {
  VAR_5 = (osm_switch_t *)VAR_4;
  VAR_5->priv = FUNC_6(VAR_5);
  if (!VAR_5->priv) {
   FUNC_0(&(VAR_3->p_osm->log), VAR_0, "ERR AE0C: "
    "cannot create dnup node\n");
   FUNC_2(&VAR_3->p_osm->log);
   return -1;
  }
 }



 for (VAR_4 = FUNC_4(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 != FUNC_3(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 = FUNC_5(VAR_4)) {
  VAR_5 = (osm_switch_t *)VAR_4;

  for (VAR_8 = 0; VAR_8 < VAR_5->num_ports; VAR_8++) {
   osm_node_t *VAR_10;
   VAR_10 = FUNC_9(VAR_5->p_node, VAR_8, &VAR_9);
   if(VAR_10 && !VAR_10->sw) {
    struct dnup_node *VAR_11 = VAR_5->priv;
    VAR_11->rank = 0;
    FUNC_0(&(VAR_3->p_osm->log),
     VAR_1, "(%s) rank 0 leaf switch\n",
     VAR_5->p_node->print_desc);
    VAR_7++;
    break;
   }
  }
 }

 if(VAR_7 == 0) {
  FUNC_0(&(VAR_3->p_osm->log),
   VAR_0, "ERR AE0D: No leaf switches found, DnUp routing failed\n");
  FUNC_2(&VAR_3->p_osm->log);
  return -1;
 }

 VAR_6 = FUNC_8(VAR_3);

 for (VAR_4 = FUNC_4(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 != FUNC_3(&VAR_3->p_osm->subn.sw_guid_tbl);
      VAR_4 = FUNC_5(VAR_4)) {
  VAR_5 = (osm_switch_t *) VAR_4;
  FUNC_7(VAR_5->priv);
 }

 FUNC_2(&VAR_3->p_osm->log);
 return VAR_6;
}

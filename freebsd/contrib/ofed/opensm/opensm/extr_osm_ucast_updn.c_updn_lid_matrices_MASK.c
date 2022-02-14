
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ ids_guid_file; scalar_t__ connect_roots; scalar_t__ root_guid_file; } ;
struct TYPE_13__ {int sw_guid_tbl; TYPE_2__ opt; } ;
struct TYPE_11__ {int ucast_mgr; } ;
struct TYPE_14__ {int num_roots; int log; struct TYPE_14__* p_osm; TYPE_3__ subn; TYPE_1__ sm; } ;
typedef TYPE_4__ updn_t ;
struct TYPE_15__ {int priv; } ;
typedef TYPE_5__ osm_switch_t ;
typedef int cl_map_item_t ;


 int FUNC_0 (int *,int ,char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int VAR_3 ;
 int * FUNC_4 (int *) ;
 int * FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (int ) ;
 int VAR_4 ;
 int FUNC_9 (TYPE_4__*,char*,int *,int ,int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (scalar_t__,int ,TYPE_4__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_12 (TYPE_4__*) ;
 int FUNC_13 (TYPE_4__*) ;

__attribute__((used)) static int FUNC_14(void *VAR_7)
{
 updn_t *VAR_8 = VAR_7;
 cl_map_item_t *VAR_9;
 osm_switch_t *VAR_10;
 int VAR_11 = 0;

 FUNC_1(&VAR_8->p_osm->log);

 for (VAR_9 = FUNC_5(&VAR_8->p_osm->subn.sw_guid_tbl);
      VAR_9 != FUNC_4(&VAR_8->p_osm->subn.sw_guid_tbl);
      VAR_9 = FUNC_6(VAR_9)) {
  VAR_10 = (osm_switch_t *)VAR_9;
  VAR_10->priv = FUNC_7(VAR_10);
  if (!VAR_10->priv) {
   FUNC_0(&(VAR_8->p_osm->log), VAR_1, "ERR AA0C: "
    "cannot create updn node\n");
   FUNC_2(&VAR_8->p_osm->log);
   return -1;
  }
 }


 VAR_8->num_roots = 0;

 if (VAR_8->p_osm->subn.opt.root_guid_file) {
  FUNC_0(&VAR_8->p_osm->log, VAR_0,
   "UPDN - Fetching root nodes from file \'%s\'\n",
   VAR_8->p_osm->subn.opt.root_guid_file);

  VAR_11 = FUNC_11(VAR_8->p_osm->subn.opt.root_guid_file,
         VAR_5, VAR_8);
  if (VAR_11) {
   FUNC_0(&VAR_8->p_osm->log, VAR_1, "ERR AA02: "
    "cannot parse root guids file \'%s\'\n",
    VAR_8->p_osm->subn.opt.root_guid_file);
   FUNC_10(&VAR_8->p_osm->sm.ucast_mgr);
   FUNC_13(VAR_8);
  } else if (VAR_8->p_osm->subn.opt.connect_roots &&
      VAR_8->num_roots > 1)
   FUNC_10(&VAR_8->p_osm->sm.ucast_mgr);
 } else {
  FUNC_10(&VAR_8->p_osm->sm.ucast_mgr);
  FUNC_13(VAR_8);
 }

 if (VAR_8->p_osm->subn.opt.ids_guid_file) {
  FUNC_0(&VAR_8->p_osm->log, VAR_0,
   "UPDN - update node ids from file \'%s\'\n",
   VAR_8->p_osm->subn.opt.ids_guid_file);

  VAR_11 = FUNC_11(VAR_8->p_osm->subn.opt.ids_guid_file,
         VAR_6, VAR_8->p_osm);
  if (VAR_11)
   FUNC_0(&VAR_8->p_osm->log, VAR_1, "ERR AA03: "
    "cannot parse node ids file \'%s\'\n",
    VAR_8->p_osm->subn.opt.ids_guid_file);
 }


 if (VAR_8->num_roots) {
  FUNC_0(&VAR_8->p_osm->log, VAR_0,
   "activating UPDN algorithm\n");
  VAR_11 = FUNC_12(VAR_8);
 } else {
  FUNC_0(&VAR_8->p_osm->log, VAR_2,
   "disabling UPDN algorithm, no root nodes were found\n");
  VAR_11 = -1;
 }

 if (FUNC_3(&VAR_8->p_osm->log, VAR_3))
  FUNC_9(VAR_8->p_osm, "opensm-updn-roots.dump",
          &VAR_8->p_osm->subn.sw_guid_tbl,
          VAR_4, ((void*)0));

 for (VAR_9 = FUNC_5(&VAR_8->p_osm->subn.sw_guid_tbl);
      VAR_9 != FUNC_4(&VAR_8->p_osm->subn.sw_guid_tbl);
      VAR_9 = FUNC_6(VAR_9)) {
  VAR_10 = (osm_switch_t *) VAR_9;
  FUNC_8(VAR_10->priv);
 }

 FUNC_2(&VAR_8->p_osm->log);
 return VAR_11;
}

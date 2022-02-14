
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_4__ {int offload_enabled; int * raid_map; scalar_t__ offload_to_mirror; int offload_enabled_pending; int offload_config; int phys_connector; int box; int bay; int path_map; int active_path_index; int volume_status; int ioaccel_handle; int queue_depth; int raid_level; int sas_address; int is_external_raid_device; int is_physical_device; int model; int vendor; int expose_device; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,char*,int) ;

__attribute__((used)) static void FUNC_3(pqisrc_softstate_t *VAR_0,
 pqi_scsi_dev_t *VAR_1,
 pqi_scsi_dev_t *VAR_2)
{
 FUNC_0("IN\n");
 VAR_1->expose_device = VAR_2->expose_device;
 FUNC_1(VAR_1->vendor, VAR_2->vendor,
  sizeof(VAR_1->vendor));
 FUNC_1(VAR_1->model, VAR_2->model,
  sizeof(VAR_1->model));
 VAR_1->is_physical_device = VAR_2->is_physical_device;
 VAR_1->is_external_raid_device =
  VAR_2->is_external_raid_device;
 VAR_1->sas_address = VAR_2->sas_address;
 VAR_1->raid_level = VAR_2->raid_level;
 VAR_1->queue_depth = VAR_2->queue_depth;
 VAR_1->ioaccel_handle = VAR_2->ioaccel_handle;
 VAR_1->volume_status = VAR_2->volume_status;
 VAR_1->active_path_index = VAR_2->active_path_index;
 VAR_1->path_map = VAR_2->path_map;
 VAR_1->bay = VAR_2->bay;
 FUNC_1(VAR_1->box, VAR_2->box,
  sizeof(VAR_1->box));
 FUNC_1(VAR_1->phys_connector, VAR_2->phys_connector,
  sizeof(VAR_1->phys_connector));
 VAR_1->offload_config = VAR_2->offload_config;
 VAR_1->offload_enabled = 0;
 VAR_1->offload_enabled_pending =
  VAR_2->offload_enabled_pending;
 VAR_1->offload_to_mirror = 0;
 if (VAR_1->raid_map)
  FUNC_2(VAR_0,
       (char *)VAR_1->raid_map,
       sizeof(*VAR_1->raid_map));
 VAR_1->raid_map = VAR_2->raid_map;

 VAR_2->raid_map = ((void*)0);
 FUNC_0("OUT\n");
}

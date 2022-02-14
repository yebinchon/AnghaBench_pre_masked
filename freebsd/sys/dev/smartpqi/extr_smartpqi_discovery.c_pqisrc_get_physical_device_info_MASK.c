
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int pqisrc_softstate_t ;
struct TYPE_8__ {int queue_depth; int device_type; int bay; int phys_connector; int box; int path_map; int active_path_index; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;
struct TYPE_9__ {int phys_bay_in_box; int alternate_paths_phys_connector; int alternate_paths_phys_box_on_port; int redundant_path_present_map; int active_path_number; int device_type; int current_queue_depth_limit; } ;
typedef TYPE_2__ bmic_ident_physdev_t ;


 int FUNC_0 (char*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,int *,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;
 int FUNC_5 (int *,TYPE_1__*,TYPE_2__*,int) ;

__attribute__((used)) static void FUNC_6(pqisrc_softstate_t *VAR_2,
 pqi_scsi_dev_t *VAR_3,
 bmic_ident_physdev_t *VAR_4)
{
 int VAR_5 = VAR_1;

 FUNC_1("IN\n");
 FUNC_4(VAR_4, 0, sizeof(*VAR_4));

 VAR_5= FUNC_5(VAR_2, VAR_3,
  VAR_4, sizeof(*VAR_4));
 if (VAR_5) {
  VAR_3->queue_depth = VAR_0;
  return;
 }

 VAR_3->queue_depth =
  FUNC_2(VAR_4->current_queue_depth_limit);
 VAR_3->device_type = VAR_4->device_type;
 VAR_3->active_path_index = VAR_4->active_path_number;
 VAR_3->path_map = VAR_4->redundant_path_present_map;
 FUNC_3(&VAR_3->box,
  &VAR_4->alternate_paths_phys_box_on_port,
  sizeof(VAR_3->box));
 FUNC_3(&VAR_3->phys_connector,
  &VAR_4->alternate_paths_phys_connector,
  sizeof(VAR_3->phys_connector));
 VAR_3->bay = VAR_4->phys_bay_in_box;

 FUNC_0("BMIC DEV_TYPE: %x QUEUE DEPTH: 0x%x \n", VAR_3->device_type, VAR_3->queue_depth);
 FUNC_1("OUT\n");
}

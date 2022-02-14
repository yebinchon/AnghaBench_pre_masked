
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_11__ {int ioaccel_handle; } ;
typedef TYPE_1__ raidmap_data_t ;
struct TYPE_12__ {TYPE_4__*** device_list; } ;
typedef TYPE_2__ pqisrc_softstate_t ;
struct TYPE_13__ {int row_cnt; int metadata_disks_per_row; int data_disks_per_row; int layout_map_count; TYPE_1__* dev_data; } ;
typedef TYPE_3__ pqisrc_raid_map_t ;
struct TYPE_14__ {scalar_t__ devtype; unsigned int queue_depth; int offload_enabled; int offload_enabled_pending; TYPE_3__* raid_map; int * scsi3addr; } ;
typedef TYPE_4__ pqi_scsi_dev_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (char*,unsigned long long) ;
 scalar_t__ VAR_0 ;
 unsigned int FUNC_3 (int ) ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int FUNC_4 (TYPE_2__*,char*,int) ;
 TYPE_4__* FUNC_5 (TYPE_2__*,int ) ;
 scalar_t__ FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_8(pqisrc_softstate_t *VAR_4)
{
 unsigned VAR_5;
 unsigned VAR_6;
 unsigned VAR_7;
 unsigned VAR_8;
 pqisrc_raid_map_t *VAR_9;
 pqi_scsi_dev_t *VAR_10;
 raidmap_data_t *VAR_11;
 pqi_scsi_dev_t *VAR_12;
 unsigned VAR_13;
 unsigned VAR_14;

 FUNC_1("IN\n");

 for(VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {
  for(VAR_13 = 0; VAR_13 < VAR_3; VAR_13++) {
   if(VAR_4->device_list[VAR_5][VAR_13] == ((void*)0))
    continue;
   VAR_10 = VAR_4->device_list[VAR_5][VAR_13];
   if (VAR_10->devtype != VAR_0)
    continue;
   if (!FUNC_7(VAR_10))
    continue;
   if (FUNC_6(VAR_10))
    continue;
   VAR_10->queue_depth = VAR_1;
   VAR_9 = VAR_10->raid_map;
   if (!VAR_9)
    return;
   VAR_11 = VAR_9->dev_data;
   VAR_6 = FUNC_3(VAR_9->layout_map_count) *
     (FUNC_3(VAR_9->data_disks_per_row) +
     FUNC_3(VAR_9->metadata_disks_per_row));
   VAR_7 = VAR_6 *
      FUNC_3(VAR_9->row_cnt);

   VAR_8 = 0;
   for (VAR_14 = 0; VAR_14 < VAR_7; VAR_14++) {
    VAR_12 = FUNC_5(VAR_4,
      VAR_11[VAR_14].ioaccel_handle);

    if (!VAR_12) {
     FUNC_2(
     "Failed to find physical disk handle for logical drive %016llx\n",
      (unsigned long long)FUNC_0(VAR_10->scsi3addr[0]));
     VAR_10->offload_enabled = 0;
     VAR_10->offload_enabled_pending = 0;
     if (VAR_9)
      FUNC_4(VAR_4, (char *)VAR_9, sizeof(*VAR_9));
     VAR_10->raid_map = ((void*)0);
     return;
    }

    VAR_8 += VAR_12->queue_depth;
   }

   VAR_10->queue_depth = VAR_8;
  }
 }
 FUNC_1("OUT\n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int num_matches; struct dev_match_result* matches; } ;
union ccb {TYPE_1__ cdm; } ;
struct scsi_inquiry_data {int dummy; } ;
struct TYPE_11__ {int flags; int ident_data; int inq_data; int protocol; int target_lun; int target_id; int path_id; } ;
struct TYPE_9__ {int target_lun; int target_id; int path_id; int unit_number; int periph_name; } ;
struct TYPE_13__ {int bus_result; TYPE_4__ device_result; TYPE_2__ periph_result; } ;
struct dev_match_result_0x18 {int type; TYPE_6__ result; } ;
struct TYPE_12__ {int flags; int ident_data; int inq_data; int protocol; int target_lun; int target_id; int path_id; } ;
struct TYPE_10__ {int target_lun; int target_id; int path_id; int unit_number; int periph_name; } ;
struct TYPE_14__ {int bus_result; TYPE_5__ device_result; TYPE_3__ periph_result; } ;
struct dev_match_result {int type; TYPE_7__ result; } ;
struct cam_periph_map_info {int dummy; } ;
struct bus_match_result {int dummy; } ;
struct ata_params {int dummy; } ;
typedef int mapinfo ;


 int VAR_0 ;



 int VAR_1 ;
 int FUNC_0 (struct cam_periph_map_info*,int) ;
 int FUNC_1 (union ccb*,struct cam_periph_map_info*,int ) ;
 int FUNC_2 (union ccb*,struct cam_periph_map_info*) ;
 int FUNC_3 (int *,int *,int) ;

__attribute__((used)) static int
FUNC_4(union ccb *VAR_2)
{
 struct dev_match_result *VAR_3;
 struct dev_match_result_0x18 *VAR_4;
 struct cam_periph_map_info VAR_5;
 int VAR_6;


 FUNC_0(&VAR_5, sizeof(VAR_5));
 FUNC_1(VAR_2, &VAR_5, VAR_1);

 VAR_3 = VAR_2->cdm.matches;

 VAR_4 = (struct dev_match_result_0x18 *)(VAR_3);

 for (VAR_6 = 0; VAR_6 < VAR_2->cdm.num_matches; VAR_6++) {
  VAR_4[VAR_6].type = VAR_3[VAR_6].type;
  switch (VAR_3[VAR_6].type) {
  case 128:
   FUNC_3(&VAR_4[VAR_6].result.periph_result.periph_name,
       &VAR_3[VAR_6].result.periph_result.periph_name,
       VAR_0);
   VAR_4[VAR_6].result.periph_result.unit_number =
      VAR_3[VAR_6].result.periph_result.unit_number;
   VAR_4[VAR_6].result.periph_result.path_id =
      VAR_3[VAR_6].result.periph_result.path_id;
   VAR_4[VAR_6].result.periph_result.target_id =
      VAR_3[VAR_6].result.periph_result.target_id;
   VAR_4[VAR_6].result.periph_result.target_lun =
      VAR_3[VAR_6].result.periph_result.target_lun;
   break;
  case 129:
   VAR_4[VAR_6].result.device_result.path_id =
      VAR_3[VAR_6].result.device_result.path_id;
   VAR_4[VAR_6].result.device_result.target_id =
      VAR_3[VAR_6].result.device_result.target_id;
   VAR_4[VAR_6].result.device_result.target_lun =
      VAR_3[VAR_6].result.device_result.target_lun;
   VAR_4[VAR_6].result.device_result.protocol =
      VAR_3[VAR_6].result.device_result.protocol;
   FUNC_3(&VAR_4[VAR_6].result.device_result.inq_data,
       &VAR_3[VAR_6].result.device_result.inq_data,
       sizeof(struct scsi_inquiry_data));
   FUNC_3(&VAR_4[VAR_6].result.device_result.ident_data,
       &VAR_3[VAR_6].result.device_result.ident_data,
       sizeof(struct ata_params));
   VAR_4[VAR_6].result.device_result.flags =
      VAR_3[VAR_6].result.device_result.flags;
   break;
  case 130:
   FUNC_3(&VAR_4[VAR_6].result.bus_result,
       &VAR_3[VAR_6].result.bus_result,
       sizeof(struct bus_match_result));
   break;
  }
 }

 FUNC_2(VAR_2, &VAR_5);

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint64_t ;
typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct raid_map {scalar_t__ parity_rotation_shift; int phys_blk_shift; int flags; int disk_starting_blk; TYPE_1__* dev_data; int row_cnt; int metadata_disks_per_row; int layout_map_count; int strip_size; int data_disks_per_row; int volume_blk_cnt; } ;
struct TYPE_8__ {int cmdlen; int encrypt_enable; int enc_info; int ioaccel_handle; } ;
typedef TYPE_2__ rcb_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_9__ {scalar_t__ raid_level; int offload_to_mirror; struct raid_map* raid_map; } ;
typedef TYPE_3__ pqi_scsi_dev_t ;
typedef int boolean_t ;
struct TYPE_7__ {int ioaccel_handle; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (int*) ;
 scalar_t__ FUNC_3 (int*) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_5 (scalar_t__,int*) ;
 int FUNC_6 (scalar_t__,int*) ;
 int FUNC_7 (scalar_t__,int*) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_8 (int*,int*,scalar_t__*,scalar_t__*) ;
 int FUNC_9 (int*,int ,int) ;
 int FUNC_10 (int *,struct raid_map*,scalar_t__) ;

int FUNC_11(pqisrc_softstate_t *VAR_13,
    pqi_scsi_dev_t *VAR_14, rcb_t *VAR_15, uint8_t *VAR_16)
{
 struct raid_map *VAR_17;
 boolean_t VAR_18 = 0;
 uint32_t VAR_19;
 uint64_t VAR_20, VAR_21;
 uint32_t VAR_22, VAR_23;
 uint64_t VAR_24, VAR_25;
 uint32_t VAR_26, VAR_27;
 uint32_t VAR_28, VAR_29;
 uint32_t VAR_30;
 uint64_t VAR_31, VAR_32;
 uint32_t VAR_33, VAR_34;
 uint32_t VAR_35, VAR_36;
 uint16_t VAR_37, VAR_38;
 uint16_t VAR_39;
 uint32_t VAR_40;
 uint16_t VAR_41;
 uint32_t VAR_42, VAR_43, VAR_44;
 uint32_t VAR_45;
 uint64_t VAR_46;
 uint32_t VAR_47;
 uint8_t VAR_48;
 int VAR_49;
 int VAR_50;
 FUNC_0(" IN \n");
 FUNC_1("!!!!!\n");


 FUNC_9(VAR_16, FUNC_4(VAR_15), VAR_15->cmdlen);

 for(VAR_50 = 0; VAR_50 < VAR_15->cmdlen ; VAR_50++)
  FUNC_1(" CDB [ %d ] : %x\n",VAR_50,VAR_16[VAR_50]);
 if(FUNC_8(VAR_16, &VAR_18,
  &VAR_20, &VAR_22) == VAR_0)
   return VAR_0;

 if (VAR_18 && VAR_14->raid_level != VAR_4)
  return VAR_0;;

 if(VAR_22 == 0)
  return VAR_0;

 VAR_21 = VAR_20 + VAR_22 - 1;
 VAR_17 = VAR_14->raid_map;


 if (VAR_21 >= FUNC_3((uint8_t *)&VAR_17->volume_blk_cnt) ||
  VAR_21 < VAR_20)
  return VAR_0;

 VAR_37 = FUNC_2((uint8_t *)&VAR_17->data_disks_per_row);
 VAR_41 = FUNC_2((uint8_t *)(&VAR_17->strip_size));
 VAR_39 = FUNC_2((uint8_t *)(&VAR_17->layout_map_count));


 VAR_23 = VAR_37 * VAR_41;
 if (!VAR_23)
  return VAR_0;

 VAR_24 = VAR_20 / VAR_23;
 VAR_25 = VAR_21 / VAR_23;
 VAR_26 = (uint32_t)(VAR_20 - (VAR_24 * VAR_23));
 VAR_27 = (uint32_t)(VAR_21 - (VAR_25 * VAR_23));
 VAR_28 = VAR_26 / VAR_41;
 VAR_29 = VAR_27 / VAR_41;


 if (VAR_24 != VAR_25 || VAR_28 != VAR_29)
  return VAR_0;


 VAR_38 = VAR_37 +
  FUNC_2((uint8_t *)(&VAR_17->metadata_disks_per_row));
 VAR_45 = ((uint32_t)(VAR_24 >> VAR_17->parity_rotation_shift)) %
  FUNC_2((uint8_t *)(&VAR_17->row_cnt));
 VAR_19 = (VAR_45 * VAR_38) + VAR_28;


 if (VAR_14->raid_level == VAR_5) {
  if (VAR_14->offload_to_mirror)
   VAR_19 += VAR_37;
  VAR_14->offload_to_mirror = !VAR_14->offload_to_mirror;
 } else if (VAR_14->raid_level == VAR_8) {





  VAR_49 = VAR_14->offload_to_mirror;
  if (VAR_49 == 0) {

   VAR_19 %= VAR_37;
  } else {
   do {




    VAR_44 = VAR_19 / VAR_37;

    if (VAR_49 != VAR_44) {
     if (VAR_44 <
      VAR_39 - 1) {




      VAR_19 += VAR_37;
      VAR_44++;
     } else {




      VAR_19 %= VAR_37;
      VAR_44 = 0;
     }
    }
   } while (VAR_49 != VAR_44);
  }


  VAR_49 =
   (VAR_49 >= VAR_39 - 1) ?
    0 : VAR_49 + 1;
  if(VAR_49 >= VAR_39)
   return VAR_0;

  VAR_14->offload_to_mirror = VAR_49;





 } else if ((VAR_14->raid_level == VAR_6 ||
  VAR_14->raid_level == VAR_7) && VAR_39 > 1) {


  VAR_30 = VAR_41 * VAR_37;
  VAR_40 = VAR_30 * VAR_39;

  VAR_42 = (VAR_20 % VAR_40) / VAR_30;
  VAR_43 = (VAR_21 % VAR_40) / VAR_30;

  if (VAR_42 != VAR_43)
   return VAR_0;


  VAR_24 = VAR_31 =
   VAR_20 / VAR_40;
  VAR_32 = VAR_21 / VAR_40;

  if (VAR_31 != VAR_32)
   return VAR_0;


  VAR_26 = VAR_33 =
   (uint32_t)((VAR_20 % VAR_40) %
   VAR_30);

  VAR_34 =
   (uint32_t)((VAR_21 % VAR_40) %
   VAR_30);

  VAR_28 = VAR_33 / VAR_41;
  VAR_35 = VAR_28;
  VAR_36 = VAR_34 / VAR_41;

  if (VAR_35 != VAR_36)
   return VAR_0;


  VAR_45 =
   ((uint32_t)(VAR_24 >> VAR_17->parity_rotation_shift)) %
   FUNC_2((uint8_t *)(&VAR_17->row_cnt));

  VAR_19 = (VAR_42 *
   (FUNC_2((uint8_t *)(&VAR_17->row_cnt)) *
   VAR_38)) +
   (VAR_45 * VAR_38) + VAR_28;
 }

 if (VAR_19 >= VAR_3)
  return VAR_0;

 VAR_15->ioaccel_handle = VAR_17->dev_data[VAR_19].ioaccel_handle;
 VAR_46 = FUNC_3((uint8_t *)(&VAR_17->disk_starting_blk)) +
  VAR_24 * VAR_41 +
  (VAR_26 - VAR_28 * VAR_41);
 VAR_47 = VAR_22;


 if (VAR_17->phys_blk_shift) {
  VAR_46 <<= VAR_17->phys_blk_shift;
  VAR_47 <<= VAR_17->phys_blk_shift;
 }

 if (VAR_47 > 0xffff)
  return VAR_0;


 if (VAR_46 > 0xffffffff) {
  VAR_16[0] = VAR_18 ? VAR_12 : VAR_10;
  VAR_16[1] = 0;
  FUNC_7(VAR_46, &VAR_16[2]);
  FUNC_6(VAR_47, &VAR_16[10]);
  VAR_16[14] = 0;
  VAR_16[15] = 0;
  VAR_48 = 16;
 } else {
  VAR_16[0] = VAR_18 ? VAR_11 : VAR_9;
  VAR_16[1] = 0;
  FUNC_6(VAR_46, &VAR_16[2]);
  VAR_16[6] = 0;
  FUNC_5(VAR_47, &VAR_16[7]);
  VAR_16[9] = 0;
  VAR_48 = 10;
 }

 if (FUNC_2((uint8_t *)(&VAR_17->flags)) &
  VAR_2) {
  FUNC_10(&VAR_15->enc_info, VAR_17,
   VAR_20);
  VAR_15->encrypt_enable = 1;
 } else {
  VAR_15->encrypt_enable = 0;
 }

 VAR_15->cmdlen = VAR_48;


 FUNC_0("OUT");

 return VAR_1;
}

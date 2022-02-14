
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ccb {int dummy; } ccb ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct mpssas_softc {struct mps_softc* sc; } ;
struct mps_softc {scalar_t__ DD_dev_handle; int DD_block_exponent; int DD_max_lba; int DD_stripe_size; int DD_stripe_exponent; int DD_num_phys_disks; TYPE_1__* DD_column_map; } ;
struct TYPE_7__ {scalar_t__ DevHandle; } ;
struct TYPE_8__ {TYPE_2__ SCSIIO; } ;
struct mps_command {int cm_length; int cm_flags; TYPE_3__ cm_desc; scalar_t__ cm_req; } ;
typedef TYPE_5__* pMpi2SCSIIORequest_t ;
struct TYPE_9__ {int* CDB32; } ;
struct TYPE_10__ {scalar_t__ DevHandle; TYPE_4__ CDB; } ;
struct TYPE_6__ {int dev_handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 void* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct mpssas_softc *VAR_9, struct mps_command *VAR_10,
    union ccb *VAR_11) {
 pMpi2SCSIIORequest_t VAR_12;
 struct mps_softc *VAR_13 = VAR_9->sc;
 uint64_t VAR_14;
 uint32_t VAR_15, VAR_16, VAR_17;
 uint32_t VAR_18, VAR_19;
 uint8_t *VAR_20, VAR_21, VAR_22, *VAR_23;







 VAR_12 = (pMpi2SCSIIORequest_t)VAR_10->cm_req;
 VAR_23 = VAR_12->CDB.CDB32;




 if ((VAR_12->DevHandle == VAR_13->DD_dev_handle) && ((VAR_23[0] == VAR_4) ||
     (VAR_23[0] == VAR_8))) {



  VAR_18 = (VAR_10->cm_length >> VAR_13->DD_block_exponent);




  VAR_14 = ((uint64_t)(VAR_23[1] & 0x1F) << 16) |
      ((uint64_t)VAR_23[2] << 8) | (uint64_t)VAR_23[3];





  if ((VAR_14 + (uint64_t)VAR_18 - 1) <=
      VAR_13->DD_max_lba) {
   VAR_16 = (uint32_t)VAR_14 &
       (VAR_13->DD_stripe_size - 1);
   if ((VAR_16 + VAR_18) <= VAR_13->DD_stripe_size) {
    VAR_15 = (uint32_t)VAR_14 >>
        VAR_13->DD_stripe_exponent;
    VAR_17 = VAR_15 / VAR_13->DD_num_phys_disks;
    VAR_19 = VAR_15 % VAR_13->DD_num_phys_disks;
    VAR_12->DevHandle =
        FUNC_0(VAR_13->DD_column_map[VAR_19].dev_handle);

    VAR_10->cm_desc.SCSIIO.DevHandle =
        VAR_12->DevHandle;

    VAR_15 = (VAR_17 <<
        VAR_13->DD_stripe_exponent) + VAR_16;
    VAR_20 = &VAR_12->CDB.CDB32[1];
    VAR_22 = (uint8_t)(VAR_15 >> 16);
    *VAR_20 = VAR_22;
    VAR_20 = &VAR_12->CDB.CDB32[2];
    VAR_22 = (uint8_t)(VAR_15 >> 8);
    *VAR_20 = VAR_22;
    VAR_20 = &VAR_12->CDB.CDB32[3];
    VAR_22 = (uint8_t)VAR_15;
    *VAR_20 = VAR_22;





    VAR_10->cm_flags |= VAR_0;
   }
  }
  return;
 }




 if ((VAR_12->DevHandle == VAR_13->DD_dev_handle) && ((VAR_23[0] == VAR_1) ||
     (VAR_23[0] == VAR_5) || (VAR_23[0] == VAR_3) ||
     (VAR_23[0] == VAR_7) || (VAR_23[0] == VAR_2) ||
     (VAR_23[0] == VAR_6))) {







  if ((VAR_23[0] == VAR_1 || VAR_23[0] == VAR_5) ||
      (VAR_23[0] == VAR_2 || VAR_23[0] == VAR_6) ||
      !(VAR_23[2] | VAR_23[3] | VAR_23[4] | VAR_23[5])) {



   VAR_18 = (VAR_10->cm_length >> VAR_13->DD_block_exponent);





   VAR_21 = ((VAR_23[0] == VAR_2) ||
    (VAR_23[0] == VAR_6) ||
    (VAR_23[0] == VAR_1) ||
    (VAR_23[0] == VAR_5))? 2 : 6;
   VAR_14 = ((uint64_t)VAR_23[VAR_21] << 24) |
       ((uint64_t)VAR_23[VAR_21 + 1] << 16) |
       ((uint64_t)VAR_23[VAR_21 + 2] << 8) |
       (uint64_t)VAR_23[VAR_21 + 3];





   if ((VAR_14 + (uint64_t)VAR_18 - 1) <=
       VAR_13->DD_max_lba) {
    VAR_16 = (uint32_t)VAR_14 &
        (VAR_13->DD_stripe_size - 1);
    if ((VAR_16 + VAR_18) <=
        VAR_13->DD_stripe_size) {
     VAR_15 = (uint32_t)VAR_14 >>
         VAR_13->DD_stripe_exponent;
     VAR_17 = VAR_15 /
         VAR_13->DD_num_phys_disks;
     VAR_19 = VAR_15 %
         VAR_13->DD_num_phys_disks;
     VAR_12->DevHandle =
         FUNC_0(VAR_13->DD_column_map[VAR_19].
         dev_handle);
     VAR_10->cm_desc.SCSIIO.DevHandle =
         VAR_12->DevHandle;

     VAR_15 = (VAR_17 <<
         VAR_13->DD_stripe_exponent) +
         VAR_16;
     VAR_20 =
         &VAR_12->CDB.CDB32[VAR_21];
     VAR_22 = (uint8_t)(VAR_15 >> 24);
     *VAR_20 = VAR_22;
     VAR_20 =
         &VAR_12->CDB.CDB32[VAR_21 + 1];
     VAR_22 = (uint8_t)(VAR_15 >> 16);
     *VAR_20 = VAR_22;
     VAR_20 =
         &VAR_12->CDB.CDB32[VAR_21 + 2];
     VAR_22 = (uint8_t)(VAR_15 >> 8);
     *VAR_20 = VAR_22;
     VAR_20 =
         &VAR_12->CDB.CDB32[VAR_21 + 3];
     VAR_22 = (uint8_t)VAR_15;
     *VAR_20 = VAR_22;





     VAR_10->cm_flags |= VAR_0;
    }
   }
  } else {




   VAR_18 = (VAR_10->cm_length >> VAR_13->DD_block_exponent);




   VAR_14 = ((uint64_t)VAR_23[2] << 54) |
       ((uint64_t)VAR_23[3] << 48) |
       ((uint64_t)VAR_23[4] << 40) |
       ((uint64_t)VAR_23[5] << 32) |
       ((uint64_t)VAR_23[6] << 24) |
       ((uint64_t)VAR_23[7] << 16) |
       ((uint64_t)VAR_23[8] << 8) |
       (uint64_t)VAR_23[9];





   if ((VAR_14 + (uint64_t)VAR_18 - 1) <=
       VAR_13->DD_max_lba) {
    VAR_16 = (uint32_t)VAR_14 &
        (VAR_13->DD_stripe_size - 1);
    if ((VAR_16 + VAR_18) <=
        VAR_13->DD_stripe_size) {
     VAR_15 = (uint32_t)(VAR_14 >>
         VAR_13->DD_stripe_exponent);
     VAR_17 = VAR_15 /
         VAR_13->DD_num_phys_disks;
     VAR_19 = VAR_15 %
         VAR_13->DD_num_phys_disks;
     VAR_12->DevHandle =
         FUNC_0(VAR_13->DD_column_map[VAR_19].
         dev_handle);
     VAR_10->cm_desc.SCSIIO.DevHandle =
         VAR_12->DevHandle;

     VAR_15 = (VAR_17 <<
         VAR_13->DD_stripe_exponent) +
         VAR_16;







     VAR_12->CDB.CDB32[2] = 0;
     VAR_12->CDB.CDB32[3] = 0;
     VAR_12->CDB.CDB32[4] = 0;
     VAR_12->CDB.CDB32[5] = 0;
     VAR_20 = &VAR_12->CDB.CDB32[6];
     VAR_22 = (uint8_t)(VAR_15 >> 24);
     *VAR_20 = VAR_22;
     VAR_20 = &VAR_12->CDB.CDB32[7];
     VAR_22 = (uint8_t)(VAR_15 >> 16);
     *VAR_20 = VAR_22;
     VAR_20 = &VAR_12->CDB.CDB32[8];
     VAR_22 = (uint8_t)(VAR_15 >> 8);
     *VAR_20 = VAR_22;
     VAR_20 = &VAR_12->CDB.CDB32[9];
     VAR_22 = (uint8_t)VAR_15;
     *VAR_20 = VAR_22;





     VAR_10->cm_flags |= VAR_0;
    }
   }
  }
 }
}

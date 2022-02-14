
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct mprsas_target {int connector_name; int encl_slot; int encl_level; scalar_t__ encl_level_valid; } ;
struct mpr_softc {int mpr_debug; } ;
struct ccb_scsiio {int dummy; } ;
struct TYPE_3__ {int SCSIState; int SCSIStatus; int ResponseInfo; int DevHandle; int IOCLogInfo; int IOCStatus; } ;
typedef TYPE_1__ Mpi2SCSIIOReply_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int ,int) ;
 int FUNC_3 (struct mpr_softc*,int,char*,...) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (struct ccb_scsiio*) ;

__attribute__((used)) static void
FUNC_5(struct mpr_softc *VAR_7, struct ccb_scsiio *VAR_8,
    Mpi2SCSIIOReply_t *VAR_9, struct mprsas_target *VAR_10)
{
 u32 VAR_11;
 u8 *VAR_12;
 u16 VAR_13 = FUNC_0(VAR_9->IOCStatus) &
     VAR_0;
 u8 VAR_14 = VAR_9->SCSIState;
 u8 VAR_15 = VAR_9->SCSIStatus;
 char *VAR_16 = ((void*)0);
 char *VAR_17 = ((void*)0);
 u32 VAR_18 = FUNC_1(VAR_9->IOCLogInfo);

 if (VAR_18 == 0x31170000)
  return;

 VAR_16 = FUNC_2(VAR_4,
      VAR_13);
 VAR_17 = FUNC_2(VAR_5,
     VAR_15);

 FUNC_3(VAR_7, VAR_3, "\thandle(0x%04x), ioc_status(%s)(0x%04x)\n",
     FUNC_0(VAR_9->DevHandle), VAR_16, VAR_13);
 if (VAR_10->encl_level_valid) {
  FUNC_3(VAR_7, VAR_3, "At enclosure level %d, slot %d, "
      "connector name (%4s)\n", VAR_10->encl_level, VAR_10->encl_slot,
      VAR_10->connector_name);
 }





 FUNC_3(VAR_7, VAR_3, "\tscsi_status(%s)(0x%02x), "
     "scsi_state %b\n", VAR_17, VAR_15,
     VAR_14, "\20" "\1AutosenseValid" "\2AutosenseFailed"
     "\3NoScsiStatus" "\4Terminated" "\5Response InfoValid");

 if (VAR_7->mpr_debug & VAR_3 &&
     VAR_14 & VAR_1) {
  FUNC_3(VAR_7, VAR_3, "-> Sense Buffer Data : Start :\n");
  FUNC_4(VAR_8);
  FUNC_3(VAR_7, VAR_3, "-> Sense Buffer Data : End :\n");
 }

 if (VAR_14 & VAR_2) {
  VAR_11 = FUNC_1(VAR_9->ResponseInfo);
  VAR_12 = (u8 *)&VAR_11;
  FUNC_3(VAR_7, VAR_3, "response code(0x%01x): %s\n",
      VAR_12[0],
      FUNC_2(VAR_6,
      VAR_12[0]));
 }
}

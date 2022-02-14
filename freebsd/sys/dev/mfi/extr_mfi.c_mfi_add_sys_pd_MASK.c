
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_system_pending {int pd_id; } ;
struct mfi_softc {int mfi_buffer_dmat; int mfi_dev; int mfi_syspd_pend_tqh; int mfi_io_lock; } ;
struct mfi_pd_info {int dummy; } ;
struct TYPE_4__ {scalar_t__ pad0; scalar_t__ scsi_status; } ;
struct mfi_dcmd_frame {int* mbox; TYPE_2__ header; } ;
struct mfi_command {int cm_flags; int cm_dmamap; TYPE_1__* cm_frame; } ;
struct TYPE_3__ {struct mfi_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int *,struct mfi_system_pending*,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct mfi_pd_info*,int ) ;
 struct mfi_system_pending* FUNC_5 (int,int ,int) ;
 int FUNC_6 (struct mfi_command*) ;
 int FUNC_7 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_8 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_9 (struct mfi_command*) ;
 int FUNC_10 (int *,int ) ;
 int VAR_8 ;

__attribute__((used)) static int FUNC_11(struct mfi_softc *VAR_9, int VAR_10)
{
 struct mfi_command *VAR_11;
 struct mfi_dcmd_frame *VAR_12 = ((void*)0);
 struct mfi_pd_info *VAR_13 = ((void*)0);
 struct mfi_system_pending *VAR_14;
 int VAR_15;

 FUNC_10(&VAR_9->mfi_io_lock, VAR_1);

 VAR_14 = FUNC_5(sizeof(*VAR_14), VAR_5, VAR_6 | VAR_7);
 if (VAR_14 != ((void*)0)) {
  VAR_14->pd_id = VAR_10;
  FUNC_0(&VAR_9->mfi_syspd_pend_tqh, VAR_14, VAR_8);
 }

 VAR_15 = FUNC_7(VAR_9, &VAR_11, VAR_4,
  (void **)&VAR_13, sizeof(*VAR_13));
 if (VAR_15) {
  FUNC_3(VAR_9->mfi_dev,
      "Failed to allocated for MFI_DCMD_PD_GET_INFO %d\n",
      VAR_15);
  if (VAR_13)
   FUNC_4(VAR_13, VAR_5);
  return (VAR_15);
 }
 VAR_11->cm_flags = VAR_2 | VAR_3;
 VAR_12 = &VAR_11->cm_frame->dcmd;
 VAR_12->mbox[0]=VAR_10;
 VAR_12->header.scsi_status = 0;
 VAR_12->header.pad0 = 0;
 if ((VAR_15 = FUNC_8(VAR_9, VAR_11)) != 0) {
  FUNC_3(VAR_9->mfi_dev,
      "Failed to get physical drive info %d\n", VAR_10);
  FUNC_4(VAR_13, VAR_5);
  FUNC_9(VAR_11);
  return (VAR_15);
 }
 FUNC_1(VAR_9->mfi_buffer_dmat, VAR_11->cm_dmamap,
     VAR_0);
 FUNC_2(VAR_9->mfi_buffer_dmat, VAR_11->cm_dmamap);
 FUNC_6(VAR_11);
 return (0);
}

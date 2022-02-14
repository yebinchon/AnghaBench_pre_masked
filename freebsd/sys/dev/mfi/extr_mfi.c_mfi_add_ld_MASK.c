
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct mfi_softc {int mfi_dev; int mfi_ld_pend_tqh; int mfi_io_lock; } ;
struct TYPE_5__ {int isSSCD; } ;
struct TYPE_6__ {TYPE_2__ params; } ;
struct mfi_ld_info {TYPE_3__ ld_config; } ;
struct mfi_disk_pending {int ld_id; } ;
struct mfi_dcmd_frame {int* mbox; } ;
struct mfi_command {TYPE_1__* cm_frame; int cm_flags; } ;
struct TYPE_4__ {struct mfi_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int *,struct mfi_disk_pending*,int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (struct mfi_ld_info*,int ) ;
 int VAR_6 ;
 struct mfi_disk_pending* FUNC_3 (int,int ,int) ;
 int FUNC_4 (struct mfi_command*) ;
 int FUNC_5 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_6 (struct mfi_command*) ;
 scalar_t__ FUNC_7 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_8 (int *,int ) ;

__attribute__((used)) static int
FUNC_9(struct mfi_softc *VAR_7, int VAR_8)
{
 struct mfi_command *VAR_9;
 struct mfi_dcmd_frame *VAR_10 = ((void*)0);
 struct mfi_ld_info *VAR_11 = ((void*)0);
 struct mfi_disk_pending *VAR_12;
 int VAR_13;

 FUNC_8(&VAR_7->mfi_io_lock, VAR_0);

 VAR_12 = FUNC_3(sizeof(*VAR_12), VAR_3, VAR_4 | VAR_5);
 if (VAR_12 != ((void*)0)) {
  VAR_12->ld_id = VAR_8;
  FUNC_0(&VAR_7->mfi_ld_pend_tqh, VAR_12, VAR_6);
 }

 VAR_13 = FUNC_5(VAR_7, &VAR_9, VAR_2,
     (void **)&VAR_11, sizeof(*VAR_11));
 if (VAR_13) {
  FUNC_1(VAR_7->mfi_dev,
      "Failed to allocate for MFI_DCMD_LD_GET_INFO %d\n", VAR_13);
  if (VAR_11)
   FUNC_2(VAR_11, VAR_3);
  return (VAR_13);
 }
 VAR_9->cm_flags = VAR_1;
 VAR_10 = &VAR_9->cm_frame->dcmd;
 VAR_10->mbox[0] = VAR_8;
 if (FUNC_7(VAR_7, VAR_9) != 0) {
  FUNC_1(VAR_7->mfi_dev,
      "Failed to get logical drive: %d\n", VAR_8);
  FUNC_2(VAR_11, VAR_3);
  return (0);
 }
 if (VAR_11->ld_config.params.isSSCD != 1)
  FUNC_4(VAR_9);
 else {
  FUNC_6(VAR_9);
  if (VAR_11)
   FUNC_2(VAR_11, VAR_3);
 }
 return (0);
}

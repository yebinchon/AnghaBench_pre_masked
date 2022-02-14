
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef union mfi_frame {int dummy; } mfi_frame ;
typedef int uint64_t ;
typedef void* uint32_t ;
struct mfi_softc {int mfi_io_lock; int mfi_dev; } ;
struct mfi_command {int (* cm_complete ) (struct mfi_command*) ;int cm_flags; int * cm_data; scalar_t__ cm_frame_busaddr; TYPE_3__* cm_frame; } ;
struct TYPE_4__ {scalar_t__ scsi_status; scalar_t__ flags; int cmd; } ;
struct mfi_abort_frame {void* abort_mfi_addr_hi; void* abort_mfi_addr_lo; void* abort_context; TYPE_1__ header; } ;
struct TYPE_5__ {void* context; } ;
struct TYPE_6__ {TYPE_2__ header; struct mfi_abort_frame abort; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_3__*,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;
 struct mfi_command* FUNC_2 (struct mfi_softc*) ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct mfi_command*) ;
 int FUNC_8 (struct mfi_command**,int ,char*,int) ;

__attribute__((used)) static int
FUNC_9(struct mfi_softc *VAR_4, struct mfi_command **VAR_5)
{
 struct mfi_command *VAR_6;
 struct mfi_abort_frame *VAR_7;
 int VAR_8 = 0, VAR_9;
 uint32_t VAR_10 = 0;

 FUNC_5(&VAR_4->mfi_io_lock);
 if ((VAR_6 = FUNC_2(VAR_4)) == ((void*)0)) {
  FUNC_6(&VAR_4->mfi_io_lock);
  return (VAR_0);
 }


 VAR_10 = VAR_6->cm_frame->header.context;
 FUNC_0(VAR_6->cm_frame, sizeof(union mfi_frame));
 VAR_6->cm_frame->header.context = VAR_10;

 VAR_7 = &VAR_6->cm_frame->abort;
 VAR_7->header.cmd = VAR_1;
 VAR_7->header.flags = 0;
 VAR_7->header.scsi_status = 0;
 VAR_7->abort_context = (*VAR_5)->cm_frame->header.context;
 VAR_7->abort_mfi_addr_lo = (uint32_t)(*VAR_5)->cm_frame_busaddr;
 VAR_7->abort_mfi_addr_hi =
  (uint32_t)((uint64_t)(*VAR_5)->cm_frame_busaddr >> 32);
 VAR_6->cm_data = ((void*)0);
 VAR_6->cm_flags = VAR_2;

 if ((VAR_9 = FUNC_3(VAR_4, VAR_6)) != 0)
  FUNC_1(VAR_4->mfi_dev, "failed to abort command\n");
 FUNC_4(VAR_6);

 FUNC_6(&VAR_4->mfi_io_lock);
 while (VAR_8 < 5 && *VAR_5 != ((void*)0)) {
  FUNC_8(VAR_5, 0, "mfiabort",
      5 * VAR_3);
  VAR_8++;
 }
 if (*VAR_5 != ((void*)0)) {

  FUNC_5(&VAR_4->mfi_io_lock);
  (*VAR_5)->cm_complete(*VAR_5);
  FUNC_6(&VAR_4->mfi_io_lock);
 }

 return (VAR_9);
}

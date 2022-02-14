
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct mfi_softc {int mfi_io_lock; int mfi_dev; } ;
struct mfi_dcmd_frame {int sgl; int opcode; } ;
struct mfi_ioc_passthru {int buf_size; int buf; struct mfi_dcmd_frame ioc_frame; } ;
struct mfi_command {int cm_len; int cm_flags; TYPE_2__* cm_frame; void* cm_data; int cm_total_frame_size; int * cm_sg; } ;
struct TYPE_3__ {int context; } ;
struct TYPE_4__ {TYPE_1__ header; struct mfi_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mfi_dcmd_frame*,struct mfi_dcmd_frame*,int) ;
 int FUNC_1 (int ,void*,int) ;
 int FUNC_2 (void*,int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (void*,int ) ;
 int VAR_6 ;
 void* FUNC_5 (int,int ,int ) ;
 int FUNC_6 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_7 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_8 (struct mfi_softc*,int ) ;
 int FUNC_9 (struct mfi_softc*,int) ;
 struct mfi_command* FUNC_10 (struct mfi_softc*) ;
 int FUNC_11 (struct mfi_command*) ;
 int FUNC_12 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_13 (int (*) (struct mfi_softc*,struct mfi_ioc_passthru*),int *,int ,char*,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *) ;

__attribute__((used)) static int
FUNC_16(struct mfi_softc *VAR_7, struct mfi_ioc_passthru *VAR_8)
{
 struct mfi_command *VAR_9;
 struct mfi_dcmd_frame *VAR_10;
 void *VAR_11 = ((void*)0);
 uint32_t VAR_12;
 int VAR_13 = 0, VAR_14;


 if (VAR_8->buf_size > 0) {
  if (VAR_8->buf_size > 1024 * 1024)
   return (VAR_0);
  VAR_11 = FUNC_5(VAR_8->buf_size, VAR_4, VAR_5);
  VAR_13 = FUNC_1(VAR_8->buf, VAR_11, VAR_8->buf_size);
  if (VAR_13) {
   FUNC_3(VAR_7->mfi_dev, "failed to copyin\n");
   FUNC_4(VAR_11, VAR_4);
   return (VAR_13);
  }
 }

 VAR_14 = FUNC_8(VAR_7, VAR_8->ioc_frame.opcode);

 FUNC_14(&VAR_7->mfi_io_lock);
 while ((VAR_9 = FUNC_10(VAR_7)) == ((void*)0))
  FUNC_13(FUNC_16, &VAR_7->mfi_io_lock, 0, "mfiioc", VAR_6);


 VAR_12 = VAR_9->cm_frame->header.context;

 VAR_10 = &VAR_9->cm_frame->dcmd;
 FUNC_0(&VAR_8->ioc_frame, VAR_10, sizeof(struct mfi_dcmd_frame));

 VAR_9->cm_sg = &VAR_10->sgl;
 VAR_9->cm_total_frame_size = VAR_3;
 VAR_9->cm_data = VAR_11;
 VAR_9->cm_len = VAR_8->buf_size;


 VAR_9->cm_frame->header.context = VAR_12;


 VAR_9->cm_flags = VAR_1 | VAR_2;

 VAR_13 = FUNC_7(VAR_7, VAR_9);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_12(VAR_7, VAR_9);
 if (VAR_13) {
  FUNC_3(VAR_7->mfi_dev, "ioctl failed %d\n", VAR_13);
  goto out;
 }
 FUNC_0(VAR_10, &VAR_8->ioc_frame, sizeof(struct mfi_dcmd_frame));
 FUNC_6(VAR_7, VAR_9);
out:
 FUNC_11(VAR_9);
 FUNC_15(&VAR_7->mfi_io_lock);
 FUNC_9(VAR_7, VAR_14);
 if (VAR_8->buf_size > 0)
  VAR_13 = FUNC_2(VAR_11, VAR_8->buf, VAR_8->buf_size);
 if (VAR_11)
  FUNC_4(VAR_11, VAR_4);
 return (VAR_13);
}

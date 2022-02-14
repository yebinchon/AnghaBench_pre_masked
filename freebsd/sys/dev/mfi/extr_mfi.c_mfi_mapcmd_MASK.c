
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_softc {int mfi_flags; int mfi_buffer_dmat; int mfi_io_lock; } ;
struct mfi_command {int cm_flags; int cm_len; int * cm_data; int cm_dmamap; int cm_private; TYPE_2__* cm_frame; } ;
struct TYPE_3__ {scalar_t__ cmd; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int *,int ,int ,struct mfi_command*,int) ;
 int FUNC_1 (int ,int ,int ,int ,struct mfi_command*,int) ;
 int FUNC_2 (int ,int ,int *,int ,struct mfi_command*,int) ;
 int VAR_8 ;
 int FUNC_3 (struct mfi_softc*,struct mfi_command*) ;
 int FUNC_4 (int *,int ) ;

int
FUNC_5(struct mfi_softc *VAR_9, struct mfi_command *VAR_10)
{
 int VAR_11, VAR_12;

 FUNC_4(&VAR_9->mfi_io_lock, VAR_2);

 if ((VAR_10->cm_data != ((void*)0)) && (VAR_10->cm_frame->header.cmd != VAR_6 )) {
  VAR_12 = (VAR_10->cm_flags & VAR_5) ? VAR_0 : 0;
  if (VAR_10->cm_flags & VAR_4)
   VAR_11 = FUNC_2(VAR_9->mfi_buffer_dmat,
       VAR_10->cm_dmamap, VAR_10->cm_data, VAR_8, VAR_10,
       VAR_12);
  else if (VAR_10->cm_flags & VAR_3)
   VAR_11 = FUNC_1(VAR_9->mfi_buffer_dmat,
       VAR_10->cm_dmamap, VAR_10->cm_private, VAR_8, VAR_10,
       VAR_12);
  else
   VAR_11 = FUNC_0(VAR_9->mfi_buffer_dmat,
       VAR_10->cm_dmamap, VAR_10->cm_data, VAR_10->cm_len,
       VAR_8, VAR_10, VAR_12);
  if (VAR_11 == VAR_1) {
   VAR_9->mfi_flags |= VAR_7;
   return (0);
  }
 } else {
  VAR_11 = FUNC_3(VAR_9, VAR_10);
 }

 return (VAR_11);
}

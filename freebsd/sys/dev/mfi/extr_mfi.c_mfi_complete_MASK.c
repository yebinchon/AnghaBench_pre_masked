
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mfi_softc {int mfi_buffer_dmat; int mfi_io_lock; } ;
struct mfi_command {int cm_flags; int (* cm_complete ) (struct mfi_command*) ;int cm_dmamap; TYPE_2__* cm_frame; } ;
struct TYPE_3__ {scalar_t__ cmd; } ;
struct TYPE_4__ {TYPE_1__ header; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (struct mfi_command*) ;
 int FUNC_4 (struct mfi_command*) ;

void
FUNC_5(struct mfi_softc *VAR_8, struct mfi_command *VAR_9)
{
 int VAR_10;
 FUNC_2(&VAR_8->mfi_io_lock, VAR_2);

 if ((VAR_9->cm_flags & VAR_6) != 0) {
  VAR_10 = 0;
  if ((VAR_9->cm_flags & VAR_4) ||
      (VAR_9->cm_frame->header.cmd == VAR_7))
   VAR_10 |= VAR_0;
  if (VAR_9->cm_flags & VAR_5)
   VAR_10 |= VAR_1;

  FUNC_0(VAR_8->mfi_buffer_dmat, VAR_9->cm_dmamap, VAR_10);
  FUNC_1(VAR_8->mfi_buffer_dmat, VAR_9->cm_dmamap);
  VAR_9->cm_flags &= ~VAR_6;
 }

 VAR_9->cm_flags |= VAR_3;

 if (VAR_9->cm_complete != ((void*)0))
  VAR_9->cm_complete(VAR_9);
 else
  FUNC_4(VAR_9);
}

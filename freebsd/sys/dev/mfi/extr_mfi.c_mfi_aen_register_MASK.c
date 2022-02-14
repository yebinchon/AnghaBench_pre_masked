
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ evt_class; int locale; } ;
union mfi_evt {int word; TYPE_1__ members; } ;
typedef int uint32_t ;
struct mfi_softc {int last_seq_num; struct mfi_command* mfi_aen_cm; int mfi_io_lock; } ;
struct mfi_evt_detail {int dummy; } ;
struct mfi_dcmd_frame {int mbox; } ;
struct mfi_command {int cm_complete; int cm_flags; TYPE_2__* cm_frame; } ;
struct TYPE_4__ {struct mfi_dcmd_frame dcmd; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mfi_softc*,struct mfi_command**) ;
 int VAR_3 ;
 int FUNC_1 (struct mfi_softc*,struct mfi_command**,int ,void**,int) ;
 int FUNC_2 (struct mfi_command*) ;
 int FUNC_3 (struct mfi_softc*) ;
 int FUNC_4 (int *,int ) ;

__attribute__((used)) static int
FUNC_5(struct mfi_softc *VAR_4, int VAR_5, int VAR_6)
{
 struct mfi_command *VAR_7;
 struct mfi_dcmd_frame *VAR_8;
 union mfi_evt VAR_9, VAR_10;
 struct mfi_evt_detail *VAR_11 = ((void*)0);
 int VAR_12 = 0;

 FUNC_4(&VAR_4->mfi_io_lock, VAR_0);

 VAR_9.word = VAR_6;
 if (VAR_4->mfi_aen_cm != ((void*)0)) {
  VAR_10.word =
      ((uint32_t *)&VAR_4->mfi_aen_cm->cm_frame->dcmd.mbox)[1];
  if (VAR_10.members.evt_class <= VAR_9.members.evt_class &&
      !((VAR_10.members.locale & VAR_9.members.locale)
      ^VAR_9.members.locale)) {
   return (0);
  } else {
   VAR_10.members.locale |= VAR_9.members.locale;
   if (VAR_10.members.evt_class
       < VAR_9.members.evt_class)
    VAR_9.members.evt_class =
        VAR_10.members.evt_class;
   FUNC_0(VAR_4, &VAR_4->mfi_aen_cm);
  }
 }

 VAR_12 = FUNC_1(VAR_4, &VAR_7, VAR_2,
     (void **)&VAR_11, sizeof(*VAR_11));
 if (VAR_12)
  goto out;

 VAR_8 = &VAR_7->cm_frame->dcmd;
 ((uint32_t *)&VAR_8->mbox)[0] = VAR_5;
 ((uint32_t *)&VAR_8->mbox)[1] = VAR_6;
 VAR_7->cm_flags = VAR_1;
 VAR_7->cm_complete = VAR_3;

 VAR_4->last_seq_num = VAR_5;
 VAR_4->mfi_aen_cm = VAR_7;

 FUNC_2(VAR_7);
 FUNC_3(VAR_4);

out:
 return (VAR_12);
}

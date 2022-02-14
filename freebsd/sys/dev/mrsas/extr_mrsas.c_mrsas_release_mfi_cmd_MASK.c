
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct mrsas_softc {int mfi_cmd_pool_lock; int mrsas_mfi_cmd_list_head; int mpt_cmd_pool_lock; int mrsas_mpt_cmd_list_head; struct mrsas_mpt_cmd** mpt_cmd_list; } ;
struct TYPE_3__ {int smid; } ;
struct TYPE_4__ {scalar_t__ frame_count; TYPE_1__ context; } ;
struct mrsas_mpt_cmd {TYPE_2__ cmd_id; int * ccb_ptr; scalar_t__ sync_cmd_idx; scalar_t__ flags; struct mrsas_softc* sc; } ;
struct mrsas_mfi_cmd {TYPE_2__ cmd_id; int * ccb_ptr; scalar_t__ sync_cmd_idx; scalar_t__ flags; struct mrsas_softc* sc; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,struct mrsas_mpt_cmd*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_1 ;

void
FUNC_3(struct mrsas_mfi_cmd *VAR_2)
{
 struct mrsas_softc *VAR_3 = VAR_2->sc;
 struct mrsas_mpt_cmd *VAR_4;


 FUNC_1(&VAR_3->mfi_cmd_pool_lock);




 if (VAR_2->cmd_id.context.smid) {
  FUNC_1(&VAR_3->mpt_cmd_pool_lock);

  VAR_4 = VAR_3->mpt_cmd_list[VAR_2->cmd_id.context.smid-1];
  VAR_4->flags = 0;
  VAR_4->sync_cmd_idx = (u_int32_t)VAR_0;
  FUNC_0(&(VAR_3->mrsas_mpt_cmd_list_head), VAR_4, VAR_1);
  FUNC_2(&VAR_3->mpt_cmd_pool_lock);
 }

 VAR_2->ccb_ptr = ((void*)0);
 VAR_2->cmd_id.frame_count = 0;
 FUNC_0(&(VAR_3->mrsas_mfi_cmd_list_head), VAR_2, VAR_1);
 FUNC_2(&VAR_3->mfi_cmd_pool_lock);

 return;
}

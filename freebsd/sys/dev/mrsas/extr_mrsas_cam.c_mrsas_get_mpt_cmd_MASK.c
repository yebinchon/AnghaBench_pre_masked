
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct mrsas_softc {int mpt_cmd_pool_lock; int mrsas_mpt_cmd_list_head; } ;
struct mrsas_mpt_cmd {int * ccb_ptr; scalar_t__ load_balance; scalar_t__ error_code; scalar_t__ flags; scalar_t__ length; int * data; scalar_t__ io_request; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 struct mrsas_mpt_cmd* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mrsas_mpt_cmd*,int ) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int VAR_1 ;

struct mrsas_mpt_cmd *
FUNC_6(struct mrsas_softc *VAR_2)
{
 struct mrsas_mpt_cmd *VAR_3 = ((void*)0);

 FUNC_4(&VAR_2->mpt_cmd_pool_lock);
 if (!FUNC_0(&VAR_2->mrsas_mpt_cmd_list_head)) {
  VAR_3 = FUNC_1(&VAR_2->mrsas_mpt_cmd_list_head);
  FUNC_2(&VAR_2->mrsas_mpt_cmd_list_head, VAR_3, VAR_1);
 } else {
  goto out;
 }

 FUNC_3((uint8_t *)VAR_3->io_request, 0, VAR_0);
 VAR_3->data = ((void*)0);
 VAR_3->length = 0;
 VAR_3->flags = 0;
 VAR_3->error_code = 0;
 VAR_3->load_balance = 0;
 VAR_3->ccb_ptr = ((void*)0);
out:
 FUNC_5(&VAR_2->mpt_cmd_pool_lock);
 return VAR_3;
}

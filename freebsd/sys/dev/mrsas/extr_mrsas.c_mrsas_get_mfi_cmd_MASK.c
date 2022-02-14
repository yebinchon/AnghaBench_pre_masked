
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mrsas_softc {int mfi_cmd_pool_lock; int mrsas_mfi_cmd_list_head; } ;
struct mrsas_mfi_cmd {int dummy; } ;


 int FUNC_0 (int *) ;
 struct mrsas_mfi_cmd* FUNC_1 (int *) ;
 int FUNC_2 (int *,struct mrsas_mfi_cmd*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_0 ;

struct mrsas_mfi_cmd *
FUNC_5(struct mrsas_softc *VAR_1)
{
 struct mrsas_mfi_cmd *VAR_2 = ((void*)0);

 FUNC_3(&VAR_1->mfi_cmd_pool_lock);
 if (!FUNC_0(&VAR_1->mrsas_mfi_cmd_list_head)) {
  VAR_2 = FUNC_1(&VAR_1->mrsas_mfi_cmd_list_head);
  FUNC_2(&VAR_1->mrsas_mfi_cmd_list_head, VAR_2, VAR_0);
 }
 FUNC_4(&VAR_1->mfi_cmd_pool_lock);

 return VAR_2;
}

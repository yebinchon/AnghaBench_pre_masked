
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int os; int * wq_reqtag_pool; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
typedef int hw_wq_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int,int,int ) ;

ocs_hw_rtn_e
FUNC_3(ocs_hw_t *VAR_3)
{
 if (VAR_3->wq_reqtag_pool == ((void*)0)) {
  VAR_3->wq_reqtag_pool = FUNC_2(VAR_3->os, sizeof(hw_wq_callback_t), 65536, VAR_2);
  if (VAR_3->wq_reqtag_pool == ((void*)0)) {
   FUNC_1(VAR_3->os, "ocs_pool_alloc hw_wq_callback_t failed\n");
   return VAR_0;
  }
 }
 FUNC_0(VAR_3);
 return VAR_1;
}

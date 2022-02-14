
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_6__ {scalar_t__ auto_xfer_rdy_size; scalar_t__ auto_xfer_rdy_xri_cnt; } ;
struct TYPE_7__ {int os; TYPE_1__ config; int * auto_xfer_rdy_buf_pool; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 scalar_t__ FUNC_1 (TYPE_2__*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,scalar_t__) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;

ocs_hw_rtn_e
FUNC_6(ocs_hw_t *VAR_2)
{
 ocs_hw_rtn_e VAR_3;
 uint32_t VAR_4;

 FUNC_2(VAR_2->os, "RQ Pair mode\n");






 if (FUNC_5(&VAR_2->sli) &&
     VAR_2->config.auto_xfer_rdy_size > 0) {
  if (VAR_2->auto_xfer_rdy_buf_pool == ((void*)0)) {





   VAR_3 = FUNC_0(VAR_2, VAR_2->config.auto_xfer_rdy_xri_cnt + 1);
   if (VAR_3 != VAR_1) {
    return VAR_3;
   }
  } else {
   FUNC_4(VAR_2->auto_xfer_rdy_buf_pool);
  }


  VAR_4 = FUNC_1(VAR_2, VAR_2->config.auto_xfer_rdy_xri_cnt);
  if (VAR_4 != VAR_2->config.auto_xfer_rdy_xri_cnt) {
   FUNC_3(VAR_2->os, "post_xri failed, only posted %d XRIs\n", VAR_4);
   return VAR_0;
  }
 }

 return 0;
}

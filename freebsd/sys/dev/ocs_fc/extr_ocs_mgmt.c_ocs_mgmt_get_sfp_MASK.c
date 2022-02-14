
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_12__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_13__ {int running; scalar_t__ status; int bytes_read; int page_data; int cb_lock; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_sfp_result_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*,TYPE_2__*,int) ;
 int FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,char*) ;
 int FUNC_4 (TYPE_1__*,char*) ;
 int FUNC_5 (TYPE_1__*,char*,scalar_t__) ;
 TYPE_2__* FUNC_6 (TYPE_1__*,int,int) ;
 int FUNC_7 (void*,int ,int) ;
 int VAR_4 ;
 int FUNC_8 (int *,int ,char*) ;
 scalar_t__ FUNC_9 (int *,int) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int32_t
FUNC_11(ocs_t *VAR_5, uint16_t VAR_6, void *VAR_7, uint32_t VAR_8)
{
 int VAR_9 = 0;
 ocs_mgmt_sfp_result_t *VAR_10 = FUNC_6(VAR_5, sizeof(ocs_mgmt_sfp_result_t), VAR_3 | VAR_2);;

 FUNC_8(&(VAR_10->semaphore), 0, "get_sfp");
 FUNC_3(VAR_5, &(VAR_10->cb_lock), "get_sfp");


 FUNC_1(&VAR_5->hw, VAR_6, VAR_4, VAR_10);


 if (FUNC_9(&(VAR_10->semaphore), 5 * 1000 * 1000) != 0) {

  FUNC_2(&(VAR_10->cb_lock));
  VAR_10->running++;
  if(VAR_10->running == 1) {
   FUNC_4(VAR_5, "ocs_sem_p failed\n");
   FUNC_10(&(VAR_10->cb_lock));
   return (-VAR_1);
  }

  FUNC_10(&(VAR_10->cb_lock));
 }


 if (VAR_10->status != 0) {
  FUNC_5(VAR_5, "read_transceiver_data returned status %d\n",
        VAR_10->status);
  VAR_9 = -VAR_0;
 }

 if (VAR_9 == 0) {
  VAR_9 = (VAR_10->bytes_read > VAR_8 ? VAR_8 : VAR_10->bytes_read);

  FUNC_7(VAR_7, VAR_10->page_data, VAR_9);
 }

 FUNC_0(VAR_5, VAR_10, sizeof(ocs_mgmt_sfp_result_t));
 return VAR_9;
}

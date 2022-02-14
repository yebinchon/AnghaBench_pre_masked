
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_8__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_9__ {scalar_t__ status; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_set_port_protocol_result_t ;
typedef int ocs_hw_port_protocol_e ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 int FUNC_1 (int *,int ,int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,char*) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static int32_t
FUNC_7(ocs_t *VAR_7, char *VAR_8, char *VAR_9)
{
 ocs_mgmt_set_port_protocol_result_t VAR_10;
 int32_t VAR_11 = 0;
 ocs_hw_port_protocol_e VAR_12;
 uint8_t VAR_13;
 uint8_t VAR_14;
 uint8_t VAR_15;

 FUNC_0(VAR_7, &VAR_13, &VAR_14, &VAR_15);

 FUNC_4(&(VAR_10.semaphore), 0, "set_port_protocol");

 if (FUNC_6(VAR_9, "iscsi") == 0) {
  VAR_12 = VAR_3;
 } else if (FUNC_6(VAR_9, "fc") == 0) {
  VAR_12 = VAR_1;
 } else if (FUNC_6(VAR_9, "fcoe") == 0) {
  VAR_12 = VAR_2;
 } else {
  return -1;
 }

 VAR_11 = FUNC_1(&VAR_7->hw, VAR_12, VAR_15,
           VAR_6, &VAR_10);
 if (VAR_11 == VAR_4) {
  if (FUNC_5(&(VAR_10.semaphore), VAR_5) != 0) {

   FUNC_2(VAR_7, "ocs_sem_p failed\n");
   return -VAR_0;
  }
  if (VAR_10.status == 0) {

   VAR_11 = 0;
  } else {
   VAR_11 = -1;
   FUNC_3(VAR_7, "setting active profile status 0x%x\n",
         VAR_10.status);
  }
 }

 return VAR_11;
}

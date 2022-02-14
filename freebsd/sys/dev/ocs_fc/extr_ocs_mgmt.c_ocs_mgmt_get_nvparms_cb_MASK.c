
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_2__ {int semaphore; int preferred_d_id; int hard_alpa; int wwnn; int wwpn; int status; } ;
typedef TYPE_1__ ocs_mgmt_get_nvparms_result_t ;
typedef int int32_t ;


 int FUNC_0 (int ,int *,int) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(int32_t VAR_0, uint8_t *VAR_1, uint8_t *VAR_2, uint8_t VAR_3,
  uint32_t VAR_4, void *VAR_5)
{
 ocs_mgmt_get_nvparms_result_t *VAR_6 = VAR_5;

 VAR_6->status = VAR_0;
 FUNC_0(VAR_6->wwpn, VAR_1, sizeof(VAR_6->wwpn));
 FUNC_0(VAR_6->wwnn, VAR_2, sizeof(VAR_6->wwnn));
 VAR_6->hard_alpa = VAR_3;
 VAR_6->preferred_d_id = VAR_4;

 FUNC_1(&(VAR_6->semaphore));
}

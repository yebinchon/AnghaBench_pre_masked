
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int os; int watchdog_timeout; int sli; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int *,int ) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (TYPE_1__*,int *,int ,int ,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int *,int ,int ) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_6)
{
 ocs_hw_rtn_e VAR_7 = VAR_2;
 uint8_t *VAR_8 = FUNC_3(VAR_6->os, VAR_4, VAR_3);

 if (!VAR_8) {
  FUNC_2(VAR_6->os, "no buffer for command\n");
  return VAR_1;
 }

 FUNC_4(&VAR_6->sli, VAR_8, VAR_4, VAR_6->watchdog_timeout);
 VAR_7 = FUNC_1(VAR_6, VAR_8, VAR_0, VAR_5, ((void*)0));
 if (VAR_7) {
  FUNC_0(VAR_6->os, VAR_8, VAR_4);
  FUNC_2(VAR_6->os, "config watchdog timer failed, rc = %d\n", VAR_7);
 }
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int watchdog_timeout; int os; int watchdog_timer; } ;
typedef TYPE_1__ ocs_hw_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int ,char*,scalar_t__) ;
 int FUNC_3 (int ,int *,int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_4(ocs_hw_t *VAR_2, int32_t VAR_3, uint8_t *VAR_4, void *VAR_5)
{
 uint16_t VAR_6 = VAR_2->watchdog_timeout;

 if (VAR_3 != 0) {
  FUNC_2(VAR_2->os, "config watchdog timer failed, rc = %d\n", VAR_3);
 } else {
  if(VAR_6 != 0) {

   FUNC_3(VAR_2->os, &VAR_2->watchdog_timer, VAR_1, VAR_2, (VAR_6*1000 - 500) );
  }else {
   FUNC_0(&VAR_2->watchdog_timer);
  }
 }

 FUNC_1(VAR_2->os, VAR_4, VAR_0);
 return;
}

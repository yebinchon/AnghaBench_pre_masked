
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int wd_expired; } ;
struct ena_adapter {scalar_t__ wd_active; scalar_t__ keep_alive_timeout; int reset_reason; TYPE_1__ dev_stats; int pdev; int keep_alive_timestamp; } ;
typedef scalar_t__ sbintime_t ;


 int FUNC_0 (int ,struct ena_adapter*) ;
 int FUNC_1 (int ,struct ena_adapter*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ,char*) ;
 scalar_t__ FUNC_5 () ;
 scalar_t__ FUNC_6 (int) ;
 scalar_t__ FUNC_7 (int) ;

__attribute__((used)) static void FUNC_8(struct ena_adapter *VAR_3)
{
 sbintime_t VAR_4, VAR_5;

 if (VAR_3->wd_active == 0)
  return;

 if (VAR_3->keep_alive_timeout == VAR_1)
  return;

 VAR_4 = FUNC_2(&VAR_3->keep_alive_timestamp);
 VAR_5 = FUNC_5() - VAR_4;
 if (FUNC_7(VAR_5 > VAR_3->keep_alive_timeout)) {
  FUNC_4(VAR_3->pdev,
      "Keep alive watchdog timeout.\n");
  FUNC_3(VAR_3->dev_stats.wd_expired, 1);
  if (FUNC_6(!FUNC_0(VAR_0, VAR_3))) {
   VAR_3->reset_reason = VAR_2;
   FUNC_1(VAR_0, VAR_3);
  }
 }
}

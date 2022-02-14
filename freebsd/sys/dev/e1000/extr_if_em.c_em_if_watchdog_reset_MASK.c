
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adapter {int watchdog_events; } ;
typedef int if_ctx_t ;


 struct adapter* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(if_ctx_t VAR_0)
{
 struct adapter *VAR_1 = FUNC_0(VAR_0);





 VAR_1->watchdog_events++;
}

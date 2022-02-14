
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pending {int pc; struct outside_network* outnet; } ;
struct outside_network {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct outside_network*) ;
 int FUNC_1 (struct outside_network*,struct pending*) ;
 int FUNC_2 (struct outside_network*,int ) ;
 int FUNC_3 (int ,char*) ;

void
FUNC_4(void* VAR_1)
{
 struct pending* VAR_2 = (struct pending*)VAR_1;
 struct outside_network* VAR_3 = VAR_2->outnet;
 FUNC_3(VAR_0, "timeout udp with delay");
 FUNC_2(VAR_3, VAR_2->pc);
 FUNC_1(VAR_3, VAR_2);
 FUNC_0(VAR_3);
}

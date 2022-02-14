
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge {scalar_t__ stp_enabled; } ;


 int FUNC_0 () ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct net_bridge*) ;
 int FUNC_2 (struct net_bridge*) ;

void FUNC_3(struct net_bridge *VAR_1, unsigned long VAR_2)
{
 FUNC_0();

 if (VAR_2) {
  if (VAR_1->stp_enabled == VAR_0)
   FUNC_1(VAR_1);
 } else {
  if (VAR_1->stp_enabled != VAR_0)
   FUNC_2(VAR_1);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; int forward_delay_timer; int br; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(struct net_bridge_port *VAR_4)
{
 if (VAR_4->state != VAR_1 &&
     VAR_4->state != VAR_0) {
  if (VAR_4->state == VAR_2 ||
      VAR_4->state == VAR_3)
   FUNC_1(VAR_4->br);

  VAR_4->state = VAR_0;
  FUNC_0(VAR_4);
  FUNC_2(&VAR_4->forward_delay_timer);
 }
}

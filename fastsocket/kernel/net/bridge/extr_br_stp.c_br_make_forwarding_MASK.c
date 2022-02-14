
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {scalar_t__ state; int forward_delay_timer; struct net_bridge* br; } ;
struct net_bridge {scalar_t__ stp_enabled; scalar_t__ forward_delay; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct net_bridge_port*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge*) ;
 int FUNC_3 (int *) ;
 scalar_t__ VAR_6 ;
 int FUNC_4 (int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct net_bridge_port *VAR_7)
{
 struct net_bridge *VAR_8 = VAR_7->br;

 if (VAR_7->state != VAR_2)
  return;

 if (VAR_8->stp_enabled == VAR_1 || VAR_8->forward_delay == 0) {
  VAR_7->state = VAR_3;
  FUNC_2(VAR_8);
  FUNC_3(&VAR_7->forward_delay_timer);
 }
 else if (VAR_8->stp_enabled == VAR_0)
  VAR_7->state = VAR_5;
 else
  VAR_7->state = VAR_4;

 FUNC_1(VAR_7);

 FUNC_0(VAR_7);

 if (VAR_8->forward_delay != 0)
  FUNC_4(&VAR_7->forward_delay_timer, VAR_6 + VAR_8->forward_delay);
}

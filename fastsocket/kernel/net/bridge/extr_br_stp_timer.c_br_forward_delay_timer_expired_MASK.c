
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_bridge_port {scalar_t__ state; int forward_delay_timer; TYPE_2__* dev; int port_no; struct net_bridge* br; } ;
struct net_bridge {int lock; scalar_t__ forward_delay; TYPE_1__* dev; } ;
struct TYPE_4__ {int name; } ;
struct TYPE_3__ {int name; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (struct net_bridge*) ;
 int FUNC_1 (struct net_bridge_port*) ;
 int FUNC_2 (struct net_bridge*) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (char*,int ,int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(unsigned long VAR_4)
{
 struct net_bridge_port *VAR_5 = (struct net_bridge_port *) VAR_4;
 struct net_bridge *VAR_6 = VAR_5->br;

 FUNC_4("%s: %d(%s) forward delay timer\n",
   VAR_6->dev->name, VAR_5->port_no, VAR_5->dev->name);
 FUNC_5(&VAR_6->lock);
 if (VAR_5->state == VAR_2) {
  VAR_5->state = VAR_1;
  FUNC_3(&VAR_5->forward_delay_timer,
     VAR_3 + VAR_6->forward_delay);
 } else if (VAR_5->state == VAR_1) {
  VAR_5->state = VAR_0;
  if (FUNC_0(VAR_6))
   FUNC_2(VAR_6);
 }
 FUNC_1(VAR_5);
 FUNC_6(&VAR_6->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_bridge {int lock; scalar_t__ bridge_hello_time; int tcn_timer; TYPE_1__* dev; } ;
struct TYPE_2__ {int flags; int name; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_bridge*) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(unsigned long VAR_2)
{
 struct net_bridge *VAR_3 = (struct net_bridge *) VAR_2;

 FUNC_2("%s: tcn timer expired\n", VAR_3->dev->name);
 FUNC_3(&VAR_3->lock);
 if (VAR_3->dev->flags & VAR_0) {
  FUNC_0(VAR_3);

  FUNC_1(&VAR_3->tcn_timer,VAR_1 + VAR_3->bridge_hello_time);
 }
 FUNC_4(&VAR_3->lock);
}

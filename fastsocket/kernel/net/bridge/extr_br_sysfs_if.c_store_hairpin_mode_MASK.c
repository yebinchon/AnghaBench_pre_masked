
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;

__attribute__((used)) static ssize_t FUNC_0(struct net_bridge_port *VAR_1, unsigned long VAR_2)
{
 if (VAR_2)
  VAR_1->flags |= VAR_0;
 else
  VAR_1->flags &= ~VAR_0;
 return 0;
}

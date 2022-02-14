
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {scalar_t__ dev; } ;
struct net_bridge_port {int flags; scalar_t__ dev; scalar_t__ state; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static inline int FUNC_0(const struct net_bridge_port *VAR_2,
     const struct sk_buff *VAR_3)
{
 return (((VAR_2->flags & VAR_0) || VAR_3->dev != VAR_2->dev) &&
  VAR_2->state == VAR_1);
}

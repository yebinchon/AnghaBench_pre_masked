
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct net_bridge_port*,unsigned long) ;

__attribute__((used)) static ssize_t FUNC_1(struct net_bridge_port *VAR_2, unsigned long VAR_3)
{
 if (VAR_3 >= (1<<(16-VAR_0)))
  return -VAR_1;
 FUNC_0(VAR_2, VAR_3);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int flags; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int FUNC_0 (char*,char*,int) ;

__attribute__((used)) static ssize_t FUNC_1(struct net_bridge_port *VAR_1, char *VAR_2)
{
 int VAR_3 = (VAR_1->flags & VAR_0) ? 1 : 0;
 return FUNC_0(VAR_2, "%d\n", VAR_3);
}

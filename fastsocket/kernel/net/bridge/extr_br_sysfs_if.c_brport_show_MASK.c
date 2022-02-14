
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_bridge_port {int dummy; } ;
struct kobject {int dummy; } ;
struct brport_attribute {int (* show ) (struct net_bridge_port*,char*) ;} ;
struct attribute {int dummy; } ;
typedef int ssize_t ;


 int FUNC_0 (struct net_bridge_port*,char*) ;
 struct net_bridge_port* FUNC_1 (struct kobject*) ;
 struct brport_attribute* FUNC_2 (struct attribute*) ;

__attribute__((used)) static ssize_t FUNC_3(struct kobject * VAR_0,
      struct attribute * VAR_1, char * VAR_2)
{
 struct brport_attribute * VAR_3 = FUNC_2(VAR_1);
 struct net_bridge_port * VAR_4 = FUNC_1(VAR_0);

 return VAR_3->show(VAR_4, VAR_2);
}

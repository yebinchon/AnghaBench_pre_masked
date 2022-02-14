
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tipc_port {scalar_t__ connected; } ;
struct port {int subscription; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

int FUNC_1(struct tipc_port *VAR_1)
{
 int VAR_2;

 if (VAR_1->connected) {
  VAR_1->connected = 0;

  FUNC_0(
   &((struct port *)VAR_1)->subscription);
  VAR_2 = 0;
 } else {
  VAR_2 = -VAR_0;
 }
 return VAR_2;
}

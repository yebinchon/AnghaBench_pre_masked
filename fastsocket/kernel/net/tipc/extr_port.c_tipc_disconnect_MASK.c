
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct tipc_port {int dummy; } ;
struct port {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct tipc_port*) ;
 struct port* FUNC_1 (int ) ;
 int FUNC_2 (struct port*) ;

int FUNC_3(u32 VAR_1)
{
 struct port *VAR_2;
 int VAR_3;

 VAR_2 = FUNC_1(VAR_1);
 if (!VAR_2)
  return -VAR_0;
 VAR_3 = FUNC_0((struct tipc_port *)VAR_2);
 FUNC_2(VAR_2);
 return VAR_3;
}

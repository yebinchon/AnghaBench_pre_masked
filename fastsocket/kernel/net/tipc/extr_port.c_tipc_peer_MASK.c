
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_portid {int node; int ref; } ;
struct TYPE_2__ {scalar_t__ connected; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct port*) ;
 int FUNC_1 (struct port*) ;
 struct port* FUNC_2 (int ) ;
 int FUNC_3 (struct port*) ;

int FUNC_4(u32 VAR_2, struct tipc_portid *VAR_3)
{
 struct port *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_2(VAR_2);
 if (!VAR_4)
  return -VAR_0;
 if (VAR_4->publ.connected) {
  VAR_3->ref = FUNC_1(VAR_4);
  VAR_3->node = FUNC_0(VAR_4);
  VAR_5 = 0;
 } else
  VAR_5 = -VAR_1;
 FUNC_3(VAR_4);
 return VAR_5;
}

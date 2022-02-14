
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ connected; } ;
struct port {int timer; int wait_list; int port_list; struct port* user_port; int subscription; TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct port*) ;
 int FUNC_4 (int *) ;
 struct sk_buff* FUNC_5 (struct port*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *) ;
 int VAR_2 ;
 struct port* FUNC_10 (int ) ;
 int FUNC_11 (struct port*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (struct port*) ;
 int FUNC_14 (int ,int ,int *) ;

int FUNC_15(u32 VAR_3)
{
 struct port *VAR_4;
 struct sk_buff *VAR_5 = ((void*)0);

 FUNC_14(VAR_3, 0, ((void*)0));
 VAR_4 = FUNC_10(VAR_3);
 if (!VAR_4)
  return -VAR_0;

 FUNC_12(VAR_3);
 FUNC_11(VAR_4);

 FUNC_1(&VAR_4->timer);
 if (VAR_4->publ.connected) {
  VAR_5 = FUNC_5(VAR_4, VAR_1);
  FUNC_9(&VAR_4->subscription);
 }
 if (VAR_4->user_port) {
  FUNC_13(VAR_4->user_port);
  FUNC_3(VAR_4->user_port);
 }

 FUNC_6(&VAR_2);
 FUNC_4(&VAR_4->port_list);
 FUNC_4(&VAR_4->wait_list);
 FUNC_7(&VAR_2);
 FUNC_2(&VAR_4->timer);
 FUNC_3(VAR_4);
 FUNC_0("Deleted port %u\n", VAR_3);
 FUNC_8(VAR_5);
 return 0;
}

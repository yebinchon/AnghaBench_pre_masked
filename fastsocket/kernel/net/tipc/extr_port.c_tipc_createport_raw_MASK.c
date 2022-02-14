
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct tipc_port {struct tipc_msg phdr; scalar_t__ ref; int max_pkt; void* usr_handle; int lock; } ;
struct TYPE_2__ {int nodesub_list; } ;
struct port {int last_in_seqno; int sent; void (* wakeup ) (struct tipc_port*) ;struct tipc_port publ; int port_list; int publications; int timer; int * user_port; scalar_t__ (* dispatcher ) (struct tipc_port*,struct sk_buff*) ;int * congested_link; TYPE_1__ subscription; int wait_list; } ;
typedef int Handler ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ,scalar_t__) ;
 int FUNC_2 (struct port*) ;
 struct port* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (struct tipc_msg*,scalar_t__ const,int ,int ,int ) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int VAR_6 ;
 scalar_t__ FUNC_9 (struct port*,int *) ;
 int FUNC_10 (char*) ;

struct tipc_port *FUNC_11(void *VAR_7,
   u32 (*VAR_8)(struct tipc_port *, struct sk_buff *),
   void (*VAR_9)(struct tipc_port *),
   const u32 VAR_10)
{
 struct port *VAR_11;
 struct tipc_msg *VAR_12;
 u32 VAR_13;

 VAR_11 = FUNC_3(sizeof(*VAR_11), VAR_0);
 if (!VAR_11) {
  FUNC_10("Port creation failed, no memory\n");
  return ((void*)0);
 }
 VAR_13 = FUNC_9(VAR_11, &VAR_11->publ.lock);
 if (!VAR_13) {
  FUNC_10("Port creation failed, reference table exhausted\n");
  FUNC_2(VAR_11);
  return ((void*)0);
 }

 VAR_11->publ.usr_handle = VAR_7;
 VAR_11->publ.max_pkt = VAR_2;
 VAR_11->publ.ref = VAR_13;
 VAR_12 = &VAR_11->publ.phdr;
 FUNC_5(VAR_12, VAR_10, VAR_3, VAR_1, 0);
 FUNC_6(VAR_12, VAR_13);
 VAR_11->last_in_seqno = 41;
 VAR_11->sent = 1;
 FUNC_0(&VAR_11->wait_list);
 FUNC_0(&VAR_11->subscription.nodesub_list);
 VAR_11->congested_link = ((void*)0);
 VAR_11->dispatcher = VAR_8;
 VAR_11->wakeup = VAR_9;
 VAR_11->user_port = ((void*)0);
 FUNC_1(&VAR_11->timer, (Handler)VAR_4, VAR_13);
 FUNC_7(&VAR_6);
 FUNC_0(&VAR_11->publications);
 FUNC_0(&VAR_11->port_list);
 FUNC_4(&VAR_11->port_list, &VAR_5);
 FUNC_8(&VAR_6);
 return &(VAR_11->publ);
}

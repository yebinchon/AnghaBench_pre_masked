
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int unchar ;
typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; } ;
struct link {TYPE_2__* owner; TYPE_1__* b_ptr; struct sk_buff* first_out; int peer_bearer_id; int addr; int out_queue_size; } ;
struct TYPE_4__ {struct link** active_links; int permit_changeover; } ;
struct TYPE_3__ {int net_plane; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct sk_buff* FUNC_1 (int ) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,int ,...) ;
 int FUNC_4 (struct tipc_msg*,char*) ;
 struct tipc_msg* FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int ) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 int FUNC_14 (struct tipc_msg*) ;
 scalar_t__ FUNC_15 (struct tipc_msg*) ;
 int FUNC_16 (struct sk_buff*,struct tipc_msg*,int ) ;
 int FUNC_17 (struct link*,struct sk_buff*) ;
 int FUNC_18 (struct link*,struct tipc_msg*,struct tipc_msg*,int ) ;
 int FUNC_19 (char*) ;

void FUNC_20(struct link *VAR_4)
{
 u32 VAR_5 = VAR_4->out_queue_size;
 struct sk_buff *VAR_6 = VAR_4->first_out;
 struct link *VAR_7 = VAR_4->owner->active_links[0];
 struct tipc_msg VAR_8;
 int VAR_9;

 if (!VAR_7)
  return;

 if (!VAR_4->owner->permit_changeover) {
  FUNC_19("Link changeover error, "
       "peer did not permit changeover\n");
  return;
 }

 FUNC_6(&VAR_8, VAR_0,
   VAR_3, VAR_1, VAR_4->addr);
 FUNC_10(&VAR_8, VAR_4->peer_bearer_id);
 FUNC_11(&VAR_8, VAR_5);
 FUNC_3("Link changeover requires %u tunnel messages\n", VAR_5);

 if (!VAR_4->first_out) {
  struct sk_buff *VAR_10;

  VAR_10 = FUNC_1(VAR_1);
  if (VAR_10) {
   FUNC_16(VAR_10, &VAR_8, VAR_1);
   FUNC_13(&VAR_8, VAR_1);
   FUNC_3("%c->%c:", VAR_4->b_ptr->net_plane,
       VAR_7->b_ptr->net_plane);
   FUNC_4(&VAR_8, "EMPTY>SEND>");
   FUNC_17(VAR_7, VAR_10);
  } else {
   FUNC_19("Link changeover error, "
        "unable to send changeover msg\n");
  }
  return;
 }

 VAR_9 = (VAR_4->owner->active_links[0] !=
    VAR_4->owner->active_links[1]);

 while (VAR_6) {
  struct tipc_msg *VAR_11 = FUNC_2(VAR_6);

  if ((FUNC_15(VAR_11) == VAR_2) && VAR_9) {
   struct tipc_msg *VAR_12 = FUNC_5(VAR_11);
   unchar* VAR_13 = (unchar*)VAR_12;

   VAR_5 = FUNC_8(VAR_11);
   while (VAR_5--) {
    FUNC_12(VAR_12,FUNC_9(VAR_11));
    FUNC_18(VAR_4, &VAR_8, VAR_12,
       FUNC_7(VAR_12));
    VAR_13 += FUNC_0(FUNC_14(VAR_12));
    VAR_12 = (struct tipc_msg *)VAR_13;
   }
  } else {
   FUNC_18(VAR_4, &VAR_8, VAR_11,
      FUNC_7(VAR_11));
  }
  VAR_6 = VAR_6->next;
 }
}

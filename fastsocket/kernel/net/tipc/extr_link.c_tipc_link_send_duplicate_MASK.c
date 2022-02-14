
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {struct sk_buff* next; int data; } ;
struct link {TYPE_3__* b_ptr; TYPE_2__* owner; scalar_t__ next_in_no; struct sk_buff* first_out; int peer_bearer_id; int out_queue_size; int addr; } ;
struct TYPE_6__ {int net_plane; } ;
struct TYPE_4__ {int last_in; } ;
struct TYPE_5__ {TYPE_1__ bclink; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (struct tipc_msg*,char*) ;
 int FUNC_5 (struct tipc_msg*,int ,int ,scalar_t__,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*,scalar_t__) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 scalar_t__ FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 int FUNC_15 (struct sk_buff*,scalar_t__,int ,scalar_t__) ;
 int FUNC_16 (struct link*) ;
 int FUNC_17 (struct link*,struct sk_buff*) ;
 int FUNC_18 (char*) ;

void FUNC_19(struct link *VAR_5, struct link *VAR_6)
{
 struct sk_buff *VAR_7;
 struct tipc_msg VAR_8;

 FUNC_5(&VAR_8, VAR_0,
   VAR_2, VAR_3, VAR_5->addr);
 FUNC_9(&VAR_8, VAR_5->out_queue_size);
 FUNC_8(&VAR_8, VAR_5->peer_bearer_id);
 VAR_7 = VAR_5->first_out;
 while (VAR_7) {
  struct sk_buff *VAR_9;
  struct tipc_msg *VAR_10 = FUNC_1(VAR_7);
  u32 VAR_11 = FUNC_12(VAR_10);

  if (FUNC_13(VAR_10) == VAR_4)
   FUNC_11(VAR_10, VAR_1);
  FUNC_6(VAR_10, FUNC_3(VAR_5->next_in_no - 1));
  FUNC_7(VAR_10, VAR_5->owner->bclink.last_in);
  FUNC_10(&VAR_8, VAR_11 + VAR_3);
  VAR_9 = FUNC_0(VAR_11 + VAR_3);
  if (VAR_9 == ((void*)0)) {
   FUNC_18("Link changeover error, "
        "unable to send duplicate msg\n");
   return;
  }
  FUNC_14(VAR_9, &VAR_8, VAR_3);
  FUNC_15(VAR_9, VAR_3, VAR_7->data,
            VAR_11);
  FUNC_2("%c->%c:", VAR_5->b_ptr->net_plane,
      VAR_6->b_ptr->net_plane);
  FUNC_4(FUNC_1(VAR_9), ">SEND>");
  FUNC_17(VAR_6, VAR_9);
  if (!FUNC_16(VAR_5))
   return;
  VAR_7 = VAR_7->next;
 }
}

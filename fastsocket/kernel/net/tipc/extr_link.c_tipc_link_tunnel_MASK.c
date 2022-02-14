
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct link {TYPE_1__* b_ptr; TYPE_2__* owner; } ;
struct TYPE_4__ {struct link** active_links; } ;
struct TYPE_3__ {int net_plane; } ;


 int VAR_0 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (char*,int ,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct tipc_msg*,int) ;
 int FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct sk_buff*,struct tipc_msg*,int) ;
 int FUNC_7 (struct sk_buff*,int,struct tipc_msg*,int) ;
 int FUNC_8 (struct link*) ;
 int FUNC_9 (struct link*,struct sk_buff*) ;
 int FUNC_10 (char*) ;

void FUNC_11(struct link *VAR_1,
        struct tipc_msg *VAR_2,
        struct tipc_msg *VAR_3,
        u32 VAR_4)
{
 struct link *VAR_5;
 struct sk_buff *VAR_6;
 u32 VAR_7 = FUNC_5(VAR_3);

 VAR_5 = VAR_1->owner->active_links[VAR_4 & 1];
 if (!FUNC_8(VAR_5)) {
  FUNC_10("Link changeover error, "
       "tunnel link no longer available\n");
  return;
 }
 FUNC_4(VAR_2, VAR_7 + VAR_0);
 VAR_6 = FUNC_0(VAR_7 + VAR_0);
 if (!VAR_6) {
  FUNC_10("Link changeover error, "
       "unable to send tunnel msg\n");
  return;
 }
 FUNC_6(VAR_6, VAR_2, VAR_0);
 FUNC_7(VAR_6, VAR_0, VAR_3, VAR_7);
 FUNC_2("%c->%c:", VAR_1->b_ptr->net_plane, VAR_5->b_ptr->net_plane);
 FUNC_3(FUNC_1(VAR_6), ">SEND>");
 FUNC_9(VAR_5, VAR_6);
}

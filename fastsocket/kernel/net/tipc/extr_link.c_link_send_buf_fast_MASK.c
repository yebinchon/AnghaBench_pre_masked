
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_4__ {int bearer_congs; } ;
struct link {struct sk_buff* next_out; TYPE_1__ stats; TYPE_2__* b_ptr; scalar_t__ unacked_window; int media_addr; } ;
struct TYPE_5__ {int cong_links; } ;


 struct tipc_msg* FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct link*,struct sk_buff*,struct tipc_msg*) ;
 int FUNC_4 (struct link*) ;
 scalar_t__ FUNC_5 (struct link*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (TYPE_2__*,struct link*) ;
 int FUNC_11 (TYPE_2__*,struct sk_buff*,int *) ;
 int FUNC_12 (struct link*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_13(struct link *VAR_0, struct sk_buff *VAR_1,
         u32 *VAR_2)
{
 struct tipc_msg *VAR_3 = FUNC_0(VAR_1);
 int VAR_4 = FUNC_7(VAR_3);

 if (FUNC_2(!FUNC_4(VAR_0))) {
  if (FUNC_2(FUNC_9(VAR_3) <= FUNC_5(VAR_0))) {
   if (FUNC_2(FUNC_6(&VAR_0->b_ptr->cong_links))) {
    FUNC_3(VAR_0, VAR_1, VAR_3);
    if (FUNC_2(FUNC_11(VAR_0->b_ptr, VAR_1,
           &VAR_0->media_addr))) {
     VAR_0->unacked_window = 0;
     FUNC_8(VAR_3,"SENT_FAST:");
     return VAR_4;
    }
    FUNC_1("failed sent fast...\n");
    FUNC_10(VAR_0->b_ptr, VAR_0);
    VAR_0->stats.bearer_congs++;
    VAR_0->next_out = VAR_1;
    return VAR_4;
   }
  }
  else
   *VAR_2 = FUNC_5(VAR_0);
 }
 return FUNC_12(VAR_0, VAR_1);
}

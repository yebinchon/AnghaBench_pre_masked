
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {size_t max_queue_sz; int sent_bundles; int bearer_congs; } ;
struct link {size_t out_queue_size; size_t* queue_limit; int b_ptr; struct sk_buff* next_out; TYPE_1__ stats; int addr; struct sk_buff* last_out; scalar_t__ unacked_window; int media_addr; int name; } ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 struct sk_buff* FUNC_0 (size_t) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (struct link*,struct sk_buff*,struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct link*,struct sk_buff*,struct sk_buff*) ;
 int FUNC_6 (struct link*) ;
 size_t FUNC_7 (struct link*) ;
 int FUNC_8 (struct link*,int ,size_t) ;
 size_t FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,char*) ;
 int FUNC_11 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 size_t FUNC_14 (struct tipc_msg*) ;
 size_t FUNC_15 (struct tipc_msg*) ;
 scalar_t__ FUNC_16 (struct tipc_msg*) ;
 int FUNC_17 (struct sk_buff*,struct tipc_msg*,int ) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (int ,struct link*) ;
 int FUNC_20 (int ,struct link*) ;
 int FUNC_21 (int ,struct link*) ;
 int FUNC_22 (int ,struct sk_buff*,int *) ;
 int FUNC_23 (struct link*) ;
 int FUNC_24 (struct link*,struct sk_buff*) ;
 int VAR_7 ;
 scalar_t__ FUNC_25 (int) ;
 int FUNC_26 (char*,int ) ;

int FUNC_27(struct link *VAR_8, struct sk_buff *VAR_9)
{
 struct tipc_msg *VAR_10 = FUNC_2(VAR_9);
 u32 VAR_11 = FUNC_14(VAR_10);
 u32 VAR_12 = FUNC_9(VAR_10);
 u32 VAR_13 = VAR_8->out_queue_size;
 u32 VAR_14 = FUNC_15(VAR_10);
 u32 VAR_15 = VAR_8->queue_limit[VAR_14];
 u32 VAR_16 = FUNC_7(VAR_8);

 FUNC_13(VAR_10, VAR_7);



 if (FUNC_25(VAR_13 >= VAR_15)) {
  if (VAR_14 <= VAR_6) {
   return FUNC_8(VAR_8, FUNC_12(VAR_10),
        VAR_11);
  }
  FUNC_10(VAR_10, "TIPC: Congestion, throwing away\n");
  FUNC_1(VAR_9);
  if (VAR_14 > VAR_1) {
   FUNC_26("Resetting link <%s>, send queue full", VAR_8->name);
   FUNC_23(VAR_8);
  }
  return VAR_12;
 }



 if (VAR_11 > VAR_16)
  return FUNC_24(VAR_8, VAR_9);



 if (VAR_13 > VAR_8->stats.max_queue_sz)
  VAR_8->stats.max_queue_sz = VAR_13;

 if (FUNC_3(!FUNC_19(VAR_8->b_ptr, VAR_8) &&
     !FUNC_6(VAR_8))) {
  FUNC_4(VAR_8, VAR_9, VAR_10);

  if (FUNC_3(FUNC_22(VAR_8->b_ptr, VAR_9, &VAR_8->media_addr))) {
   VAR_8->unacked_window = 0;
  } else {
   FUNC_21(VAR_8->b_ptr, VAR_8);
   VAR_8->stats.bearer_congs++;
   VAR_8->next_out = VAR_9;
  }
  return VAR_12;
 }


 if ((FUNC_16(VAR_10) != VAR_0) &&
     (FUNC_16(VAR_10) != VAR_4)) {



  if (VAR_8->next_out &&
      FUNC_5(VAR_8, VAR_8->last_out, VAR_9)) {
   FUNC_20(VAR_8->b_ptr, VAR_8);
   return VAR_12;
  }



  if (VAR_11 <= VAR_16 * 2 / 3) {
   struct sk_buff *VAR_17 = FUNC_0(VAR_16);
   struct tipc_msg VAR_18;

   if (VAR_17) {
    FUNC_11(&VAR_18, VAR_3, VAR_5,
      VAR_2, VAR_8->addr);
    FUNC_17(VAR_17, &VAR_18,
       VAR_2);
    FUNC_18(VAR_17, VAR_2);
    FUNC_5(VAR_8, VAR_17, VAR_9);
    VAR_9 = VAR_17;
    VAR_10 = FUNC_2(VAR_9);
    VAR_8->stats.sent_bundles++;
   }
  }
 }
 if (!VAR_8->next_out)
  VAR_8->next_out = VAR_9;
 FUNC_4(VAR_8, VAR_9, VAR_10);
 FUNC_20(VAR_8->b_ptr, VAR_8);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int unchar ;
typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int * data; } ;
struct TYPE_2__ {int sent_fragments; int sent_fragmented; } ;
struct link {scalar_t__ addr; TYPE_1__ stats; int long_msg_seq_no; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct link*) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*,int ,int ,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct tipc_msg*) ;
 scalar_t__ FUNC_9 (struct tipc_msg*) ;
 int FUNC_10 (struct tipc_msg*,scalar_t__) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int ) ;
 int FUNC_13 (struct tipc_msg*,int ) ;
 int FUNC_14 (struct tipc_msg*,scalar_t__) ;
 int FUNC_15 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_16 (struct tipc_msg*) ;
 scalar_t__ FUNC_17 (struct tipc_msg*) ;
 int FUNC_18 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 int FUNC_19 (struct sk_buff*,scalar_t__,int *,scalar_t__) ;
 int FUNC_20 (struct link*) ;
 int FUNC_21 (struct link*,struct sk_buff*) ;
 int VAR_6 ;
 int FUNC_22 (char*) ;

int FUNC_23(struct link *VAR_7, struct sk_buff *VAR_8)
{
 struct tipc_msg *VAR_9 = FUNC_2(VAR_8);
 struct tipc_msg VAR_10;
 u32 VAR_11 = FUNC_17(VAR_9);
 u32 VAR_12 = FUNC_5(VAR_9);
 unchar *VAR_13 = VAR_8->data;
 u32 VAR_14 = VAR_11;
 u32 VAR_15 = FUNC_3(VAR_7);
 u32 VAR_16 = VAR_15 - VAR_3;
 u32 VAR_17 = 1;
 u32 VAR_18;

 if (FUNC_16(VAR_9))
  VAR_18 = VAR_7->addr;
 else
  VAR_18 = FUNC_6(VAR_9);

 if (FUNC_9(VAR_9))
  FUNC_13(VAR_9, VAR_6);



 FUNC_7(&VAR_10, VAR_5, VAR_1,
   VAR_3, VAR_18);
 FUNC_11(&VAR_10, FUNC_8(VAR_9));
 FUNC_12(&VAR_10, FUNC_4(VAR_7->long_msg_seq_no++));
 FUNC_10(&VAR_10, VAR_17);
 VAR_7->stats.sent_fragmented++;



 while (VAR_14 > 0) {
  struct sk_buff *VAR_19;

  if (VAR_14 <= VAR_16) {
   VAR_16 = VAR_14;
   FUNC_15(&VAR_10, VAR_4);
  }
  VAR_19 = FUNC_0(VAR_16 + VAR_3);
  if (VAR_19 == ((void*)0)) {
   FUNC_22("Link unable to fragment message\n");
   VAR_12 = -VAR_0;
   goto exit;
  }
  FUNC_14(&VAR_10, VAR_16 + VAR_3);
  FUNC_18(VAR_19, &VAR_10, VAR_3);
  FUNC_19(VAR_19, VAR_3, VAR_13,
            VAR_16);


  VAR_7->stats.sent_fragments++;
  FUNC_21(VAR_7, VAR_19);
  if (!FUNC_20(VAR_7))
   return VAR_12;
  FUNC_10(&VAR_10, ++VAR_17);
  VAR_14 -= VAR_16;
  VAR_13 += VAR_16;
  FUNC_15(&VAR_10, VAR_2);
 }
exit:
 FUNC_1(VAR_8);
 return VAR_12;
}

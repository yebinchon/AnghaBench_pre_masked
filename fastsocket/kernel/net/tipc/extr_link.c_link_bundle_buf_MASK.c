
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int data; } ;
struct TYPE_2__ {int sent_bundled; } ;
struct link {TYPE_1__ stats; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (char*,scalar_t__,scalar_t__,scalar_t__,int ) ;
 scalar_t__ FUNC_4 (struct link*) ;
 int FUNC_5 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_6 (struct tipc_msg*) ;
 int FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*,scalar_t__) ;
 int FUNC_9 (struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 scalar_t__ FUNC_12 (struct tipc_msg*) ;
 int FUNC_13 (struct sk_buff*,scalar_t__,int ,scalar_t__) ;
 int FUNC_14 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct sk_buff*) ;

__attribute__((used)) static int FUNC_16(struct link *VAR_2,
      struct sk_buff *VAR_3,
      struct sk_buff *VAR_4)
{
 struct tipc_msg *VAR_5 = FUNC_2(VAR_3);
 struct tipc_msg *VAR_6 = FUNC_2(VAR_4);
 u32 VAR_7 = FUNC_10(VAR_6);
 u32 VAR_8 = FUNC_10(VAR_5);
 u32 VAR_9 = FUNC_0(VAR_8);
 u32 VAR_10 = VAR_9 - VAR_8;

 if (FUNC_12(VAR_5) != VAR_0)
  return 0;
 if (FUNC_11(VAR_5) != VAR_1)
  return 0;
 if (FUNC_15(VAR_3) < (VAR_10 + VAR_7))
  return 0;
 if (FUNC_4(VAR_2) < (VAR_9 + VAR_7))
  return 0;

 FUNC_14(VAR_3, VAR_10 + VAR_7);
 FUNC_13(VAR_3, VAR_9, VAR_4->data, VAR_7);
 FUNC_9(VAR_5, VAR_9 + VAR_7);
 FUNC_8(VAR_5, FUNC_6(VAR_5) + 1);
 FUNC_3("Packed msg # %u(%u octets) into pos %u in buf(#%u)\n",
     FUNC_6(VAR_5), VAR_7, VAR_9, FUNC_7(VAR_5));
 FUNC_5(VAR_6, "PACKD:");
 FUNC_1(VAR_4);
 VAR_2->stats.sent_bundled++;
 return 1;
}

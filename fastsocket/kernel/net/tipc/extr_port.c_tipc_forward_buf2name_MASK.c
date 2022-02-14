
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_portid {int ref; int node; } ;
struct tipc_name {int instance; int type; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct tipc_msg phdr; scalar_t__ connected; } ;
struct port {int sent; TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (scalar_t__) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct tipc_msg*,char*) ;
 int FUNC_4 (struct tipc_msg*,scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,scalar_t__) ;
 int FUNC_6 (struct tipc_msg*,scalar_t__) ;
 int FUNC_7 (struct tipc_msg*,unsigned int) ;
 int FUNC_8 (struct tipc_msg*,int ) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 int FUNC_10 (struct tipc_msg*,int ) ;
 int FUNC_11 (struct tipc_msg*,int ) ;
 int FUNC_12 (struct tipc_msg*,int ) ;
 int FUNC_13 (struct tipc_msg*,scalar_t__) ;
 int FUNC_14 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_15 (struct port*) ;
 int FUNC_16 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_17 (struct sk_buff*,scalar_t__) ;
 int FUNC_18 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_19 (int ,int ,scalar_t__*) ;
 scalar_t__ VAR_7 ;
 int FUNC_20 (struct sk_buff*) ;
 scalar_t__ FUNC_21 (scalar_t__) ;
 int FUNC_22 (struct sk_buff*,int ) ;
 int FUNC_23 (struct sk_buff*,scalar_t__) ;

int FUNC_24(u32 VAR_8,
     struct tipc_name const *VAR_9,
     u32 VAR_10,
     struct sk_buff *VAR_11,
     unsigned int VAR_12,
     struct tipc_portid const *VAR_13,
     unsigned int VAR_14)
{
 struct port *VAR_15;
 struct tipc_msg *VAR_16;
 u32 VAR_17 = VAR_10;
 u32 VAR_18 = 0;
 int VAR_19;

 VAR_15 = (struct port *)FUNC_21(VAR_8);
 if (!VAR_15 || VAR_15->publ.connected)
  return -VAR_0;

 VAR_16 = &VAR_15->publ.phdr;
 if (VAR_14 <= VAR_4)
  FUNC_7(VAR_16, VAR_14);
 FUNC_14(VAR_16, VAR_6);
 FUNC_11(VAR_16, VAR_13->node);
 FUNC_12(VAR_16, VAR_13->ref);
 FUNC_10(VAR_16, VAR_9->type);
 FUNC_9(VAR_16, VAR_9->instance);
 FUNC_8(VAR_16, FUNC_0(VAR_10));
 FUNC_6(VAR_16, VAR_3);
 FUNC_13(VAR_16, VAR_3 + VAR_12);
 VAR_18 = FUNC_19(VAR_9->type, VAR_9->instance, &VAR_17);
 FUNC_4(VAR_16, VAR_17);
 FUNC_5(VAR_16, VAR_18);
 FUNC_3(VAR_16, "forw2name ==> ");
 if (FUNC_17(VAR_11, VAR_3))
  return -VAR_2;
 FUNC_18(VAR_11, VAR_3);
 FUNC_16(VAR_11, VAR_16, VAR_3);
 FUNC_3(FUNC_1(VAR_11),"PREP:");
 if (FUNC_2(VAR_18 || VAR_17)) {
  VAR_15->sent++;
  if (VAR_17 == VAR_7)
   return FUNC_20(VAR_11);
  VAR_19 = FUNC_23(VAR_11, VAR_17);
  if (FUNC_2(VAR_19 != -VAR_1))
   return VAR_19;
  if (FUNC_15(VAR_15))
   return VAR_12;
  return -VAR_1;
 }
 return FUNC_22(VAR_11, VAR_5);
}

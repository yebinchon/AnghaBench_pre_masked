
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {scalar_t__ connected; } ;
struct port {TYPE_1__ publ; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 struct sk_buff* FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 scalar_t__ FUNC_3 (struct tipc_msg*) ;
 int FUNC_4 (struct tipc_msg*) ;
 scalar_t__ FUNC_5 (struct tipc_msg*) ;
 int FUNC_6 (struct tipc_msg*,char*) ;
 scalar_t__ FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 scalar_t__ FUNC_10 (struct tipc_msg*) ;
 scalar_t__ FUNC_11 (struct tipc_msg*) ;
 int FUNC_12 (struct tipc_msg*,scalar_t__,int ,int,int ) ;
 scalar_t__ FUNC_13 (struct tipc_msg*) ;
 int FUNC_14 (struct tipc_msg*) ;
 int FUNC_15 (struct tipc_msg*) ;
 int FUNC_16 (struct tipc_msg*) ;
 int FUNC_17 (struct tipc_msg*) ;
 int FUNC_18 (struct tipc_msg*,int ) ;
 int FUNC_19 (struct tipc_msg*,scalar_t__) ;
 int FUNC_20 (struct tipc_msg*,int ) ;
 int FUNC_21 (struct tipc_msg*,int ) ;
 int FUNC_22 (struct tipc_msg*,int ) ;
 int FUNC_23 (struct tipc_msg*,int ) ;
 int FUNC_24 (struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_25 (struct tipc_msg*) ;
 int FUNC_26 (struct tipc_msg*) ;
 struct sk_buff* FUNC_27 (struct port*,scalar_t__) ;
 int FUNC_28 (struct sk_buff*,int,int ,scalar_t__) ;
 int FUNC_29 (struct sk_buff*) ;
 int VAR_4 ;
 struct port* FUNC_30 (int ) ;
 int FUNC_31 (struct port*) ;

int FUNC_32(struct sk_buff *VAR_5, u32 VAR_6)
{
 struct tipc_msg *VAR_7 = FUNC_2(VAR_5);
 struct sk_buff *VAR_8;
 struct tipc_msg *VAR_9;
 int VAR_10;
 u32 VAR_11 = FUNC_11(VAR_7);
 u32 VAR_12 = FUNC_5(VAR_7);

 if (VAR_12 > VAR_1)
  VAR_12 = VAR_1;
 if (FUNC_3(VAR_7) && (VAR_11 < VAR_3))
  VAR_11++;
 FUNC_6(VAR_7, "port->rej: ");


 if (FUNC_10(VAR_7) || FUNC_7(VAR_7)) {
  FUNC_1(VAR_5);
  return VAR_12;
 }


 if (FUNC_13(VAR_7))
  VAR_10 = VAR_2;
 else
  VAR_10 = VAR_0;
 VAR_8 = FUNC_0(VAR_12 + VAR_10);
 if (VAR_8 == ((void*)0)) {
  FUNC_1(VAR_5);
  return VAR_12;
 }
 VAR_9 = FUNC_2(VAR_8);
 FUNC_12(VAR_9, VAR_11, FUNC_26(VAR_7), VAR_10, FUNC_16(VAR_7));
 FUNC_19(VAR_9, VAR_6);
 FUNC_18(VAR_9, FUNC_17(VAR_7));
 FUNC_23(VAR_9, FUNC_9(VAR_7));
 if (FUNC_25(VAR_7)) {
  FUNC_22(VAR_9, VAR_4);

 } else {
  FUNC_22(VAR_9, FUNC_8(VAR_7));
  FUNC_21(VAR_9, FUNC_15(VAR_7));
  FUNC_20(VAR_9, FUNC_14(VAR_7));
 }
 FUNC_24(VAR_9, VAR_12 + VAR_10);
 FUNC_28(VAR_8, VAR_10, FUNC_4(VAR_7), VAR_12);


 if (FUNC_3(VAR_7)) {
  struct sk_buff *VAR_13 = ((void*)0);
  struct port *VAR_14 = FUNC_30(FUNC_9(VAR_7));

  if (VAR_14) {
   if (VAR_14->publ.connected)
    VAR_13 = FUNC_27(VAR_14, VAR_6);
   FUNC_31(VAR_14);
  }
  FUNC_29(VAR_13);
 }


 FUNC_1(VAR_5);
 FUNC_29(VAR_8);
 return VAR_12;
}

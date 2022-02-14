
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int unchar ;
typedef size_t u32 ;
struct tipc_node {int dummy; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int * data; } ;
struct cluster {struct tipc_node** nodes; int addr; } ;




 size_t VAR_0 ;



 int FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*) ;
 struct tipc_msg* FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (size_t) ;
 int FUNC_5 (struct tipc_msg*) ;
 size_t FUNC_6 (struct tipc_msg*) ;
 size_t FUNC_7 (struct tipc_msg*) ;
 int FUNC_8 (struct tipc_msg*) ;
 int FUNC_9 (struct tipc_msg*) ;
 size_t FUNC_10 (size_t,size_t,size_t) ;
 struct cluster* FUNC_11 (size_t) ;
 struct cluster* FUNC_12 (size_t) ;
 size_t FUNC_13 (size_t) ;
 size_t FUNC_14 (size_t) ;
 int FUNC_15 (struct tipc_node*,size_t) ;
 struct tipc_node* FUNC_16 (size_t) ;
 int FUNC_17 (struct tipc_node*,size_t) ;
 size_t VAR_1 ;
 size_t FUNC_18 (size_t) ;

void FUNC_19(struct sk_buff *VAR_2)
{
 struct tipc_msg *VAR_3 = FUNC_2(VAR_2);
 struct cluster *VAR_4;
 struct tipc_node *VAR_5;
 unchar *VAR_6;
 u32 VAR_7;
 u32 VAR_8;
 u32 VAR_9 = FUNC_7(VAR_3);
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_4 = FUNC_12(VAR_9);
 if (!VAR_4) {
  VAR_4 = FUNC_11(VAR_9);
  if (!VAR_4) {
   FUNC_1(VAR_2);
   return;
  }
 }

 VAR_6 = VAR_2->data + FUNC_5(VAR_3);
 VAR_7 = FUNC_8(VAR_3) - FUNC_5(VAR_3);
 VAR_8 = FUNC_6(VAR_3);
 VAR_10 = FUNC_18(VAR_9);
 VAR_11 = FUNC_13(VAR_9);

 switch (FUNC_9(VAR_3)) {
 case 131:
  FUNC_0(FUNC_4(VAR_1));
 case 132:
  for (VAR_12 = 1; VAR_12 < VAR_7; VAR_12++) {
   if (VAR_6[VAR_12]) {
    u32 VAR_13 = FUNC_10(VAR_10, VAR_11, VAR_12);
    VAR_5 = VAR_4->nodes[VAR_12];
    if (!VAR_5) {
     VAR_5 = FUNC_16(VAR_13);
    }
    if (VAR_5)
     FUNC_15(VAR_5, VAR_8);
   }
  }
  break;
 case 128:
  FUNC_0(!FUNC_4(VAR_1));
  FUNC_0(FUNC_3(VAR_4->addr));
  for (VAR_12 = 1; VAR_12 < VAR_7; VAR_12++) {
   if (VAR_6[VAR_12]) {
    u32 VAR_14 = VAR_12 + VAR_0;
    u32 VAR_15 = FUNC_10(VAR_10, VAR_11, VAR_14);
    VAR_5 = VAR_4->nodes[VAR_14];
    if (!VAR_5) {
     VAR_5 = FUNC_16(VAR_15);
    }
    if (VAR_5)
     FUNC_15(VAR_5, VAR_8);
   }
  }
  break;
 case 130:
  if (!FUNC_4(VAR_1)) {
   FUNC_0(!FUNC_3(VAR_4->addr)
          || FUNC_4(VAR_9));
  } else {
   FUNC_0(FUNC_3(VAR_4->addr)
          && !FUNC_4(VAR_9));
  }
  VAR_5 = VAR_4->nodes[FUNC_14(VAR_9)];
  if (!VAR_5)
   VAR_5 = FUNC_16(VAR_9);
  if (VAR_5)
   FUNC_15(VAR_5, VAR_8);
  break;
 case 129:
  if (!FUNC_4(VAR_1)) {
   FUNC_0(!FUNC_3(VAR_4->addr)
          || FUNC_4(VAR_9));
  } else {
   FUNC_0(FUNC_3(VAR_4->addr)
          && !FUNC_4(VAR_9));
  }
  VAR_5 = VAR_4->nodes[FUNC_14(VAR_9)];
  if (VAR_5)
   FUNC_17(VAR_5, VAR_8);
  break;
 default:
  FUNC_0(!"Illegal routing manager message received\n");
 }
 FUNC_1(VAR_2);
}

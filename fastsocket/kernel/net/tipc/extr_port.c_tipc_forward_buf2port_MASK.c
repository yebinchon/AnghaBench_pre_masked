
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_portid {int node; int ref; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {struct tipc_msg phdr; scalar_t__ connected; } ;
struct port {int sent; TYPE_1__ publ; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct tipc_msg*,char*) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,scalar_t__) ;
 int FUNC_5 (struct tipc_msg*,unsigned int) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int FUNC_8 (struct tipc_msg*,scalar_t__) ;
 int FUNC_9 (struct tipc_msg*,int ) ;
 scalar_t__ FUNC_10 (struct port*) ;
 int FUNC_11 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int VAR_6 ;
 int FUNC_14 (struct sk_buff*) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (struct sk_buff*,int ) ;

int FUNC_17(u32 VAR_7,
     struct tipc_portid const *VAR_8,
     struct sk_buff *VAR_9,
     unsigned int VAR_10,
     struct tipc_portid const *VAR_11,
     unsigned int VAR_12)
{
 struct port *VAR_13;
 struct tipc_msg *VAR_14;
 int VAR_15;

 VAR_13 = (struct port *)FUNC_15(VAR_7);
 if (!VAR_13 || VAR_13->publ.connected)
  return -VAR_1;

 VAR_14 = &VAR_13->publ.phdr;
 FUNC_9(VAR_14, VAR_5);
 FUNC_6(VAR_14, VAR_11->node);
 FUNC_7(VAR_14, VAR_11->ref);
 FUNC_2(VAR_14, VAR_8->node);
 FUNC_3(VAR_14, VAR_8->ref);
 FUNC_4(VAR_14, VAR_0);
 if (VAR_12 <= VAR_4)
  FUNC_5(VAR_14, VAR_12);
 FUNC_8(VAR_14, VAR_0 + VAR_10);
 if (FUNC_12(VAR_9, VAR_0))
  return -VAR_3;

 FUNC_13(VAR_9, VAR_0);
 FUNC_11(VAR_9, VAR_14, VAR_0);
 FUNC_1(VAR_14, "buf2port: ");
 VAR_13->sent++;
 if (VAR_8->node == VAR_6)
  return FUNC_14(VAR_9);
 VAR_15 = FUNC_16(VAR_9, VAR_8->node);
 if (FUNC_0(VAR_15 != -VAR_2))
  return VAR_15;
 if (FUNC_10(VAR_13))
  return VAR_10;
 return -VAR_2;
}

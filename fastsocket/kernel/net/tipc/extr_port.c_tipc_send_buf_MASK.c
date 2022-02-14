
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int congested; struct tipc_msg phdr; int connected; } ;
struct port {TYPE_1__ publ; int sent; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct tipc_msg*) ;
 scalar_t__ FUNC_2 (struct tipc_msg*) ;
 int FUNC_3 (struct tipc_msg*,scalar_t__) ;
 int FUNC_4 (struct port*) ;
 scalar_t__ FUNC_5 (struct port*) ;
 int FUNC_6 (struct sk_buff*,struct tipc_msg*,scalar_t__) ;
 scalar_t__ FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int FUNC_9 (struct port*) ;
 struct port* FUNC_10 (scalar_t__) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*,scalar_t__) ;

int FUNC_13(u32 VAR_4, struct sk_buff *VAR_5, unsigned int VAR_6)
{
 struct port *VAR_7;
 struct tipc_msg *VAR_8;
 u32 VAR_9;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12;

 VAR_7 = FUNC_10(VAR_4);
 if (!VAR_7 || !VAR_7->publ.connected)
  return -VAR_0;

 VAR_8 = &VAR_7->publ.phdr;
 VAR_10 = FUNC_2(VAR_8);
 VAR_11 = VAR_10 + VAR_6;
 FUNC_3(VAR_8, VAR_11);
 if (FUNC_7(VAR_5, VAR_10))
  return -VAR_2;

 FUNC_8(VAR_5, VAR_10);
 FUNC_6(VAR_5, VAR_8, VAR_10);
 VAR_9 = FUNC_1(VAR_8);
 VAR_7->publ.congested = 1;
 if (!FUNC_9(VAR_7)) {
  if (FUNC_0(VAR_9 != VAR_3))
   VAR_12 = FUNC_12(VAR_5, VAR_9);
  else {
   FUNC_11(VAR_5);
   VAR_12 = VAR_11;
  }
  if (FUNC_0(VAR_12 != -VAR_1)) {
   FUNC_4(VAR_7);
   VAR_7->sent++;
   VAR_7->publ.congested = 0;
   return VAR_12;
  }
 }
 if (FUNC_5(VAR_7)) {
  VAR_7->publ.congested = 0;
  return VAR_6;
 }
 return -VAR_1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_name_seq {int upper; int lower; int type; } ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct port_list {scalar_t__ count; int * member_1; int member_0; } ;
struct TYPE_2__ {struct tipc_msg phdr; } ;
struct port {int user_port; TYPE_1__ publ; } ;
struct iovec {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct tipc_msg*,struct iovec const*,int ,int ,int,struct sk_buff**) ;
 int FUNC_2 (struct tipc_msg*,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int ) ;
 int FUNC_6 (struct tipc_msg*,int ) ;
 struct sk_buff* FUNC_7 (struct sk_buff*,int ) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int ,int ,int ,int ,struct port_list*) ;
 struct port* FUNC_10 (int ) ;
 int FUNC_11 (struct port_list*) ;
 int FUNC_12 (struct sk_buff*,struct port_list*) ;
 scalar_t__ FUNC_13 (int) ;

int FUNC_14(u32 VAR_7, struct tipc_name_seq const *VAR_8, u32 VAR_9,
     u32 VAR_10, struct iovec const *VAR_11)
{
 struct tipc_msg *VAR_12;
 struct sk_buff *VAR_13;
 struct sk_buff *VAR_14 = ((void*)0);
 struct port_list VAR_15 = {0, ((void*)0), };
 struct port *VAR_16 = FUNC_10(VAR_7);
 int VAR_17;
 int VAR_18;

 if (FUNC_13(!VAR_16))
  return -VAR_0;



 VAR_12 = &VAR_16->publ.phdr;
 FUNC_6(VAR_12, VAR_5);
 FUNC_4(VAR_12, VAR_8->type);
 FUNC_3(VAR_12, VAR_8->lower);
 FUNC_5(VAR_12, VAR_8->upper);
 FUNC_2(VAR_12, VAR_4);
 VAR_18 = FUNC_1(VAR_12, VAR_11, VAR_10, VAR_3,
   !VAR_16->user_port, &VAR_13);
 if (FUNC_13(!VAR_13))
  return VAR_18;



 VAR_17 = FUNC_9(VAR_8->type, VAR_8->lower, VAR_8->upper,
      VAR_6, &VAR_15);



 if (VAR_17) {
  if (VAR_15.count != 0) {
   VAR_14 = FUNC_7(VAR_13, VAR_2);
   if (VAR_14 == ((void*)0)) {
    FUNC_11(&VAR_15);
    FUNC_0(VAR_13);
    return -VAR_1;
   }
  }
  VAR_18 = FUNC_8(VAR_13);
  if ((VAR_18 < 0) && (VAR_15.count != 0)) {
   FUNC_0(VAR_14);
  }
 } else {
  VAR_14 = VAR_13;
 }

 if (VAR_18 >= 0) {
  if (VAR_14)
   FUNC_12(VAR_14, &VAR_15);
 } else {
  FUNC_11(&VAR_15);
 }
 return VAR_18;
}

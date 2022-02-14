
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct tipc_msg {int dummy; } ;
struct sk_buff {int dummy; } ;
struct TYPE_2__ {int addr; } ;
struct bearer {TYPE_1__ publ; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sk_buff* FUNC_0 (int ) ;
 struct tipc_msg* FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct tipc_msg*,int ,int ,int ,int ) ;
 int FUNC_3 (struct tipc_msg*,int ) ;
 int FUNC_4 (struct tipc_msg*,int ) ;
 int FUNC_5 (struct tipc_msg*,int *) ;
 int FUNC_6 (struct tipc_msg*,int) ;
 int FUNC_7 (struct tipc_msg*,int ) ;
 int VAR_2 ;

__attribute__((used)) static struct sk_buff *FUNC_8(u32 VAR_3,
       u32 VAR_4,
       u32 VAR_5,
       struct bearer *VAR_6)
{
 struct sk_buff *VAR_7 = FUNC_0(VAR_0);
 struct tipc_msg *VAR_8;

 if (VAR_7) {
  VAR_8 = FUNC_1(VAR_7);
  FUNC_2(VAR_8, VAR_1, VAR_3, VAR_0, VAR_5);
  FUNC_6(VAR_8, 1);
  FUNC_7(VAR_8, VAR_4);
  FUNC_4(VAR_8, VAR_5);
  FUNC_3(VAR_8, VAR_2);
  FUNC_5(VAR_8, &VAR_6->publ.addr);
 }
 return VAR_7;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct sk_buff {int dummy; } ;
struct l2cap_conn {int hcon; } ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 struct sk_buff* FUNC_2 (struct l2cap_conn*,int ,int ,int ,void*) ;

__attribute__((used)) static inline int FUNC_3(struct l2cap_conn *VAR_1, u8 VAR_2, u8 VAR_3, u16 VAR_4, void *VAR_5)
{
 struct sk_buff *VAR_6 = FUNC_2(VAR_1, VAR_3, VAR_2, VAR_4, VAR_5);

 FUNC_0("code 0x%2.2x", VAR_3);

 if (!VAR_6)
  return -VAR_0;

 return FUNC_1(VAR_1->hcon, VAR_6, 0);
}

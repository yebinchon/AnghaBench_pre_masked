
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {int dummy; } ;
struct sk_buff {int len; } ;
struct l2cap_pinfo {TYPE_1__* conn; } ;
struct TYPE_2__ {int hcon; } ;


 int FUNC_0 (char*,struct sock*,struct sk_buff*,int ) ;
 int FUNC_1 (int ,struct sk_buff*,int ) ;
 int FUNC_2 (struct sk_buff*) ;
 struct l2cap_pinfo* FUNC_3 (struct sock*) ;

__attribute__((used)) static inline int FUNC_4(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 struct l2cap_pinfo *VAR_2 = FUNC_3(VAR_0);
 int VAR_3;

 FUNC_0("sk %p, skb %p len %d", VAR_0, VAR_1, VAR_1->len);

 VAR_3 = FUNC_1(VAR_2->conn->hcon, VAR_1, 0);
 if (VAR_3 < 0)
  FUNC_2(VAR_1);

 return VAR_3;
}

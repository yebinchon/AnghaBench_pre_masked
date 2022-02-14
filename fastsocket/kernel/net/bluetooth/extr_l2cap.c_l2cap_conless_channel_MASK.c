
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sock {scalar_t__ sk_state; } ;
struct sk_buff {scalar_t__ len; } ;
struct l2cap_conn {int src; } ;
typedef int __le16 ;
struct TYPE_2__ {scalar_t__ imtu; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,struct sock*,scalar_t__) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sock* FUNC_3 (int ,int ,int ) ;
 TYPE_1__* FUNC_4 (struct sock*) ;
 int FUNC_5 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline int FUNC_6(struct l2cap_conn *VAR_2, __le16 VAR_3, struct sk_buff *VAR_4)
{
 struct sock *VAR_5;

 VAR_5 = FUNC_3(0, VAR_3, VAR_2->src);
 if (!VAR_5)
  goto drop;

 FUNC_0("sk %p, len %d", VAR_5, VAR_4->len);

 if (VAR_5->sk_state != VAR_0 && VAR_5->sk_state != VAR_1)
  goto drop;

 if (FUNC_4(VAR_5)->imtu < VAR_4->len)
  goto drop;

 if (!FUNC_5(VAR_5, VAR_4))
  goto done;

drop:
 FUNC_2(VAR_4);

done:
 if (VAR_5)
  FUNC_1(VAR_5);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {scalar_t__ sk_state; } ;
struct sk_buff {int len; } ;
struct sco_conn {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct sock*,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 struct sock* FUNC_2 (struct sco_conn*) ;
 int FUNC_3 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static inline void FUNC_4(struct sco_conn *VAR_1, struct sk_buff *VAR_2)
{
 struct sock *VAR_3 = FUNC_2(VAR_1);

 if (!VAR_3)
  goto drop;

 FUNC_0("sk %p len %d", VAR_3, VAR_2->len);

 if (VAR_3->sk_state != VAR_0)
  goto drop;

 if (!FUNC_3(VAR_3, VAR_2))
  return;

drop:
 FUNC_1(VAR_2);
 return;
}

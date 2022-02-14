
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_state; int (* sk_data_ready ) (struct sock*,int ) ;} ;
struct sk_buff {int len; } ;


 int VAR_0 ;
 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*) ;
 int FUNC_3 (struct sock*) ;
 int FUNC_4 (struct sock*,int ) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (struct sock*,struct sk_buff*,int ,int ) ;

int FUNC_7(struct sock *VAR_1, struct sock *VAR_2,
        struct sk_buff *VAR_3)
{
 int VAR_4 = 0;
 int VAR_5 = VAR_2->sk_state;

 if (!FUNC_2(VAR_2)) {
  VAR_4 = FUNC_6(VAR_2, VAR_3, FUNC_5(VAR_3),
         VAR_3->len);

  if (VAR_5 == VAR_0 && VAR_2->sk_state != VAR_5)
   VAR_1->sk_data_ready(VAR_1, 0);
 } else {




  FUNC_0(VAR_2, VAR_3);
 }

 FUNC_1(VAR_2);
 FUNC_3(VAR_2);
 return VAR_4;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int* data; } ;
struct nr_sock {int state; } ;


 int VAR_0 ;



 int FUNC_0 (struct sock*) ;
 struct nr_sock* FUNC_1 (struct sock*) ;
 int FUNC_2 (struct sock*,struct sk_buff*,int) ;
 int FUNC_3 (struct sock*,struct sk_buff*,int) ;
 int FUNC_4 (struct sock*,struct sk_buff*,int) ;

int FUNC_5(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 struct nr_sock *VAR_3 = FUNC_1(VAR_1);
 int VAR_4 = 0, VAR_5;

 if (VAR_3->state == VAR_0)
  return 0;

 VAR_5 = VAR_2->data[19];

 switch (VAR_3->state) {
 case 130:
  VAR_4 = FUNC_2(VAR_1, VAR_2, VAR_5);
  break;
 case 129:
  VAR_4 = FUNC_3(VAR_1, VAR_2, VAR_5);
  break;
 case 128:
  VAR_4 = FUNC_4(VAR_1, VAR_2, VAR_5);
  break;
 }

 FUNC_0(VAR_1);

 return VAR_4;
}

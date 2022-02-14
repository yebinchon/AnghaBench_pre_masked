
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 struct sk_filter* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,struct sk_filter*) ;

int FUNC_5(struct sock *VAR_1)
{
 int VAR_2 = -VAR_0;
 struct sk_filter *VAR_3;

 FUNC_2();
 VAR_3 = FUNC_1(VAR_1->sk_filter);
 if (VAR_3) {
  FUNC_0(VAR_1->sk_filter, ((void*)0));
  FUNC_4(VAR_1, VAR_3);
  VAR_2 = 0;
 }
 FUNC_3();
 return VAR_2;
}

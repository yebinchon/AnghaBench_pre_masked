
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int len; int insns; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*,unsigned int) ;
 struct sk_filter* FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int FUNC_4 (struct sock*,struct sk_buff*) ;
 unsigned int FUNC_5 (struct sk_buff*,int ,int ) ;

int FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2)
{
 int VAR_3;
 struct sk_filter *VAR_4;

 VAR_3 = FUNC_4(VAR_1, VAR_2);
 if (VAR_3)
  return VAR_3;

 FUNC_2();
 VAR_4 = FUNC_1(VAR_1->sk_filter);
 if (VAR_4) {
  unsigned int VAR_5 = FUNC_5(VAR_2, VAR_4->insns,
    VAR_4->len);
  VAR_3 = VAR_5 ? FUNC_0(VAR_2, VAR_5) : -VAR_0;
 }
 FUNC_3();

 return VAR_3;
}

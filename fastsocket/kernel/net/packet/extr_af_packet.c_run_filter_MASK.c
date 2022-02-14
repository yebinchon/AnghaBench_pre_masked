
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int sk_filter; } ;
struct sk_filter {int len; int insns; } ;
struct sk_buff {int dummy; } ;


 struct sk_filter* FUNC_0 (int ) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 unsigned int FUNC_3 (struct sk_buff*,int ,int ) ;

__attribute__((used)) static inline unsigned int FUNC_4(struct sk_buff *VAR_0, struct sock *VAR_1,
          unsigned int VAR_2)
{
 struct sk_filter *VAR_3;

 FUNC_1();
 VAR_3 = FUNC_0(VAR_1->sk_filter);
 if (VAR_3 != ((void*)0))
  VAR_2 = FUNC_3(VAR_0, VAR_3->insns, VAR_3->len);
 FUNC_2();

 return VAR_2;
}

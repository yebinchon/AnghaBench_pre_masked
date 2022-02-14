
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff_head {int dummy; } ;
struct sk_buff {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct sk_buff*) ;
 int FUNC_2 (struct sk_buff*,struct sk_buff_head*) ;
 int FUNC_3 (struct sk_buff_head*,struct sk_buff*) ;
 struct sk_buff* FUNC_4 (struct sk_buff_head*,struct sk_buff*) ;
 int FUNC_5 (struct sock*) ;

__attribute__((used)) static struct sk_buff *FUNC_6(struct sock *VAR_1, struct sk_buff *VAR_2,
     struct sk_buff_head *VAR_3)
{
 struct sk_buff *VAR_4 = ((void*)0);

 if (!FUNC_3(VAR_3, VAR_2))
  VAR_4 = FUNC_4(VAR_3, VAR_2);

 FUNC_2(VAR_2, VAR_3);
 FUNC_1(VAR_2);
 FUNC_0(FUNC_5(VAR_1), VAR_0);

 return VAR_4;
}

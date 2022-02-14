
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 int FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sock*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  return VAR_2;

 return FUNC_1(VAR_0, VAR_1);
}

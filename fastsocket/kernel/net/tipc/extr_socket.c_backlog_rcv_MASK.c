
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;


 scalar_t__ FUNC_0 (struct sock*,struct sk_buff*) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_0, struct sk_buff *VAR_1)
{
 u32 VAR_2;

 VAR_2 = FUNC_0(VAR_0, VAR_1);
 if (VAR_2)
  FUNC_1(VAR_1, VAR_2);
 return 0;
}

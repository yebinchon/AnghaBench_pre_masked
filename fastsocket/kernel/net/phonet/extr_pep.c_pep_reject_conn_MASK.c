
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
typedef int data ;


 int VAR_0 ;

 scalar_t__ VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct sock*,struct sk_buff*,scalar_t__,scalar_t__ const*,int,int ) ;

__attribute__((used)) static int FUNC_2(struct sock *VAR_2, struct sk_buff *VAR_3, u8 VAR_4)
{
 static const u8 VAR_5[4] = { 128, 128, 128, 0 };
 FUNC_0(VAR_4 == VAR_1);
 return FUNC_1(VAR_2, VAR_3, VAR_4, VAR_5, sizeof(VAR_5), VAR_0);
}

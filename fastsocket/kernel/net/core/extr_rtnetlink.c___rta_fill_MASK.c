
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct rtattr {int rta_type; int rta_len; } ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rtattr*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (scalar_t__,void const*,int) ;
 int FUNC_4 (scalar_t__,int ,scalar_t__) ;
 scalar_t__ FUNC_5 (struct sk_buff*,scalar_t__) ;

void FUNC_6(struct sk_buff *VAR_0, int VAR_1, int VAR_2, const void *VAR_3)
{
 struct rtattr *VAR_4;
 int VAR_5 = FUNC_2(VAR_2);

 VAR_4 = (struct rtattr*)FUNC_5(VAR_0, FUNC_0(VAR_5));
 VAR_4->rta_type = VAR_1;
 VAR_4->rta_len = VAR_5;
 FUNC_3(FUNC_1(VAR_4), VAR_3, VAR_2);
 FUNC_4(FUNC_1(VAR_4) + VAR_2, 0, FUNC_0(VAR_5) - VAR_5);
}

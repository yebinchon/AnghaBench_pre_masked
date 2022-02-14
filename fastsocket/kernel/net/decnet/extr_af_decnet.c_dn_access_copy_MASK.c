
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned char* data; } ;
struct accessdata_dn {scalar_t__ acc_userl; scalar_t__ acc_passl; scalar_t__ acc_accl; int acc_acc; int acc_pass; int acc_user; } ;


 int FUNC_0 (int *,unsigned char*,scalar_t__) ;
 int FUNC_1 (struct sk_buff*,scalar_t__) ;

__attribute__((used)) static void FUNC_2(struct sk_buff *VAR_0, struct accessdata_dn *VAR_1)
{
 unsigned char *VAR_2 = VAR_0->data;

 VAR_1->acc_userl = *VAR_2++;
 FUNC_0(&VAR_1->acc_user, VAR_2, VAR_1->acc_userl);
 VAR_2 += VAR_1->acc_userl;

 VAR_1->acc_passl = *VAR_2++;
 FUNC_0(&VAR_1->acc_pass, VAR_2, VAR_1->acc_passl);
 VAR_2 += VAR_1->acc_passl;

 VAR_1->acc_accl = *VAR_2++;
 FUNC_0(&VAR_1->acc_acc, VAR_2, VAR_1->acc_accl);

 FUNC_1(VAR_0, VAR_1->acc_accl + VAR_1->acc_passl + VAR_1->acc_userl + 3);

}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int dummy; } ;


 int FUNC_0 (struct netlbl_audit*) ;
 int FUNC_1 (struct sk_buff*,struct netlbl_audit*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_0, struct genl_info *VAR_1)
{
 struct netlbl_audit VAR_2;

 FUNC_1(VAR_0, &VAR_2);

 return FUNC_0(&VAR_2);
}

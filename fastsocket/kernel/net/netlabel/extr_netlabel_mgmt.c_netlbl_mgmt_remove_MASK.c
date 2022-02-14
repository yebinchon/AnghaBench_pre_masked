
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (char*,struct netlbl_audit*) ;
 int FUNC_1 (struct sk_buff*,struct netlbl_audit*) ;
 char* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 char *VAR_4;
 struct netlbl_audit VAR_5;

 if (!VAR_3->attrs[VAR_1])
  return -VAR_0;

 FUNC_1(VAR_2, &VAR_5);

 VAR_4 = FUNC_2(VAR_3->attrs[VAR_1]);
 return FUNC_0(VAR_4, &VAR_5);
}

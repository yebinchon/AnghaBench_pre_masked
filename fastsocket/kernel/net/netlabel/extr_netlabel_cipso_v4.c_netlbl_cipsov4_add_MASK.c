
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int * attrs; } ;





 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (struct genl_info*,struct netlbl_audit*) ;
 int FUNC_2 (struct genl_info*,struct netlbl_audit*) ;
 int FUNC_3 (struct genl_info*,struct netlbl_audit*) ;
 int FUNC_4 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_5 (int ) ;

__attribute__((used)) static int FUNC_6(struct sk_buff *VAR_4, struct genl_info *VAR_5)

{
 int VAR_6 = -VAR_0;
 const char *VAR_7 = "(unknown)";
 struct netlbl_audit VAR_8;

 if (!VAR_5->attrs[VAR_1] ||
     !VAR_5->attrs[VAR_2])
  return -VAR_0;

 FUNC_4(VAR_4, &VAR_8);
 switch (FUNC_5(VAR_5->attrs[VAR_2])) {
 case 128:
  VAR_7 = "trans";
  VAR_6 = FUNC_3(VAR_5, &VAR_8);
  break;
 case 129:
  VAR_7 = "pass";
  VAR_6 = FUNC_2(VAR_5, &VAR_8);
  break;
 case 130:
  VAR_7 = "local";
  VAR_6 = FUNC_1(VAR_5, &VAR_8);
  break;
 }
 if (VAR_6 == 0)
  FUNC_0(&VAR_3);

 return VAR_6;
}

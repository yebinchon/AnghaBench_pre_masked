
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {scalar_t__* attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int FUNC_0 (struct sk_buff*,struct netlbl_audit*) ;
 int FUNC_1 (int,struct netlbl_audit*) ;
 int FUNC_2 (scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct sk_buff *VAR_2, struct genl_info *VAR_3)
{
 u8 VAR_4;
 struct netlbl_audit VAR_5;

 if (VAR_3->attrs[VAR_1]) {
  VAR_4 = FUNC_2(VAR_3->attrs[VAR_1]);
  if (VAR_4 == 1 || VAR_4 == 0) {
   FUNC_0(VAR_2, &VAR_5);
   FUNC_1(VAR_4, &VAR_5);
   return 0;
  }
 }

 return -VAR_0;
}

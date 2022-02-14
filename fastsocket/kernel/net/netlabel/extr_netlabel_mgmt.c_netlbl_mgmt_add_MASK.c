
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct netlbl_audit {int dummy; } ;
struct genl_info {int ** attrs; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (struct genl_info*,struct netlbl_audit*) ;
 int FUNC_1 (struct sk_buff*,struct netlbl_audit*) ;

__attribute__((used)) static int FUNC_2(struct sk_buff *VAR_7, struct genl_info *VAR_8)
{
 struct netlbl_audit VAR_9;

 if ((!VAR_8->attrs[VAR_1]) ||
     (!VAR_8->attrs[VAR_6]) ||
     (VAR_8->attrs[VAR_2] &&
      VAR_8->attrs[VAR_4]) ||
     (VAR_8->attrs[VAR_3] &&
      VAR_8->attrs[VAR_5]) ||
     ((VAR_8->attrs[VAR_2] != ((void*)0)) ^
      (VAR_8->attrs[VAR_3] != ((void*)0))) ||
     ((VAR_8->attrs[VAR_4] != ((void*)0)) ^
      (VAR_8->attrs[VAR_5] != ((void*)0))))
  return -VAR_0;

 FUNC_1(VAR_7, &VAR_9);

 return FUNC_0(VAR_8, &VAR_9);
}

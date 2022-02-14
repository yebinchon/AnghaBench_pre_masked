
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_str3list {struct config_str3list* str3; struct config_str3list* str2; struct config_str3list* str; struct config_str3list* next; } ;
struct config_file {struct config_str3list* acl_tag_actions; } ;
struct acl_list {int dummy; } ;


 int FUNC_0 (struct acl_list*,struct config_file*,struct config_str3list*,struct config_str3list*,struct config_str3list*) ;
 int FUNC_1 (struct config_str3list*) ;
 int FUNC_2 (struct config_str3list*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct acl_list* VAR_0, struct config_file* VAR_1)
{
 struct config_str3list* VAR_2, *VAR_3;
 VAR_2 = VAR_1->acl_tag_actions;
 VAR_1->acl_tag_actions = ((void*)0);
 while(VAR_2) {
  FUNC_3(VAR_2->str && VAR_2->str2 && VAR_2->str3);
  if(!FUNC_0(VAR_0, VAR_1, VAR_2->str, VAR_2->str2,
   VAR_2->str3)) {
   FUNC_1(VAR_2);
   return 0;
  }

  VAR_3 = VAR_2->next;
  FUNC_2(VAR_2->str);
  FUNC_2(VAR_2->str2);
  FUNC_2(VAR_2->str3);
  FUNC_2(VAR_2);
  VAR_2 = VAR_3;
 }
 return 1;
}

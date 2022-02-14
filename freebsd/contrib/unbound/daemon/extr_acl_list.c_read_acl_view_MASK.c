
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int dummy; } ;
struct config_str2list {struct config_str2list* str2; struct config_str2list* str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* acl_view; } ;
struct acl_list {int dummy; } ;


 int FUNC_0 (struct acl_list*,struct config_str2list*,struct config_str2list*,struct views*) ;
 int FUNC_1 (struct config_str2list*) ;
 int FUNC_2 (int) ;

__attribute__((used)) static int
FUNC_3(struct acl_list* VAR_0, struct config_file* VAR_1, struct views* VAR_2)
{
 struct config_str2list* VAR_3, *VAR_4 = VAR_1->acl_view;
 VAR_1->acl_view = ((void*)0);
 while(VAR_4) {
  FUNC_2(VAR_4->str && VAR_4->str2);
  if(!FUNC_0(VAR_0, VAR_4->str, VAR_4->str2, VAR_2)) {
   return 0;
  }

  VAR_3 = VAR_4->next;
  FUNC_1(VAR_4->str);
  FUNC_1(VAR_4->str2);
  FUNC_1(VAR_4);
  VAR_4 = VAR_3;
 }
 return 1;
}

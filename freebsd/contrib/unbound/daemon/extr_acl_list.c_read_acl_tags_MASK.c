
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_strbytelist {struct config_strbytelist* str2; struct config_strbytelist* str; struct config_strbytelist* next; int str2len; } ;
struct config_file {struct config_strbytelist* acl_tags; } ;
struct acl_list {int dummy; } ;


 int FUNC_0 (struct acl_list*,struct config_strbytelist*,struct config_strbytelist*,int ) ;
 int FUNC_1 (struct config_strbytelist*) ;
 int FUNC_2 (struct config_strbytelist*) ;
 int FUNC_3 (int) ;

__attribute__((used)) static int
FUNC_4(struct acl_list* VAR_0, struct config_file* VAR_1)
{
 struct config_strbytelist* VAR_2, *VAR_3 = VAR_1->acl_tags;
 VAR_1->acl_tags = ((void*)0);
 while(VAR_3) {
  FUNC_3(VAR_3->str && VAR_3->str2);
  if(!FUNC_0(VAR_0, VAR_3->str, VAR_3->str2, VAR_3->str2len)) {
   FUNC_1(VAR_3);
   return 0;
  }

  VAR_2 = VAR_3->next;
  FUNC_2(VAR_3->str);
  FUNC_2(VAR_3->str2);
  FUNC_2(VAR_3);
  VAR_3 = VAR_2;
 }
 return 1;
}

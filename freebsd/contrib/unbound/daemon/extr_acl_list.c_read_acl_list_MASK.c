
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct config_str2list {scalar_t__ str2; scalar_t__ str; struct config_str2list* next; } ;
struct config_file {struct config_str2list* acls; } ;
struct acl_list {int dummy; } ;


 int FUNC_0 (struct acl_list*,scalar_t__,scalar_t__,int) ;
 int FUNC_1 (int) ;

__attribute__((used)) static int
FUNC_2(struct acl_list* VAR_0, struct config_file* VAR_1)
{
 struct config_str2list* VAR_2;
 for(VAR_2 = VAR_1->acls; VAR_2; VAR_2 = VAR_2->next) {
  FUNC_1(VAR_2->str && VAR_2->str2);
  if(!FUNC_0(VAR_0, VAR_2->str, VAR_2->str2, 1))
   return 0;
 }
 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {int dummy; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct acl_entry *
FUNC_1(struct acl *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(VAR_1->acl_cnt + 1 <= VAR_0,
     ("aclp->acl_cnt + 1 <= ACL_MAX_ENTRIES"));

 for (VAR_3 = VAR_1->acl_cnt; VAR_3 > VAR_2; VAR_3--)
  VAR_1->acl_entry[VAR_3] = VAR_1->acl_entry[VAR_3 - 1];

 VAR_1->acl_cnt++;

 return (&(VAR_1->acl_entry[VAR_2 + 1]));
}

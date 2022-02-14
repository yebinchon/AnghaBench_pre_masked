
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct acl_entry {scalar_t__ ae_flags; int ae_entry_type; int ae_perm; int ae_id; int ae_tag; } ;
struct acl {int acl_cnt; struct acl_entry* acl_entry; } ;
typedef int acl_tag_t ;
typedef int acl_perm_t ;
typedef int acl_entry_type_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;

__attribute__((used)) static struct acl_entry *
FUNC_1(struct acl *VAR_2, acl_tag_t VAR_3, acl_perm_t VAR_4,
    acl_entry_type_t VAR_5)
{
 struct acl_entry *VAR_6;

 FUNC_0(VAR_2->acl_cnt + 1 <= VAR_0,
     ("aclp->acl_cnt + 1 <= ACL_MAX_ENTRIES"));

 VAR_6 = &(VAR_2->acl_entry[VAR_2->acl_cnt]);
 VAR_2->acl_cnt++;

 VAR_6->ae_tag = VAR_3;
 VAR_6->ae_id = VAR_1;
 VAR_6->ae_perm = VAR_4;
 VAR_6->ae_entry_type = VAR_5;
 VAR_6->ae_flags = 0;

 return (VAR_6);
}

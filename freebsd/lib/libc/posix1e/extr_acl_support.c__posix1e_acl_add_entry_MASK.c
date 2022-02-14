
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
struct acl_entry {int ae_id; int ae_tag; int ae_perm; } ;
struct acl {size_t acl_cnt; struct acl_entry* acl_entry; } ;
typedef int acl_tag_t ;
typedef TYPE_1__* acl_t ;
typedef int acl_perm_t ;
struct TYPE_3__ {struct acl ats_acl; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(acl_t VAR_3, acl_tag_t VAR_4, uid_t VAR_5, acl_perm_t VAR_6)
{
 struct acl *VAR_7;
 struct acl_entry *VAR_8;

 VAR_7 = &VAR_3->ats_acl;

 if (VAR_7->acl_cnt >= VAR_0) {
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_8 = &(VAR_7->acl_entry[VAR_7->acl_cnt]);
 VAR_8->ae_perm = VAR_6;
 VAR_8->ae_tag = VAR_4;
 VAR_8->ae_id = VAR_5;
 VAR_7->acl_cnt++;

 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct acl {scalar_t__ acl_cnt; TYPE_2__* acl_entry; } ;
typedef TYPE_1__* acl_t ;
typedef TYPE_2__* acl_entry_t ;
struct TYPE_6__ {scalar_t__ ae_flags; scalar_t__ ae_entry_type; int ae_perm; int ae_id; int ae_tag; } ;
struct TYPE_5__ {scalar_t__ ats_cur_entry; struct acl ats_acl; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int
FUNC_0(acl_t *VAR_6, acl_entry_t *VAR_7)
{
 struct acl *VAR_8;

 if (VAR_6 == ((void*)0)) {
  VAR_5 = VAR_4;
  return (-1);
 }

 VAR_8 = &(*VAR_6)->ats_acl;





 if (VAR_8->acl_cnt + 1 >= VAR_0) {
  VAR_5 = VAR_4;
  return (-1);
 }

 *VAR_7 = &VAR_8->acl_entry[VAR_8->acl_cnt++];

 (**VAR_7).ae_tag = VAR_3;
 (**VAR_7).ae_id = VAR_2;
 (**VAR_7).ae_perm = VAR_1;
 (**VAR_7).ae_entry_type = 0;
 (**VAR_7).ae_flags = 0;

 (*VAR_6)->ats_cur_entry = 0;

 return (0);
}

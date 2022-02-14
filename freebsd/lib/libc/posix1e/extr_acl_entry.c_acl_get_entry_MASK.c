
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acl {int * acl_entry; int acl_cnt; } ;
typedef TYPE_1__* acl_t ;
typedef int * acl_entry_t ;
struct TYPE_3__ {int ats_cur_entry; struct acl ats_acl; } ;




 int VAR_0 ;
 int VAR_1 ;

int
FUNC_0(acl_t VAR_2, int VAR_3, acl_entry_t *VAR_4)
{
 struct acl *VAR_5;

 if (VAR_2 == ((void*)0)) {
  VAR_1 = VAR_0;
  return (-1);
 }
 VAR_5 = &VAR_2->ats_acl;

 switch(VAR_3) {
 case 129:
  VAR_2->ats_cur_entry = 0;

 case 128:
  if (VAR_2->ats_cur_entry >= VAR_2->ats_acl.acl_cnt)
   return 0;
  *VAR_4 = &VAR_5->acl_entry[VAR_2->ats_cur_entry++];
  return (1);
 }

 VAR_1 = VAR_0;
 return (-1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acl_entry {int dummy; } ;
struct acl {int acl_cnt; int * acl_entry; } ;
typedef TYPE_1__* acl_t ;
struct TYPE_3__ {scalar_t__ ats_cur_entry; struct acl ats_acl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int VAR_2 ;

int
FUNC_1(acl_t VAR_3, int VAR_4)
{
 struct acl *VAR_5;
 int VAR_6;

 if (VAR_3 == ((void*)0)) {
  VAR_2 = VAR_1;
  return (-1);
 }

 VAR_5 = &VAR_3->ats_acl;

 if (VAR_4 < 0 || VAR_4 >= VAR_5->acl_cnt) {
  VAR_2 = VAR_1;
  return (-1);
 }

 if ((VAR_3->ats_acl.acl_cnt < 1) ||
     (VAR_3->ats_acl.acl_cnt > VAR_0)) {
  VAR_2 = VAR_1;
  return (-1);
 }


 for (VAR_6 = VAR_4; VAR_6 < VAR_3->ats_acl.acl_cnt - 1; ++VAR_6)
  VAR_3->ats_acl.acl_entry[VAR_6] =
      VAR_3->ats_acl.acl_entry[VAR_6+1];

 VAR_3->ats_acl.acl_cnt--;
 FUNC_0(&VAR_3->ats_acl.acl_entry[VAR_6],
     sizeof(struct acl_entry));
 VAR_3->ats_cur_entry = 0;

 return (0);
}

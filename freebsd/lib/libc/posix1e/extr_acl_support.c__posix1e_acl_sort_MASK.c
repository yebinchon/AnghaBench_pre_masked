
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct acl_entry {int dummy; } ;
struct acl {int acl_cnt; int * acl_entry; } ;
typedef int compare ;
typedef TYPE_1__* acl_t ;
struct TYPE_3__ {struct acl ats_acl; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *,int ,int,int ) ;

void
FUNC_1(acl_t VAR_1)
{
 struct acl *VAR_2;

 VAR_2 = &VAR_1->ats_acl;

 FUNC_0(&VAR_2->acl_entry[0], VAR_2->acl_cnt,
     sizeof(struct acl_entry), (compare) VAR_0);
}

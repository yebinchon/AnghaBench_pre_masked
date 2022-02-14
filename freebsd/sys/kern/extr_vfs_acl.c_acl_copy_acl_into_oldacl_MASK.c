
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oldacl {int acl_cnt; TYPE_1__* acl_entry; } ;
struct acl {scalar_t__ acl_cnt; TYPE_2__* acl_entry; } ;
struct TYPE_4__ {int ae_perm; int ae_id; int ae_tag; } ;
struct TYPE_3__ {int ae_perm; int ae_id; int ae_tag; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct oldacl*,int) ;

int
FUNC_1(const struct acl *VAR_2, struct oldacl *VAR_3)
{
 int VAR_4;

 if (VAR_2->acl_cnt > VAR_1)
  return (VAR_0);

 FUNC_0(VAR_3, sizeof(*VAR_3));

 VAR_3->acl_cnt = VAR_2->acl_cnt;

 for (VAR_4 = 0; VAR_4 < VAR_3->acl_cnt; VAR_4++) {
  VAR_3->acl_entry[VAR_4].ae_tag = VAR_2->acl_entry[VAR_4].ae_tag;
  VAR_3->acl_entry[VAR_4].ae_id = VAR_2->acl_entry[VAR_4].ae_id;
  VAR_3->acl_entry[VAR_4].ae_perm = VAR_2->acl_entry[VAR_4].ae_perm;
 }

 return (0);
}

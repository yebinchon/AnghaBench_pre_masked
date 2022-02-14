
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct oldacl {scalar_t__ acl_cnt; TYPE_2__* acl_entry; } ;
struct acl {scalar_t__ acl_cnt; TYPE_1__* acl_entry; int acl_maxcnt; } ;
struct TYPE_4__ {int ae_perm; int ae_id; int ae_tag; } ;
struct TYPE_3__ {int ae_perm; int ae_id; int ae_tag; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct acl*,int) ;

int
FUNC_1(const struct oldacl *VAR_3, struct acl *VAR_4)
{
 int VAR_5;

 if (VAR_3->acl_cnt < 0 || VAR_3->acl_cnt > VAR_2)
  return (VAR_1);

 FUNC_0(VAR_4, sizeof(*VAR_4));

 VAR_4->acl_cnt = VAR_3->acl_cnt;
 VAR_4->acl_maxcnt = VAR_0;

 for (VAR_5 = 0; VAR_5 < VAR_4->acl_cnt; VAR_5++) {
  VAR_4->acl_entry[VAR_5].ae_tag = VAR_3->acl_entry[VAR_5].ae_tag;
  VAR_4->acl_entry[VAR_5].ae_id = VAR_3->acl_entry[VAR_5].ae_id;
  VAR_4->acl_entry[VAR_5].ae_perm = VAR_3->acl_entry[VAR_5].ae_perm;
 }

 return (0);
}

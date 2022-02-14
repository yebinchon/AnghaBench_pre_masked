
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct acl_entry {scalar_t__ ae_tag; scalar_t__ ae_id; scalar_t__ ae_perm; scalar_t__ ae_entry_type; scalar_t__ ae_flags; } ;
typedef TYPE_2__* acl_t ;
struct TYPE_6__ {int acl_cnt; struct acl_entry* acl_entry; } ;
struct TYPE_7__ {TYPE_1__ ats_acl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (TYPE_2__* const) ;
 int FUNC_1 (int) ;

int
FUNC_2(const acl_t VAR_1, const acl_t VAR_2)
{
 int VAR_3;
 struct acl_entry *VAR_4, *VAR_5;

 FUNC_1(FUNC_0(VAR_1) == FUNC_0(VAR_2));
 FUNC_1(FUNC_0(VAR_1) != VAR_0);
 FUNC_1(FUNC_0(VAR_2) != VAR_0);

 if (VAR_1->ats_acl.acl_cnt != VAR_2->ats_acl.acl_cnt)
  return (1);

 for (VAR_3 = 0; VAR_3 < VAR_2->ats_acl.acl_cnt; VAR_3++) {
  VAR_4 = &(VAR_1->ats_acl.acl_entry[VAR_3]);
  VAR_5 = &(VAR_2->ats_acl.acl_entry[VAR_3]);

  if (VAR_4->ae_tag != VAR_5->ae_tag ||
      VAR_4->ae_id != VAR_5->ae_id ||
      VAR_4->ae_perm != VAR_5->ae_perm ||
      VAR_4->ae_entry_type != VAR_5->ae_entry_type ||
      VAR_4->ae_flags != VAR_5->ae_flags)
   return (1);
 }

 return (0);
}

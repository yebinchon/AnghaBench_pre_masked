
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct TYPE_2__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; int rrset_cache; } ;
struct key_entry_key {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,struct ub_packed_rrset_key*,int ) ;
 int FUNC_1 (int ,struct ub_packed_rrset_key*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_2 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct key_entry_key*,char**,int ,struct module_qstate*) ;

__attribute__((used)) static int
FUNC_3(struct module_env* VAR_2, struct val_env* VAR_3,
 struct ub_packed_rrset_key* VAR_4, struct key_entry_key* VAR_5,
 char** VAR_6, struct module_qstate* VAR_7)
{
 struct packed_rrset_data* VAR_8 = (struct packed_rrset_data*)
  VAR_4->entry.data;
 if(VAR_8->security == VAR_1)
  return 1;
 FUNC_0(VAR_2->rrset_cache, VAR_4, *VAR_2->now);
 if(VAR_8->security == VAR_1)
  return 1;
 VAR_8->security = FUNC_2(VAR_2, VAR_3, VAR_4, VAR_5, VAR_6,
  VAR_0, VAR_7);
 if(VAR_8->security == VAR_1) {
  FUNC_1(VAR_2->rrset_cache, VAR_4, *VAR_2->now);
  return 1;
 }
 return 0;
}

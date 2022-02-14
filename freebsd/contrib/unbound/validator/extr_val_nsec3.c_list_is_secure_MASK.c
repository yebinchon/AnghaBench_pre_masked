
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ security; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; int rrset_cache; } ;
struct key_entry_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,struct ub_packed_rrset_key*,int ) ;
 int FUNC_2 (int ,struct ub_packed_rrset_key*,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_3 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct key_entry_key*,char**,int ,struct module_qstate*) ;
 int FUNC_4 (int ,char*) ;

__attribute__((used)) static int
FUNC_5(struct module_env* VAR_4, struct val_env* VAR_5,
 struct ub_packed_rrset_key** VAR_6, size_t VAR_7,
 struct key_entry_key* VAR_8, char** VAR_9, struct module_qstate* VAR_10)
{
 struct packed_rrset_data* VAR_11;
 size_t VAR_12;
 for(VAR_12=0; VAR_12<VAR_7; VAR_12++) {
  VAR_11 = (struct packed_rrset_data*)VAR_6[VAR_12]->entry.data;
  if(VAR_6[VAR_12]->rk.type != FUNC_0(VAR_0))
   continue;
  if(VAR_11->security == VAR_3)
   continue;
  FUNC_1(VAR_4->rrset_cache, VAR_6[VAR_12], *VAR_4->now);
  if(VAR_11->security == VAR_3)
   continue;
  VAR_11->security = FUNC_3(VAR_4, VAR_5, VAR_6[VAR_12], VAR_8,
   VAR_9, VAR_1, VAR_10);
  if(VAR_11->security != VAR_3) {
   FUNC_4(VAR_2, "NSEC3 did not verify");
   return 0;
  }
  FUNC_2(VAR_4->rrset_cache, VAR_6[VAR_12], *VAR_4->now);
 }
 return 1;
}

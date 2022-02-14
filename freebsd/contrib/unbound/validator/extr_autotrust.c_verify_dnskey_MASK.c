
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct trust_anchor {int dnskey_rrset; int ds_rrset; } ;
struct module_qstate {int dummy; } ;
struct module_env {TYPE_1__* cfg; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;
struct TYPE_2__ {int harden_algo_downgrade; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,int ,int ,int *,char**,struct module_qstate*) ;
 int FUNC_2 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_3(struct module_env* VAR_3, struct val_env* VAR_4,
        struct trust_anchor* VAR_5, struct ub_packed_rrset_key* VAR_6,
 struct module_qstate* VAR_7)
{
 char* VAR_8 = ((void*)0);
 uint8_t VAR_9[VAR_0+1];
 int VAR_10 = VAR_3->cfg->harden_algo_downgrade;
 enum sec_status VAR_11 = FUNC_1(VAR_3, VAR_4, VAR_6,
  VAR_5->ds_rrset, VAR_5->dnskey_rrset, VAR_10?VAR_9:((void*)0), &VAR_8,
  VAR_7);




 FUNC_2(VAR_1, "autotrust: validate DNSKEY with anchor: %s",
  FUNC_0(VAR_11));
 return VAR_11 == VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct val_env {int dummy; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,size_t,char**,int ,struct module_qstate*) ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int) ;

__attribute__((used)) static int
FUNC_2(struct module_env* VAR_3, struct val_env* VAR_4,
 struct ub_packed_rrset_key* VAR_5, size_t VAR_6,
 struct module_qstate* VAR_7)
{
 enum sec_status VAR_8;
 char* VAR_9 = ((void*)0);
 FUNC_1(VAR_1, "seen REVOKE flag, check self-signed, rr %d",
  (int)VAR_6);


 VAR_8 = FUNC_0(VAR_3, VAR_4, VAR_5, VAR_5, VAR_6,
  &VAR_9, VAR_0, VAR_7);
 return (VAR_8 == VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ub_packed_rrset_key {int dummy; } ;
struct reply_info {int dummy; } ;
struct module_env {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct module_env*,struct ub_packed_rrset_key*) ;
 int FUNC_1 (int ,char*,struct ub_packed_rrset_key*) ;
 struct ub_packed_rrset_key* FUNC_2 (struct reply_info*) ;

void
FUNC_3(struct module_env* VAR_1, struct reply_info* VAR_2)
{
 struct ub_packed_rrset_key* VAR_3 = FUNC_2(VAR_2);
 if(VAR_3) {
  FUNC_1(VAR_0, "store parent-side NS", VAR_3);
  FUNC_0(VAR_1, VAR_3);
 }
}

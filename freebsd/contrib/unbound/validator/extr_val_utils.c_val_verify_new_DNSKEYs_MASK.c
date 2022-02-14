
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct val_env {int dummy; } ;
struct TYPE_2__ {int rrset_class; int dname_len; int dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct regional {int dummy; } ;
struct module_qstate {int dummy; } ;
struct module_env {int * now; } ;
struct key_entry_key {int dummy; } ;
typedef enum sec_status { ____Placeholder_sec_status } sec_status ;


 int VAR_0 ;
 int VAR_1 ;
 struct key_entry_key* FUNC_0 (struct regional*,int ,int ,int ,int ,int ) ;
 struct key_entry_key* FUNC_1 (struct regional*,int ,int ,int ,int ,int ) ;
 struct key_entry_key* FUNC_2 (struct regional*,int ,int ,int ,struct ub_packed_rrset_key*,int *,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ub_packed_rrset_key*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,struct ub_packed_rrset_key*,int *,char**,struct module_qstate*) ;

struct key_entry_key*
FUNC_6(struct regional* VAR_4, struct module_env* VAR_5,
 struct val_env* VAR_6, struct ub_packed_rrset_key* VAR_7,
 struct ub_packed_rrset_key* VAR_8, int VAR_9, char** VAR_10,
 struct module_qstate* VAR_11)
{
 uint8_t VAR_12[VAR_0+1];
 enum sec_status VAR_13 = FUNC_5(VAR_5, VAR_6,
  VAR_7, VAR_8, VAR_9?VAR_12:((void*)0), VAR_10, VAR_11);

 if(VAR_13 == VAR_3) {
  return FUNC_2(VAR_4,
   VAR_8->rk.dname, VAR_8->rk.dname_len,
   FUNC_3(VAR_8->rk.rrset_class), VAR_7,
   VAR_9?VAR_12:((void*)0), *VAR_5->now);
 } else if(VAR_13 == VAR_2) {
  return FUNC_1(VAR_4, VAR_8->rk.dname,
   VAR_8->rk.dname_len,
   FUNC_3(VAR_8->rk.rrset_class),
   FUNC_4(VAR_8), *VAR_5->now);
 }
 return FUNC_0(VAR_4, VAR_8->rk.dname,
  VAR_8->rk.dname_len, FUNC_3(VAR_8->rk.rrset_class),
  VAR_1, *VAR_5->now);
}

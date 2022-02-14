
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct val_env {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct trust_anchor {int dummy; } ;
struct packed_rrset_data {size_t count; scalar_t__* rr_len; scalar_t__* rr_data; } ;
struct module_qstate {int dummy; } ;
struct module_env {int dummy; } ;
struct autr_ta {int revoked; int dname_len; int rr_len; int rr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_1 (struct module_env*,struct autr_ta*,int*) ;
 int FUNC_2 (struct trust_anchor*,scalar_t__,scalar_t__,scalar_t__,struct autr_ta**) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_8 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,size_t,struct module_qstate*) ;
 int FUNC_9 (struct autr_ta*,int) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int ,int ) ;
 int FUNC_12 (int ,int ,int ) ;
 int FUNC_13 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static void
FUNC_14(struct module_env* VAR_2, struct val_env* VAR_3,
 struct trust_anchor* VAR_4, struct ub_packed_rrset_key* VAR_5,
 int* VAR_6, struct module_qstate* VAR_7)
{
 struct packed_rrset_data* VAR_8 = (struct packed_rrset_data*)
  VAR_5->entry.data;
 size_t VAR_9;
 FUNC_3(FUNC_5(VAR_5->rk.type) == VAR_0);
 for(VAR_9=0; VAR_9<VAR_8->count; VAR_9++) {
  struct autr_ta* VAR_10 = ((void*)0);
  if(!FUNC_7(FUNC_5(VAR_5->rk.type),
   VAR_8->rr_data[VAR_9]+2, VAR_8->rr_len[VAR_9]-2) ||
   !FUNC_6(FUNC_5(VAR_5->rk.type),
   VAR_8->rr_data[VAR_9]+2, VAR_8->rr_len[VAR_9]-2))
   continue;
  if(!FUNC_2(VAR_4, FUNC_5(VAR_5->rk.type),
   VAR_8->rr_data[VAR_9]+2, VAR_8->rr_len[VAR_9]-2, &VAR_10)) {
   FUNC_4("malloc failure");
   continue;
  }
  if(!VAR_10)
   continue;
  if(FUNC_8(VAR_2, VAR_3, VAR_5, VAR_9, VAR_7)) {



   FUNC_3(FUNC_0(VAR_5, VAR_9)-128 ==
    FUNC_10(FUNC_11(
    VAR_10->rr, VAR_10->rr_len, VAR_10->dname_len),
    FUNC_12(VAR_10->rr, VAR_10->rr_len,
    VAR_10->dname_len)) ||
    FUNC_0(VAR_5, VAR_9) ==
    FUNC_10(FUNC_11(
    VAR_10->rr, VAR_10->rr_len, VAR_10->dname_len),
    FUNC_12(VAR_10->rr, VAR_10->rr_len,
    VAR_10->dname_len)));
   FUNC_13(VAR_10, VAR_1, "is self-signed revoked");
   if(!VAR_10->revoked)
    *VAR_6 = 1;
   FUNC_9(VAR_10, 1);
   FUNC_1(VAR_2, VAR_10, VAR_6);
  }
 }
}

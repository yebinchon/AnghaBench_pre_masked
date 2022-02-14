
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct val_env {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct trust_anchor {scalar_t__ ds_rrset; int dclass; int name; } ;
struct packed_rrset_data {size_t count; scalar_t__* rr_len; scalar_t__* rr_data; scalar_t__* rr_ttl; } ;
struct module_env {int dummy; } ;
struct autr_ta {int s; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct autr_ta* FUNC_0 (struct trust_anchor*,int ,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct ub_packed_rrset_key*,size_t) ;
 int FUNC_2 (struct trust_anchor*,scalar_t__,scalar_t__,scalar_t__,struct autr_ta**) ;
 int FUNC_3 (struct trust_anchor*) ;
 scalar_t__ FUNC_4 (struct module_env*,struct val_env*,struct ub_packed_rrset_key*,size_t,scalar_t__) ;
 int FUNC_5 (struct ub_packed_rrset_key*) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,int ,scalar_t__,int ) ;
 int FUNC_8 (struct module_env*,struct packed_rrset_data*) ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_11 (scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_12 (struct autr_ta*,int) ;
 int FUNC_13 (struct trust_anchor*,int ,int ,int*) ;
 int FUNC_14 (struct autr_ta*,int ,char*) ;

__attribute__((used)) static int
FUNC_15(struct module_env* VAR_4, struct val_env* VAR_5,
 struct trust_anchor* VAR_6, struct ub_packed_rrset_key* VAR_7,
 int* VAR_8)
{
 struct packed_rrset_data* VAR_9 = (struct packed_rrset_data*)
  VAR_7->entry.data;
 size_t VAR_10;
 FUNC_6(FUNC_9(VAR_7->rk.type) == VAR_1);
 FUNC_3(VAR_6);
 for(VAR_10=0; VAR_10<VAR_9->count; VAR_10++) {
  struct autr_ta* VAR_11 = ((void*)0);
  if(!FUNC_11(FUNC_9(VAR_7->rk.type),
   VAR_9->rr_data[VAR_10]+2, VAR_9->rr_len[VAR_10]-2))
   continue;
  if(FUNC_10(FUNC_9(VAR_7->rk.type),
   VAR_9->rr_data[VAR_10]+2, VAR_9->rr_len[VAR_10]-2)) {


   continue;
  }


  if(!FUNC_1(VAR_7, VAR_10)) {

   FUNC_7(VAR_3, "trust point has "
    "unsupported algorithm at",
    VAR_6->name, VAR_1, VAR_6->dclass);
   continue;
  }


  if(!FUNC_2(VAR_6, FUNC_9(VAR_7->rk.type),
   VAR_9->rr_data[VAR_10]+2, VAR_9->rr_len[VAR_10]-2, &VAR_11)) {
   return 0;
  }
  if(!VAR_11) {
   VAR_11 = FUNC_0(VAR_6, (uint32_t)VAR_9->rr_ttl[VAR_10],
    VAR_9->rr_data[VAR_10]+2, VAR_9->rr_len[VAR_10]-2);
   *VAR_8 = 1;

   if(VAR_11 && VAR_6->ds_rrset && FUNC_4(VAR_4, VAR_5,
    VAR_7, VAR_10, VAR_6->ds_rrset)) {
    FUNC_14(VAR_11, VAR_2, "verified by DS");
    VAR_11->s = VAR_0;
   }
  }
  if(!VAR_11) {
   return 0;
  }
  FUNC_12(VAR_11, 1);
  FUNC_14(VAR_11, VAR_2, "in DNS response");
 }
 FUNC_13(VAR_6, FUNC_8(VAR_4, VAR_9), FUNC_5(VAR_7), VAR_8);
 return 1;
}

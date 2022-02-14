
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_7__ {scalar_t__ count; } ;
struct val_neg_zone {TYPE_3__ tree; int name; } ;
struct val_neg_cache {int lock; } ;
struct TYPE_5__ {size_t dname_len; int rrset_class; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_4__** rrsets; } ;
struct TYPE_6__ {int dname; int type; } ;
struct TYPE_8__ {TYPE_2__ rk; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (struct reply_info*) ;
 size_t FUNC_1 (int *,size_t) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int *,int ,scalar_t__) ;
 struct val_neg_zone* FUNC_7 (struct val_neg_cache*,int *,size_t,scalar_t__) ;
 int FUNC_8 (struct val_neg_cache*,struct val_neg_zone*) ;
 struct val_neg_zone* FUNC_9 (struct val_neg_cache*,int *,size_t,scalar_t__) ;
 int FUNC_10 (struct val_neg_cache*,struct val_neg_zone*,TYPE_4__*) ;
 int FUNC_11 (struct val_neg_cache*,size_t) ;
 scalar_t__ FUNC_12 (int ) ;
 struct ub_packed_rrset_key* FUNC_13 (struct reply_info*) ;
 int FUNC_14 (struct reply_info*) ;
 int * FUNC_15 (struct reply_info*,size_t*,scalar_t__*) ;
 int FUNC_16 (struct val_neg_zone*) ;

void FUNC_17(struct val_neg_cache* VAR_3, struct reply_info* VAR_4)
{
 size_t VAR_5, VAR_6;
 struct ub_packed_rrset_key* VAR_7;
 uint8_t* VAR_8 = ((void*)0);
 size_t VAR_9;
 uint16_t VAR_10;
 struct val_neg_zone* VAR_11;

 if(!FUNC_14(VAR_4))
  return;

 if((VAR_7 = FUNC_13(VAR_4))) {
  VAR_8 = VAR_7->rk.dname;
  VAR_9 = VAR_7->rk.dname_len;
  VAR_10 = FUNC_12(VAR_7->rk.rrset_class);
 }
 else {


  if(!(VAR_8 = FUNC_15(VAR_4, &VAR_9, &VAR_10)))
   return;
 }

 FUNC_6(VAR_2, "negcache insert for zone",
  VAR_8, VAR_1, VAR_10);


 VAR_6 = FUNC_0(VAR_4) +
  FUNC_1(VAR_8, VAR_9);
 FUNC_3(&VAR_3->lock);
 FUNC_11(VAR_3, VAR_6);


 VAR_11 = FUNC_9(VAR_3, VAR_8, VAR_9, VAR_10);
 if(!VAR_11) {
  if(!(VAR_11 = FUNC_7(VAR_3, VAR_8, VAR_9,
   VAR_10))) {
   FUNC_4(&VAR_3->lock);
   FUNC_5("out of memory adding negative zone");
   return;
  }
 }
 FUNC_16(VAR_11);


 for(VAR_5=VAR_4->an_numrrsets; VAR_5< VAR_4->an_numrrsets+VAR_4->ns_numrrsets; VAR_5++){
  if(FUNC_12(VAR_4->rrsets[VAR_5]->rk.type) != VAR_0)
   continue;
  if(!FUNC_2(VAR_4->rrsets[VAR_5]->rk.dname,
   VAR_11->name)) continue;

  FUNC_10(VAR_3, VAR_11, VAR_4->rrsets[VAR_5]);
 }
 if(VAR_11->tree.count == 0) {

  FUNC_8(VAR_3, VAR_11);
 }
 FUNC_4(&VAR_3->lock);
}

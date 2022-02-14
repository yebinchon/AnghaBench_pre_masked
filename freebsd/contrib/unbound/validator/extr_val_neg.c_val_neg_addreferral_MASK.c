
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_5__ {scalar_t__ count; } ;
struct val_neg_zone {TYPE_2__ tree; int * name; } ;
struct val_neg_cache {int lock; } ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; TYPE_3__** rrsets; } ;
struct TYPE_4__ {int * dname; int type; } ;
struct TYPE_6__ {TYPE_1__ rk; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 size_t FUNC_0 (struct reply_info*) ;
 size_t FUNC_1 (int *,size_t) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,int *,int ,int ) ;
 struct val_neg_zone* FUNC_7 (struct val_neg_cache*,int *,size_t,int ) ;
 int FUNC_8 (struct val_neg_cache*,struct val_neg_zone*) ;
 struct val_neg_zone* FUNC_9 (struct val_neg_cache*,int *,size_t,int ) ;
 int FUNC_10 (struct val_neg_cache*,struct val_neg_zone*,TYPE_3__*) ;
 int FUNC_11 (struct val_neg_cache*,size_t) ;
 scalar_t__ FUNC_12 (int ) ;
 int * FUNC_13 (struct reply_info*,size_t*,int *) ;
 int FUNC_14 (struct val_neg_zone*) ;

void FUNC_15(struct val_neg_cache* VAR_4, struct reply_info* VAR_5,
 uint8_t* VAR_6)
{
 size_t VAR_7, VAR_8;
 uint8_t* VAR_9;
 size_t VAR_10;
 uint16_t VAR_11;
 struct val_neg_zone* VAR_12;


 VAR_9 = FUNC_13(VAR_5, &VAR_10, &VAR_11);
 if(!VAR_9)
  return;
 if(!FUNC_2(VAR_9, VAR_6)) {

  return;
 }

 FUNC_6(VAR_3, "negcache insert referral ",
  VAR_9, VAR_0, VAR_11);


 VAR_8 = FUNC_0(VAR_5) + FUNC_1(VAR_9, VAR_10);
 FUNC_3(&VAR_4->lock);
 FUNC_11(VAR_4, VAR_8);


 VAR_12 = FUNC_9(VAR_4, VAR_9, VAR_10, VAR_11);
 if(!VAR_12) {
  if(!(VAR_12 = FUNC_7(VAR_4, VAR_9, VAR_10,
   VAR_11))) {
   FUNC_4(&VAR_4->lock);
   FUNC_5("out of memory adding negative zone");
   return;
  }
 }
 FUNC_14(VAR_12);


 for(VAR_7=VAR_5->an_numrrsets; VAR_7< VAR_5->an_numrrsets+VAR_5->ns_numrrsets; VAR_7++){
  if(FUNC_12(VAR_5->rrsets[VAR_7]->rk.type) != VAR_1 &&
   FUNC_12(VAR_5->rrsets[VAR_7]->rk.type) != VAR_2)
   continue;
  if(!FUNC_2(VAR_5->rrsets[VAR_7]->rk.dname,
   VAR_12->name)) continue;

  FUNC_10(VAR_4, VAR_12, VAR_5->rrsets[VAR_7]);
 }
 if(VAR_12->tree.count == 0) {

  FUNC_8(VAR_4, VAR_12);
 }
 FUNC_4(&VAR_4->lock);
}

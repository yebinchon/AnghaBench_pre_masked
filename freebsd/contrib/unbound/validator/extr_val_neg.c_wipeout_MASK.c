
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct val_neg_zone {int name; } ;
struct val_neg_data {int labs; scalar_t__ in_use; int * name; int node; } ;
struct val_neg_cache {int dummy; } ;
struct TYPE_4__ {int type; } ;
struct TYPE_3__ {scalar_t__ data; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; TYPE_1__ entry; } ;
struct packed_rrset_data {scalar_t__ count; int* rr_len; int ** rr_data; } ;
typedef int rbnode_type ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_0 (int *,int,int *,int,int*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,size_t*) ;
 int FUNC_3 (int *,int ) ;
 size_t FUNC_4 (int *,int) ;
 int FUNC_5 (struct val_neg_cache*,struct val_neg_data*) ;
 int FUNC_6 (struct ub_packed_rrset_key*,int ,int *,int) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 int * FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct val_neg_cache* VAR_2, struct val_neg_zone* VAR_3,
 struct val_neg_data* VAR_4, struct ub_packed_rrset_key* VAR_5)
{
 struct packed_rrset_data* VAR_6 = (struct packed_rrset_data*)VAR_5->
  entry.data;
 uint8_t* VAR_7;
 size_t VAR_8;
 int VAR_9, VAR_10;
 rbnode_type* VAR_11, *VAR_12;
 struct val_neg_data* VAR_13;
 uint8_t VAR_14[257];

 if(!VAR_6 || VAR_6->count == 0 || VAR_6->rr_len[0] < 2+1)
  return;
 if(FUNC_7(VAR_5->rk.type) == VAR_0) {
  VAR_7 = VAR_6->rr_data[0]+2;
  VAR_8 = FUNC_4(VAR_7, VAR_6->rr_len[0]-2);
  VAR_9 = FUNC_1(VAR_7);
 } else {

  if(!FUNC_6(VAR_5, 0, VAR_14, sizeof(VAR_14)))
   return;
  VAR_7 = VAR_14;
  VAR_9 = FUNC_2(VAR_7, &VAR_8);
 }


 if(!FUNC_3(VAR_4->name, VAR_3->name) ||
  !FUNC_3(VAR_7, VAR_3->name))
  return;


 if(FUNC_8(VAR_7, VAR_3->name) == 0) {
  VAR_7 = ((void*)0);
 }

 VAR_11 = FUNC_9(&VAR_4->node);
 while(VAR_11 && VAR_11 != VAR_1) {
  VAR_13 = (struct val_neg_data*)VAR_11;

  if(FUNC_0(VAR_13->name, VAR_13->labs,
   VAR_4->name, VAR_4->labs, &VAR_10) <= 0) {


   VAR_11 = FUNC_9(VAR_11);
   continue;
  }



  if(VAR_7 && FUNC_0(VAR_13->name, VAR_13->labs,
   VAR_7, VAR_9, &VAR_10) >= 0) {
   break;
  }



  VAR_12 = FUNC_9(VAR_11);
  if(VAR_13->in_use)
   FUNC_5(VAR_2, VAR_13);
  VAR_11 = VAR_12;
 }
}

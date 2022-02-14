
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int time_t ;
struct TYPE_2__ {scalar_t__ count; } ;
struct val_neg_zone {int dclass; TYPE_1__ tree; scalar_t__ labs; int len; int name; } ;
struct val_neg_data {int len; int name; struct val_neg_data* parent; int in_use; } ;
struct ub_packed_rrset_key {int dummy; } ;
struct rrset_cache {int dummy; } ;
struct regional {int dummy; } ;


 int VAR_0 ;
 struct ub_packed_rrset_key* FUNC_0 (struct rrset_cache*,int ,int ,int ,int ,int ,struct regional*,int ,int ,int ) ;
 int FUNC_1 (struct val_neg_zone*,int *,size_t,scalar_t__,struct val_neg_data**) ;
 int FUNC_2 (struct val_neg_zone*,struct ub_packed_rrset_key*) ;
 size_t FUNC_3 (int *,size_t,int ,int ,int *,size_t) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;

__attribute__((used)) static struct ub_packed_rrset_key*
FUNC_5(struct val_neg_zone* VAR_1, uint8_t* VAR_2, size_t VAR_3,
 struct rrset_cache* VAR_4, struct regional* VAR_5,
 time_t VAR_6, uint8_t* VAR_7, size_t VAR_8)
{
 struct ub_packed_rrset_key* VAR_9;
 struct val_neg_data* VAR_10;
 size_t VAR_11;

 if(!(VAR_11=FUNC_3(VAR_2, VAR_3, VAR_1->name,
  VAR_1->len, VAR_7, VAR_8)))
  return ((void*)0);
 (void)FUNC_1(VAR_1, VAR_7, VAR_11, VAR_1->labs+1, &VAR_10);
 if(!VAR_10 && VAR_1->tree.count != 0) {


  VAR_10 = (struct val_neg_data*)FUNC_4(&VAR_1->tree);
 }
 while(VAR_10 && !VAR_10->in_use)
  VAR_10 = VAR_10->parent;
 if(!VAR_10)
  return ((void*)0);

 VAR_9 = FUNC_0(VAR_4, VAR_10->name, VAR_10->len,
  VAR_0, VAR_1->dclass, 0, VAR_5, 0, 0, VAR_6);
 if(!VAR_9)
  return ((void*)0);
 if(!FUNC_2(VAR_1, VAR_9))
  return ((void*)0);
 return VAR_9;
}

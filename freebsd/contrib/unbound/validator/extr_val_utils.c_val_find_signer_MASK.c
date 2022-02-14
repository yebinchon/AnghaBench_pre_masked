
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct reply_info {size_t an_numrrsets; size_t ns_numrrsets; size_t rrset_count; TYPE_2__** rrsets; } ;
struct query_info {int qname; } ;
typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
struct TYPE_4__ {int type; int dname; } ;
struct TYPE_5__ {TYPE_1__ rk; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,struct query_info*,int **,size_t*,int*) ;
 int FUNC_3 (TYPE_2__*,int **,size_t*) ;
 int FUNC_4 (int ,char*) ;

void
FUNC_5(enum val_classification VAR_11, struct query_info* VAR_12,
 struct reply_info* VAR_13, size_t VAR_14, uint8_t** VAR_15,
 size_t* VAR_16)
{
 size_t VAR_17;

 if(VAR_11 == VAR_8) {

  for(VAR_17=VAR_14; VAR_17<VAR_13->an_numrrsets; VAR_17++) {
   if(FUNC_1(VAR_12->qname,
    VAR_13->rrsets[VAR_17]->rk.dname) == 0) {
    FUNC_3(VAR_13->rrsets[VAR_17],
     VAR_15, VAR_16);
    return;
   }
  }
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
 } else if(VAR_11 == VAR_4) {

  for(VAR_17=VAR_14; VAR_17<VAR_13->an_numrrsets; VAR_17++) {
   FUNC_3(VAR_13->rrsets[VAR_17],
    VAR_15, VAR_16);
   if(*VAR_15)
    return;
   if(FUNC_0(VAR_13->rrsets[VAR_17]->rk.type) != VAR_0)
    break;
  }
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
 } else if(VAR_11 == VAR_6
  || VAR_11 == VAR_7) {

  for(VAR_17=VAR_13->an_numrrsets; VAR_17<
   VAR_13->an_numrrsets+VAR_13->ns_numrrsets; VAR_17++) {
   if(FUNC_0(VAR_13->rrsets[VAR_17]->rk.type) == VAR_1
    || FUNC_0(VAR_13->rrsets[VAR_17]->rk.type) ==
    VAR_2) {
    FUNC_3(VAR_13->rrsets[VAR_17],
     VAR_15, VAR_16);
    return;
   }
  }
 } else if(VAR_11 == VAR_5) {


  int VAR_18 = 0;
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
  for(VAR_17=VAR_13->an_numrrsets; VAR_17<VAR_13->an_numrrsets+VAR_13->
   ns_numrrsets; VAR_17++) {
   if(FUNC_0(VAR_13->rrsets[VAR_17]->rk.type) == VAR_1
    || FUNC_0(VAR_13->rrsets[VAR_17]->rk.type) ==
    VAR_2) {
    FUNC_2(VAR_13->rrsets[VAR_17], VAR_12,
     VAR_15, VAR_16, &VAR_18);
   }
  }
 } else if(VAR_11 == VAR_3) {


  for(VAR_17=VAR_14; VAR_17<VAR_13->an_numrrsets; VAR_17++) {
   if(FUNC_1(VAR_12->qname,
    VAR_13->rrsets[VAR_17]->rk.dname) == 0) {
    FUNC_3(VAR_13->rrsets[VAR_17],
     VAR_15, VAR_16);
    if(*VAR_15)
     return;
   }
  }

  if(VAR_14 < VAR_13->an_numrrsets &&
   FUNC_0(VAR_13->rrsets[VAR_14]->rk.type) ==
   VAR_0) {
   FUNC_3(VAR_13->rrsets[VAR_14],
    VAR_15, VAR_16);
   if(*VAR_15)
    return;
  }
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
 } else if(VAR_11 == VAR_9) {

  if(VAR_14 < VAR_13->rrset_count) {
   FUNC_3(VAR_13->rrsets[VAR_14],
    VAR_15, VAR_16);
   return;
  }
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
 } else {
  FUNC_4(VAR_10, "find_signer: could not find signer name"
   " for unknown type response");
  *VAR_15 = ((void*)0);
  *VAR_16 = 0;
 }
}

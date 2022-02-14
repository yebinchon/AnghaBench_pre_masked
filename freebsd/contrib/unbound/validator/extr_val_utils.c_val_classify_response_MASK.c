
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint16_t ;
struct reply_info {int an_numrrsets; size_t ns_numrrsets; TYPE_2__** rrsets; int flags; } ;
struct query_info {scalar_t__ qtype; int qname; } ;
typedef enum val_classification { ____Placeholder_val_classification } val_classification ;
struct TYPE_3__ {int type; int dname; } ;
struct TYPE_4__ {TYPE_1__ rk; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_1 (char*,struct query_info*,struct reply_info*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,int ) ;

enum val_classification
FUNC_4(uint16_t VAR_16, struct query_info* VAR_17,
 struct query_info* VAR_18, struct reply_info* VAR_19, size_t VAR_20)
{
 int VAR_21 = (int)FUNC_0(VAR_19->flags);
 size_t VAR_22;



 if(VAR_21 == VAR_2 && VAR_19->an_numrrsets == 0)
  return VAR_11;


 if(!(VAR_16&VAR_0) && VAR_19->an_numrrsets == 0 &&
  VAR_21 == VAR_1) {




  int VAR_23 = 0;
  for(VAR_22=0; VAR_22<VAR_19->ns_numrrsets; VAR_22++) {
   if(FUNC_2(VAR_19->rrsets[VAR_22]->rk.type) == VAR_7)
    return VAR_12;
   if(FUNC_2(VAR_19->rrsets[VAR_22]->rk.type) == VAR_5)
    return VAR_14;
   if(FUNC_2(VAR_19->rrsets[VAR_22]->rk.type) == VAR_6)
    VAR_23 = 1;
  }
  return VAR_23?VAR_14:VAR_12;
 }

 if(!(VAR_16&VAR_0) && VAR_19->ns_numrrsets == 0 &&
  VAR_19->an_numrrsets == 1 && VAR_21 == VAR_1 &&
  FUNC_2(VAR_19->rrsets[0]->rk.type) == VAR_6 &&
  FUNC_3(VAR_19->rrsets[0]->rk.dname,
   VAR_17->qname) != 0)
  return VAR_14;


 if(VAR_21 != VAR_1 && VAR_21 != VAR_2)
  return VAR_15;

 if(VAR_20>0 && VAR_19->an_numrrsets <= VAR_20)
  return VAR_10;


 if(VAR_21 == VAR_1 && VAR_19->an_numrrsets == 0)
  return VAR_12;






 if(VAR_21 == VAR_1 && VAR_18->qtype == VAR_3)
  return VAR_8;



 for(VAR_22=VAR_20; VAR_22<VAR_19->an_numrrsets; VAR_22++) {
  if(VAR_21 == VAR_1 &&
   FUNC_2(VAR_19->rrsets[VAR_22]->rk.type) == VAR_18->qtype)
   return VAR_13;
  if(FUNC_2(VAR_19->rrsets[VAR_22]->rk.type) == VAR_4)
   return VAR_9;
 }
 FUNC_1("validator: error. failed to classify response message: ",
  VAR_18, VAR_19);
 return VAR_15;
}

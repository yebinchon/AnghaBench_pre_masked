
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int * dname; int type; int rrset_class; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct query_info {size_t qname_len; scalar_t__ qtype; scalar_t__ qclass; int * qname; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct delegpt {int * name; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_4__ {int flags; size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_1 (int *,int *) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ub_packed_rrset_key*,int **,size_t*) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *,int *) ;

enum response_type
FUNC_6(int VAR_14,
 struct dns_msg* VAR_15, struct query_info* VAR_16, struct delegpt* VAR_17)
{
 uint8_t* VAR_18 = (uint8_t*)"\000";
 struct ub_packed_rrset_key* VAR_19;
 size_t VAR_20;

 if(!VAR_15 || !VAR_16)
  return VAR_13;


 if(FUNC_0(VAR_15->rep->flags) == VAR_3) {

  if( (VAR_15->rep->flags&VAR_1) &&
   !(VAR_15->rep->flags&VAR_0) && !VAR_14)
    return VAR_11;

  for(VAR_20=0; VAR_20<VAR_15->rep->an_numrrsets; VAR_20++) {
   VAR_19 = VAR_15->rep->rrsets[VAR_20];
   if(FUNC_4(VAR_19->rk.type) == VAR_5 &&
    FUNC_5(VAR_16->qname,
    VAR_19->rk.dname) == 0) {
    return VAR_9;
   }
  }
  return VAR_8;
 }



 if(FUNC_0(VAR_15->rep->flags) != VAR_2)
  return VAR_13;



 if(VAR_17) {
  VAR_18 = VAR_17->name;
 }



 if(VAR_15->rep->an_numrrsets > 0) {
  uint8_t* VAR_21 = VAR_16->qname;
  size_t VAR_22 = VAR_16->qname_len;




  for(VAR_20=0; VAR_20<VAR_15->rep->an_numrrsets; VAR_20++) {
   VAR_19 = VAR_15->rep->rrsets[VAR_20];




   if((VAR_16->qtype == VAR_4 ||
    VAR_16->qtype == VAR_6) &&
    FUNC_4(VAR_19->rk.type) == VAR_6 &&
    FUNC_4(VAR_19->rk.rrset_class) == VAR_16->qclass &&
    FUNC_1(VAR_19->rk.dname,
    VAR_18)) {
    if((VAR_15->rep->flags&VAR_0))
     return VAR_8;
    return VAR_12;
   }






   if(FUNC_4(VAR_19->rk.type) == VAR_16->qtype &&
    FUNC_4(VAR_19->rk.rrset_class) == VAR_16->qclass &&
    FUNC_5(VAR_21, VAR_19->rk.dname) == 0) {
    if((VAR_15->rep->flags&VAR_0))
     return VAR_8;




    break;
   }



   if(FUNC_4(VAR_19->rk.type) == VAR_5 &&
    FUNC_5(VAR_21, VAR_19->rk.dname) == 0) {
    FUNC_3(VAR_19, &VAR_21, &VAR_22);
   }
  }

  if(VAR_16->qtype == VAR_4)
   return VAR_8;



  if(VAR_21 != VAR_16->qname) {
   return VAR_9;
  }
 }



 for(VAR_20 = VAR_15->rep->an_numrrsets; VAR_20 < (VAR_15->rep->an_numrrsets +
  VAR_15->rep->ns_numrrsets); VAR_20++) {
  VAR_19 = VAR_15->rep->rrsets[VAR_20];


  if(FUNC_4(VAR_19->rk.type) == VAR_7 &&
   FUNC_2(VAR_16->qname, VAR_19->rk.dname)) {

   if( (VAR_15->rep->flags&VAR_1) &&
    !(VAR_15->rep->flags&VAR_0) && !VAR_14)
    return VAR_11;
   return VAR_8;
  }
 }




 for(VAR_20 = VAR_15->rep->an_numrrsets; VAR_20 < (VAR_15->rep->an_numrrsets +
  VAR_15->rep->ns_numrrsets); VAR_20++) {
  VAR_19 = VAR_15->rep->rrsets[VAR_20];



  if(FUNC_4(VAR_19->rk.type) == VAR_6) {


   if(FUNC_5(VAR_19->rk.dname, VAR_18) == 0) {


    if( (VAR_15->rep->flags&VAR_1) &&
     !(VAR_15->rep->flags&VAR_0) && !VAR_14)
     return VAR_11;
    if(VAR_15->rep->an_numrrsets==0 &&
     !(VAR_15->rep->flags&VAR_0) && !VAR_14)
     return VAR_13;
    return VAR_8;
   }


   if(FUNC_2(VAR_18, VAR_19->rk.dname)) {
    if(VAR_14)
     return VAR_13;
    return VAR_10;
   }



   if(FUNC_2(VAR_19->rk.dname, VAR_18)) {
    return VAR_12;
   }

  }
 }




 if( (VAR_15->rep->flags&VAR_1) && !(VAR_15->rep->flags&VAR_0) && !VAR_14)
  return VAR_11;
 return VAR_8;
}

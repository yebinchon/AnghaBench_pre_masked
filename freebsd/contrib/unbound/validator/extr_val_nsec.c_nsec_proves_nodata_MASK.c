
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int * dname; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct query_info {scalar_t__ qtype; int * qname; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,size_t*) ;
 scalar_t__ FUNC_4 (int *,int *) ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int FUNC_6 (int **) ;
 int FUNC_7 (struct ub_packed_rrset_key*,int **,size_t*) ;
 scalar_t__ FUNC_8 (struct ub_packed_rrset_key*,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,int *) ;

int FUNC_10(struct ub_packed_rrset_key* VAR_4,
 struct query_info* VAR_5, uint8_t** VAR_6)
{
 FUNC_6(VAR_6);
 if(FUNC_9(VAR_4->rk.dname, VAR_5->qname) != 0) {
  uint8_t* VAR_7;
  size_t VAR_8;
  if(!FUNC_7(VAR_4, &VAR_7, &VAR_8))
   return 0;
  if(FUNC_4(VAR_7, VAR_5->qname) &&
   FUNC_0(VAR_4->rk.dname,
    VAR_5->qname) < 0) {
   return 1;
  }
  if(FUNC_2(VAR_4->rk.dname)) {

   uint8_t* VAR_9 = VAR_4->rk.dname;
   size_t VAR_10 = VAR_4->rk.dname_len;
   FUNC_3(&VAR_9, &VAR_10);




   if(FUNC_4(VAR_5->qname, VAR_9)) {


    if(FUNC_8(VAR_4, VAR_0)) {

     return 0;
    }
    if(FUNC_8(VAR_4, VAR_2) &&
       !FUNC_8(VAR_4, VAR_3)) {

     return 0;
    }
    if(FUNC_8(VAR_4, VAR_5->qtype)) {
     return 0;
    }
    *VAR_6 = VAR_9;
    return 1;
   }
  } else {


   while (FUNC_0(VAR_4->rk.dname, VAR_7) < 0) {


    if (FUNC_5(VAR_5->qname, VAR_7))
     break;



    if (FUNC_2(VAR_7)) {
     size_t VAR_11 = VAR_8;
     uint8_t* VAR_12 = VAR_7;
     FUNC_3(&VAR_12, &VAR_11);
     if(FUNC_4(VAR_5->qname, VAR_12)) {
      *VAR_6 = VAR_12;
      return 1;
     }
    }
    FUNC_3(&VAR_7, &VAR_8);
   }
  }



  return 0;
 }


 if(FUNC_8(VAR_4, VAR_5->qtype)) {
  return 0;
 }


 if(FUNC_8(VAR_4, VAR_0)) {
  return 0;
 }






 if(VAR_5->qtype != VAR_1 &&
  FUNC_8(VAR_4, VAR_2) &&
  !FUNC_8(VAR_4, VAR_3)) {
  return 0;
 } else if(VAR_5->qtype == VAR_1 &&
  FUNC_8(VAR_4, VAR_3) &&
  !FUNC_1(VAR_5->qname)) {
  return 0;
 }

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int type; int * dname; } ;
struct ub_packed_rrset_key {TYPE_3__ rk; } ;
struct TYPE_5__ {int qname; } ;
struct dns_msg {TYPE_2__ qinfo; TYPE_1__* rep; } ;
struct delegpt {int * name; } ;
struct TYPE_4__ {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int *) ;
 int FUNC_3 (struct ub_packed_rrset_key*,int **,size_t*) ;

int
FUNC_4(struct dns_msg* VAR_6, struct delegpt* VAR_7)
{


 size_t VAR_8;


 for(VAR_8=0; VAR_8 < VAR_6->rep->an_numrrsets; VAR_8++) {
  struct ub_packed_rrset_key* VAR_9 = VAR_6->rep->rrsets[VAR_8];
  if(FUNC_1(VAR_9->rk.type) == VAR_1 ||
   FUNC_1(VAR_9->rk.type) == VAR_0) {



   uint8_t* VAR_10;
   size_t VAR_11;
   FUNC_3(VAR_9, &VAR_10, &VAR_11);
   if(VAR_10 && FUNC_2(VAR_7->name, VAR_10)==0)
    return 0;
   return 1;
  }
  if(FUNC_1(VAR_9->rk.type) == VAR_2)
   return 0;
 }
 for(VAR_8=VAR_6->rep->an_numrrsets;
  VAR_8 < VAR_6->rep->an_numrrsets + VAR_6->rep->ns_numrrsets; VAR_8++) {
  struct ub_packed_rrset_key* VAR_12 = VAR_6->rep->rrsets[VAR_8];
  if(FUNC_1(VAR_12->rk.type) == VAR_5) {
   if(FUNC_0(VAR_12->rk.dname, VAR_6->qinfo.qname))
    return 1;
   if(FUNC_2(VAR_12->rk.dname, VAR_7->name)==0)
    return 0;
  }
  if(FUNC_1(VAR_12->rk.type) == VAR_3 ||
   FUNC_1(VAR_12->rk.type) == VAR_4) {
   uint8_t* VAR_13;
   size_t VAR_14;
   FUNC_3(VAR_12, &VAR_13, &VAR_14);
   if(VAR_13 && FUNC_2(VAR_7->name, VAR_13)==0)
    return 0;
   return 1;
  }
 }

 return 1;
}

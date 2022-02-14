
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int dname; int type; int rrset_class; } ;
struct ub_packed_rrset_key {TYPE_2__ rk; } ;
struct query_info {scalar_t__ qtype; size_t qname_len; scalar_t__ qclass; int * qname; } ;
struct dns_msg {TYPE_1__* rep; } ;
typedef enum response_type { ____Placeholder_response_type } response_type ;
struct TYPE_3__ {scalar_t__ an_numrrsets; struct ub_packed_rrset_key** rrsets; int flags; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ub_packed_rrset_key*,int **,size_t*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *,int ) ;

enum response_type
FUNC_4(struct dns_msg* VAR_5,
 struct query_info* VAR_6)
{

 if(FUNC_0(VAR_5->rep->flags) == VAR_0)
  return VAR_3;
 if(VAR_6->qtype == VAR_1)
  return VAR_3;



 if(VAR_5->rep->an_numrrsets > 0) {




  uint8_t* VAR_7 = VAR_6->qname;
  size_t VAR_8 = VAR_6->qname_len;
  size_t VAR_9;
  for(VAR_9=0; VAR_9<VAR_5->rep->an_numrrsets; VAR_9++) {
   struct ub_packed_rrset_key* VAR_10 = VAR_5->rep->rrsets[VAR_9];






   if(FUNC_2(VAR_10->rk.type) == VAR_6->qtype &&
    FUNC_2(VAR_10->rk.rrset_class) == VAR_6->qclass &&
    FUNC_3(VAR_7, VAR_10->rk.dname) == 0) {
    return VAR_3;
   }



   if(FUNC_2(VAR_10->rk.type) == VAR_2 &&
    FUNC_3(VAR_7, VAR_10->rk.dname) == 0) {
    FUNC_1(VAR_10, &VAR_7, &VAR_8);
   }
  }




  if(VAR_7 != VAR_6->qname) {
   return VAR_4;
  }
 }



 return VAR_3;
}

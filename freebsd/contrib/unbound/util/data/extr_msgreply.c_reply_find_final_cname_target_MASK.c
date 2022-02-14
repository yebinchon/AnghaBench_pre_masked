
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {size_t dname_len; int dname; int rrset_class; int type; } ;
struct ub_packed_rrset_key {TYPE_1__ rk; } ;
struct reply_info {size_t an_numrrsets; struct ub_packed_rrset_key** rrsets; } ;
struct query_info {size_t qname_len; scalar_t__ qclass; int * qname; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct ub_packed_rrset_key*,int **,size_t*) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int *,int ) ;

uint8_t*
FUNC_3(struct query_info* VAR_1, struct reply_info* VAR_2)
{
 uint8_t* VAR_3 = VAR_1->qname;
 size_t VAR_4 = VAR_1->qname_len;
 size_t VAR_5;
 for(VAR_5=0; VAR_5<VAR_2->an_numrrsets; VAR_5++) {
  struct ub_packed_rrset_key* VAR_6 = VAR_2->rrsets[VAR_5];

  if(FUNC_1(VAR_6->rk.type) == VAR_0 &&
   FUNC_1(VAR_6->rk.rrset_class) == VAR_1->qclass &&
   VAR_4 == VAR_6->rk.dname_len &&
   FUNC_2(VAR_3, VAR_6->rk.dname) == 0) {
   FUNC_0(VAR_6, &VAR_3, &VAR_4);
  }
 }
 if(VAR_3 != VAR_1->qname)
  return VAR_3;
 return ((void*)0);
}

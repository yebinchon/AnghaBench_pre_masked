
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int type; int dname; } ;
struct ub_packed_rrset_key {TYPE_3__ rk; } ;
struct module_qstate {int dummy; } ;
struct TYPE_4__ {size_t qname_len; int * qname; } ;
struct iter_qstate {TYPE_1__ qchase; } ;
struct dns_msg {TYPE_2__* rep; } ;
struct TYPE_5__ {size_t an_numrrsets; size_t ns_numrrsets; struct ub_packed_rrset_key** rrsets; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (int *,int ) ;
 int FUNC_1 (struct ub_packed_rrset_key*,int **,size_t*) ;
 int FUNC_2 (struct module_qstate*,struct iter_qstate*,struct ub_packed_rrset_key*) ;
 int FUNC_3 (struct module_qstate*,struct iter_qstate*,struct ub_packed_rrset_key*) ;
 int FUNC_4 (struct iter_qstate*,struct ub_packed_rrset_key*) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static int
FUNC_7(struct module_qstate* VAR_4, struct iter_qstate* VAR_5,
        struct dns_msg* VAR_6, uint8_t** VAR_7, size_t* VAR_8)
{
 size_t VAR_9;

 *VAR_7 = VAR_5->qchase.qname;
 *VAR_8 = VAR_5->qchase.qname_len;



 for(VAR_9=0; VAR_9<VAR_6->rep->an_numrrsets; VAR_9++) {
  struct ub_packed_rrset_key* VAR_10 = VAR_6->rep->rrsets[VAR_9];




  if(FUNC_5(VAR_10->rk.type) == VAR_1 &&
   FUNC_0(*VAR_7, VAR_10->rk.dname) &&
   !FUNC_4(VAR_5, VAR_10)) {
   if(!FUNC_2(VAR_4, VAR_5, VAR_10))
    return 0;
   continue;
  }

  if(FUNC_5(VAR_10->rk.type) == VAR_0 &&
   FUNC_6(*VAR_7, VAR_10->rk.dname) == 0 &&
   !FUNC_4(VAR_5, VAR_10)) {

   if(!FUNC_2(VAR_4, VAR_5, VAR_10))
    return 0;
   FUNC_1(VAR_10, VAR_7, VAR_8);
  }


 }

 for(VAR_9=VAR_6->rep->an_numrrsets; VAR_9<VAR_6->rep->an_numrrsets +
  VAR_6->rep->ns_numrrsets; VAR_9++) {
  struct ub_packed_rrset_key* VAR_11 = VAR_6->rep->rrsets[VAR_9];

  if(FUNC_5(VAR_11->rk.type) == VAR_2 ||
   FUNC_5(VAR_11->rk.type) == VAR_3) {
   if(!FUNC_3(VAR_4, VAR_5, VAR_11))
    return 0;
  }
 }
 return 1;
}

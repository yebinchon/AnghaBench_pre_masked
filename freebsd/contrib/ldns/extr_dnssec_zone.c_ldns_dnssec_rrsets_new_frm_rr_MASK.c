
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
struct TYPE_8__ {scalar_t__ type; TYPE_1__* signatures; TYPE_2__* rrs; } ;
typedef TYPE_3__ ldns_dnssec_rrsets ;
struct TYPE_7__ {int * rr; } ;
struct TYPE_6__ {int * rr; } ;


 scalar_t__ VAR_0 ;
 void* FUNC_0 () ;
 TYPE_3__* FUNC_1 () ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static ldns_dnssec_rrsets *
FUNC_5(ldns_rr *VAR_1)
{
 ldns_dnssec_rrsets *VAR_2;
 ldns_rr_type VAR_3;
 bool VAR_4;

 VAR_2 = FUNC_1();
 VAR_3 = FUNC_3(VAR_1);
 if (VAR_3 == VAR_0) {
  VAR_4 = 1;
  VAR_3 = FUNC_2(FUNC_4(VAR_1));
 } else {
  VAR_4 = 0;
 }
 if (!VAR_4) {
  VAR_2->rrs = FUNC_0();
  VAR_2->rrs->rr = VAR_1;
 } else {
  VAR_2->signatures = FUNC_0();
  VAR_2->signatures->rr = VAR_1;
 }
 VAR_2->type = VAR_3;
 return VAR_2;
}

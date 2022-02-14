
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int ldns_status ;
typedef scalar_t__ ldns_rr_type ;
typedef int ldns_rr ;
struct TYPE_5__ {scalar_t__ rrsets; TYPE_2__* nsec_signatures; int * nsec; } ;
typedef TYPE_1__ ldns_dnssec_name ;
struct TYPE_6__ {int * rr; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (TYPE_2__*,int *) ;
 TYPE_2__* FUNC_1 () ;
 int FUNC_2 (scalar_t__,int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

ldns_status
FUNC_7(ldns_dnssec_name *VAR_5,
        ldns_rr *VAR_6)
{
 ldns_status VAR_7 = VAR_4;
 ldns_rr_type VAR_8;
 ldns_rr_type VAR_9 = 0;



 if (!VAR_5 || !VAR_6) {
  return VAR_3;
 }

 VAR_8 = FUNC_5(VAR_6);

 if (VAR_8 == VAR_2) {
  VAR_9 = FUNC_4(FUNC_6(VAR_6));
 }

 if (VAR_8 == VAR_0 ||
     VAR_8 == VAR_1) {

  VAR_5->nsec = VAR_6;
 } else if (VAR_9 == VAR_0 ||
    VAR_9 == VAR_1) {
  if (VAR_5->nsec_signatures) {
   VAR_7 = FUNC_0(VAR_5->nsec_signatures, VAR_6);
  } else {
   VAR_5->nsec_signatures = FUNC_1();
   VAR_5->nsec_signatures->rr = VAR_6;
  }
 } else {

  if (VAR_5->rrsets) {
   VAR_7 = FUNC_2(VAR_5->rrsets, VAR_6);
  } else {
   VAR_5->rrsets = FUNC_3();
   VAR_7 = FUNC_2(VAR_5->rrsets, VAR_6);
  }
 }
 return VAR_7;
}

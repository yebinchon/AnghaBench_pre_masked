
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_status ;
typedef int ldns_rr_type ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;


 int VAR_0 ;
 int VAR_1 ;

ldns_status
FUNC_0(ldns_dnssec_rrsets *VAR_2,
        ldns_rr_type VAR_3)
{
 if (VAR_2) {
  VAR_2->type = VAR_3;
  return VAR_1;
 }
 return VAR_0;
}

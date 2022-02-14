
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr ;
struct TYPE_3__ {int * nsec; } ;
typedef TYPE_1__ ldns_dnssec_name ;



void
FUNC_0(ldns_dnssec_name *VAR_0, ldns_rr *VAR_1)
{
 if (VAR_0 && VAR_1) {
  VAR_0->nsec = VAR_1;
 }
}

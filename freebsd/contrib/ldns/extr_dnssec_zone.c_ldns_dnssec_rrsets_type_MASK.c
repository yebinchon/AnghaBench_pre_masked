
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr_type ;
struct TYPE_3__ {int type; } ;
typedef TYPE_1__ ldns_dnssec_rrsets ;



ldns_rr_type
FUNC_0(const ldns_dnssec_rrsets *VAR_0)
{
 if (VAR_0) {
  return VAR_0->type;
 } else {
  return 0;
 }
}

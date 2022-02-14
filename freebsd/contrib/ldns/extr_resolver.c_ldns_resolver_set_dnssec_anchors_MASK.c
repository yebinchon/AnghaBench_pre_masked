
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr_list ;
struct TYPE_3__ {int * _dnssec_anchors; } ;
typedef TYPE_1__ ldns_resolver ;



void
FUNC_0(ldns_resolver *VAR_0, ldns_rr_list * VAR_1)
{
  VAR_0->_dnssec_anchors = VAR_1;
}

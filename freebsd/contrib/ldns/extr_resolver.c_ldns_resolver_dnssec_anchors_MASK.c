
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_rr_list ;
struct TYPE_3__ {int * _dnssec_anchors; } ;
typedef TYPE_1__ ldns_resolver ;



ldns_rr_list *
FUNC_0(const ldns_resolver *VAR_0)
{
    return VAR_0->_dnssec_anchors;
}

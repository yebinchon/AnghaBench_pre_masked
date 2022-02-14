
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ldns_signing_algorithm ;
struct TYPE_3__ {int _alg; } ;
typedef TYPE_1__ ldns_key ;



ldns_signing_algorithm
FUNC_0(const ldns_key *VAR_0)
{
 return VAR_0->_alg;
}

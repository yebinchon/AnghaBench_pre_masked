
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct snmp_context {TYPE_1__* scratch; } ;
struct asn_oid {int dummy; } ;
struct TYPE_2__ {scalar_t__ ptr1; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(struct snmp_context *VAR_0, struct asn_oid *VAR_1)
{
 *VAR_1 = *(struct asn_oid *)VAR_0->scratch->ptr1;
 FUNC_0(VAR_0->scratch->ptr1);
}

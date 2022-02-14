
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct asn_oid {int dummy; } ;
struct TYPE_2__ {struct asn_oid oid; } ;
struct snmp_value {TYPE_1__ v; } ;


 int VAR_0 ;

int
FUNC_0(struct snmp_value *VAR_1, const struct asn_oid *VAR_2)
{
 VAR_1->v.oid = *VAR_2;
 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct asn_oid {int dummy; } ;
struct TYPE_4__ {struct asn_oid oid; } ;
struct snmp_value {TYPE_2__ v; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct TYPE_3__ {int * ptr1; } ;


 int VAR_0 ;
 int * FUNC_0 (int) ;

int
FUNC_1(struct snmp_value *VAR_1, struct snmp_context *VAR_2,
    struct asn_oid *VAR_3)
{
 if ((VAR_2->scratch->ptr1 = FUNC_0(sizeof(struct asn_oid))) == ((void*)0))
  return (VAR_0);
 *(struct asn_oid *)VAR_2->scratch->ptr1 = *VAR_3;
 *VAR_3 = VAR_1->v.oid;

 return (0);
}

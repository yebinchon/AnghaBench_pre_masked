
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
struct TYPE_4__ {int* ipaddress; } ;
struct snmp_value {TYPE_2__ v; } ;
struct snmp_context {TYPE_1__* scratch; } ;
struct TYPE_3__ {int int1; } ;



int
FUNC_0(struct snmp_value *VAR_0, struct snmp_context *VAR_1, u_char *VAR_2)
{
 VAR_1->scratch->int1 = (VAR_2[0] << 24) | (VAR_2[1] << 16) | (VAR_2[2] << 8)
     | VAR_2[3];

 VAR_2[0] = VAR_0->v.ipaddress[0];
 VAR_2[1] = VAR_0->v.ipaddress[1];
 VAR_2[2] = VAR_0->v.ipaddress[2];
 VAR_2[3] = VAR_0->v.ipaddress[3];

 return (0);
}

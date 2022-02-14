
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u_char ;
struct TYPE_2__ {void** ipaddress; } ;
struct snmp_value {TYPE_1__ v; } ;


 int VAR_0 ;

int
FUNC_0(struct snmp_value *VAR_1, u_char *VAR_2)
{
 VAR_1->v.ipaddress[0] = VAR_2[0];
 VAR_1->v.ipaddress[1] = VAR_2[1];
 VAR_1->v.ipaddress[2] = VAR_2[2];
 VAR_1->v.ipaddress[3] = VAR_2[3];

 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u_char ;
struct snmp_context {TYPE_1__* scratch; } ;
struct TYPE_2__ {int int1; } ;



void
FUNC_0(struct snmp_context *VAR_0, u_char *VAR_1)
{
 VAR_1[0] = VAR_0->scratch->int1 >> 24;
 VAR_1[1] = VAR_0->scratch->int1 >> 16;
 VAR_1[2] = VAR_0->scratch->int1 >> 8;
 VAR_1[3] = VAR_0->scratch->int1;
}

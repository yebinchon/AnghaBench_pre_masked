
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {scalar_t__ syntax; TYPE_2__ v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1(struct snmp_value *VAR_2)
{

 if (VAR_2->syntax == VAR_1) {
  FUNC_0(VAR_2->v.octetstring.octets);
  VAR_2->v.octetstring.octets = ((void*)0);
 }
 VAR_2->syntax = VAR_0;
}

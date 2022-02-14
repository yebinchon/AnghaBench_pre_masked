
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int * octets; } ;
struct TYPE_4__ {TYPE_1__ octetstring; } ;
struct snmp_value {scalar_t__ syntax; TYPE_2__ v; int var; } ;


 scalar_t__ VAR_0 ;
 int * FUNC_0 (int ) ;
 int FUNC_1 (int *,int *,int ) ;

int
FUNC_2(struct snmp_value *VAR_1, const struct snmp_value *VAR_2)
{
 VAR_1->var = VAR_2->var;
 VAR_1->syntax = VAR_2->syntax;

 if (VAR_2->syntax == VAR_0) {
  if ((VAR_1->v.octetstring.len = VAR_2->v.octetstring.len) == 0)
   VAR_1->v.octetstring.octets = ((void*)0);
  else {
   VAR_1->v.octetstring.octets = FUNC_0(VAR_1->v.octetstring.len);
   if (VAR_1->v.octetstring.octets == ((void*)0))
    return (-1);
   (void)FUNC_1(VAR_1->v.octetstring.octets,
       VAR_2->v.octetstring.octets, VAR_1->v.octetstring.len);
  }
 } else
  VAR_1->v = VAR_2->v;
 return (0);
}

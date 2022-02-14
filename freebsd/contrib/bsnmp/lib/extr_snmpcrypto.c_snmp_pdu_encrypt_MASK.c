
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ priv_proto; } ;
struct snmp_pdu {TYPE_1__ user; } ;
typedef enum snmp_code { ____Placeholder_snmp_code } snmp_code ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

enum snmp_code
FUNC_0(const struct snmp_pdu *VAR_3)
{
 if (VAR_3->user.priv_proto != VAR_2)
  return (VAR_0);

 return (VAR_1);
}

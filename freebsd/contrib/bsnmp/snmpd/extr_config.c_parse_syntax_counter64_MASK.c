
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int counter64; } ;
struct snmp_value {TYPE_1__ v; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct snmp_value *VAR_3)
{
 if (VAR_2 != VAR_0)
  FUNC_1("bad COUNTER64 syntax");

 VAR_3->v.counter64 = VAR_1;
 FUNC_0();
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int uint32; } ;
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
  FUNC_1("bad number syntax");
 if (VAR_1 > 0xffffffff)
  FUNC_1("number too large");
 VAR_3->v.uint32 = VAR_1;
 FUNC_0();
}

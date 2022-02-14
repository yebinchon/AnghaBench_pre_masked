
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ len; scalar_t__* subs; } ;
struct TYPE_4__ {TYPE_1__ oid; } ;
struct snmp_value {TYPE_2__ v; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 char FUNC_0 () ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (char*) ;
 scalar_t__ VAR_4 ;

__attribute__((used)) static void
FUNC_2(struct snmp_value *VAR_5)
{
 VAR_5->v.oid.len = 0;

 if (VAR_4 != VAR_2)
  return;

 for (;;) {
  if (VAR_4 != VAR_2)
   FUNC_1("bad OID syntax");
  if (VAR_3 > VAR_0)
   FUNC_1("subid too large");
  if (VAR_5->v.oid.len == VAR_1)
   FUNC_1("OID too long");
  VAR_5->v.oid.subs[VAR_5->v.oid.len++] = VAR_3;
  if (FUNC_0() != '.')
   break;
  FUNC_0();
 }
}

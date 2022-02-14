
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u_int ;
struct TYPE_3__ {int len; int* octets; } ;
struct TYPE_4__ {int integer; int uint32; int counter64; int * ipaddress; int oid; TYPE_1__ octetstring; } ;
struct snmp_value {int syntax; TYPE_2__ v; int var; } ;


 int VAR_0 ;
 int FUNC_0 (int *,char*) ;
 int FUNC_1 (char*,...) ;

__attribute__((used)) static void
FUNC_2(const struct snmp_value *VAR_1)
{
 u_int VAR_2;
 char VAR_3[VAR_0];

 FUNC_1("%s=", FUNC_0(&VAR_1->var, VAR_3));
 switch (VAR_1->syntax) {

   case 131:
  FUNC_1("NULL");
  break;

   case 135:
  FUNC_1("INTEGER %d", VAR_1->v.integer);
  break;

   case 130:
  FUNC_1("OCTET STRING %lu:", VAR_1->v.octetstring.len);
  for (VAR_2 = 0; VAR_2 < VAR_1->v.octetstring.len; VAR_2++)
   FUNC_1(" %02x", VAR_1->v.octetstring.octets[VAR_2]);
  break;

   case 129:
  FUNC_1("OID %s", FUNC_0(&VAR_1->v.oid, VAR_3));
  break;

   case 134:
  FUNC_1("IPADDRESS %u.%u.%u.%u", VAR_1->v.ipaddress[0],
      VAR_1->v.ipaddress[1], VAR_1->v.ipaddress[2], VAR_1->v.ipaddress[3]);
  break;

   case 139:
  FUNC_1("COUNTER %u", VAR_1->v.uint32);
  break;

   case 136:
  FUNC_1("GAUGE %u", VAR_1->v.uint32);
  break;

   case 128:
  FUNC_1("TIMETICKS %u", VAR_1->v.uint32);
  break;

   case 138:
  FUNC_1("COUNTER64 %lld", VAR_1->v.counter64);
  break;

   case 132:
  FUNC_1("NoSuchObject");
  break;

   case 133:
  FUNC_1("NoSuchInstance");
  break;

   case 137:
  FUNC_1("EndOfMibView");
  break;

   default:
  FUNC_1("UNKNOWN SYNTAX %u", VAR_1->syntax);
  break;
 }
}

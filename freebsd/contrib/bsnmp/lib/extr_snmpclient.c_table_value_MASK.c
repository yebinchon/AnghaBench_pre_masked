
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uint64_t ;
typedef int uint32_t ;
typedef size_t u_int ;
typedef char u_char ;
struct asn_oid {int dummy; } ;
struct TYPE_8__ {int len; int octets; } ;
struct TYPE_10__ {size_t counter64; int uint32; int ipaddress; struct asn_oid oid; TYPE_3__ octetstring; int integer; } ;
struct TYPE_6__ {scalar_t__* subs; } ;
struct snmp_value {scalar_t__ syntax; TYPE_5__ v; TYPE_1__ var; } ;
struct TYPE_7__ {int len; } ;
struct snmp_table {size_t index_size; TYPE_4__* entries; TYPE_2__ table; } ;
struct entry {size_t found; } ;
typedef int int32_t ;
struct TYPE_9__ {scalar_t__ syntax; scalar_t__ subid; int offset; } ;
 int FUNC_0 () ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (int *,char*,...) ;
 int VAR_0 ;

__attribute__((used)) static int
FUNC_4(const struct snmp_table *VAR_1, struct entry *VAR_2,
    const struct snmp_value *VAR_3)
{
 u_int VAR_4;
 u_char *VAR_5;

 for (VAR_4 = VAR_1->index_size;
     VAR_1->entries[VAR_4].syntax != 131; VAR_4++)
  if (VAR_1->entries[VAR_4].subid ==
      VAR_3->var.subs[VAR_1->table.len + 1])
   break;
 if (VAR_1->entries[VAR_4].syntax == 131)
  return (0);


 if (VAR_3->syntax != VAR_1->entries[VAR_4].syntax) {
  FUNC_3(&VAR_0, "bad syntax (%u instead of %u)", VAR_3->syntax,
      VAR_1->entries[VAR_4].syntax);
  return (-1);
 }

 switch (VAR_3->syntax) {

   case 135:
  *(int32_t *)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset) =
      VAR_3->v.integer;
  break;

   case 130:
  if ((VAR_5 = FUNC_1(VAR_3->v.octetstring.len + 1)) == ((void*)0)) {
   FUNC_3(&VAR_0, "no memory for string");
   return (-1);
  }
  FUNC_2(VAR_5, VAR_3->v.octetstring.octets, VAR_3->v.octetstring.len);
  VAR_5[VAR_3->v.octetstring.len] = '\0';
  *(u_char **)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset) =
      VAR_5;
  *(size_t *)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset +
      sizeof(u_char *)) = VAR_3->v.octetstring.len;
  break;

   case 129:
  *(struct asn_oid *)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset) =
      VAR_3->v.oid;
  break;

   case 134:
  FUNC_2((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset,
      VAR_3->v.ipaddress, 4);
  break;

   case 139:
   case 136:
   case 128:
  *(uint32_t *)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset) =
      VAR_3->v.uint32;
  break;

   case 138:
  *(uint64_t *)(void *)((u_char *)VAR_2 + VAR_1->entries[VAR_4].offset) =
      VAR_3->v.counter64;
  break;

   case 131:
   case 132:
   case 133:
   case 137:
  FUNC_0();
 }
 VAR_2->found |= (uint64_t)1 << VAR_4;

 return (0);
}

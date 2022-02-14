
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_long ;
typedef char u_char ;
struct TYPE_5__ {int len; int octets; } ;
struct TYPE_6__ {TYPE_2__ octetstring; } ;
struct snmp_value {TYPE_3__ v; } ;
struct snmp_context {TYPE_1__* scratch; } ;
typedef int ssize_t ;
struct TYPE_4__ {char* ptr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int) ;

int
FUNC_2(struct snmp_value *VAR_2, struct snmp_context *VAR_3,
    ssize_t VAR_4, u_char **VAR_5)
{
 if (VAR_4 != -1 && VAR_2->v.octetstring.len != (u_long)VAR_4)
  return (VAR_0);

 VAR_3->scratch->ptr1 = *VAR_5;

 if ((*VAR_5 = FUNC_0(VAR_2->v.octetstring.len + 1)) == ((void*)0)) {
  *VAR_5 = VAR_3->scratch->ptr1;
  return (VAR_1);
 }

 FUNC_1(*VAR_5, VAR_2->v.octetstring.octets, VAR_2->v.octetstring.len);
 (*VAR_5)[VAR_2->v.octetstring.len] = '\0';

 return (0);
}

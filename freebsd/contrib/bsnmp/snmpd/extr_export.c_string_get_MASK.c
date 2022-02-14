
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u_long ;
typedef int u_char ;
struct TYPE_4__ {int * octets; scalar_t__ len; } ;
struct TYPE_3__ {TYPE_2__ octetstring; } ;
struct snmp_value {TYPE_1__ v; } ;
typedef int ssize_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (size_t) ;
 int FUNC_1 (int *,int const*,size_t) ;
 int FUNC_2 (int const*) ;

int
FUNC_3(struct snmp_value *VAR_2, const u_char *VAR_3, ssize_t VAR_4)
{
 if (VAR_3 == ((void*)0)) {
  VAR_2->v.octetstring.len = 0;
  VAR_2->v.octetstring.octets = ((void*)0);
  return (VAR_0);
 }
 if (VAR_4 == -1)
  VAR_4 = FUNC_2(VAR_3);
 if ((VAR_2->v.octetstring.octets = FUNC_0((size_t)VAR_4)) == ((void*)0)) {
  VAR_2->v.octetstring.len = 0;
  return (VAR_1);
 }
 VAR_2->v.octetstring.len = (u_long)VAR_4;
 FUNC_1(VAR_2->v.octetstring.octets, VAR_3, (size_t)VAR_4);
 return (VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_4__ {int in6; int in; } ;
struct TYPE_5__ {int family; TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (unsigned char const*,unsigned char const*,unsigned int) ;

isc_result_t
FUNC_1(const isc_netaddr_t *VAR_4, unsigned int VAR_5) {
 static const unsigned char VAR_6[16] = { 0 };
 unsigned int VAR_7, VAR_8, VAR_9 = 0;
 const unsigned char *VAR_10;

 switch (VAR_4->family) {
 case 129:
  VAR_10 = (const unsigned char *) &VAR_4->type.in;
  VAR_9 = 4;
  if (VAR_5 > 32)
   return (VAR_2);
  break;
 case 128:
  VAR_10 = (const unsigned char *) &VAR_4->type.in6;
  VAR_9 = 16;
  if (VAR_5 > 128)
   return (VAR_2);
  break;
 default:
  return (VAR_1);
 }
 VAR_8 = VAR_5 / 8;
 VAR_7 = VAR_5 % 8;
 if (VAR_7 != 0) {
  if ((VAR_10[VAR_8] & (0xff>>VAR_7)) != 0U)
   return (VAR_0);
  VAR_8++;
 }
 if (FUNC_0(VAR_10 + VAR_8, VAR_6, VAR_9 - VAR_8) != 0)
  return (VAR_0);
 return (VAR_3);
}

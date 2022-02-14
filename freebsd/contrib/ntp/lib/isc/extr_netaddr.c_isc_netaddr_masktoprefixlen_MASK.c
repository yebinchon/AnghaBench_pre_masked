
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

isc_result_t
FUNC_0(const isc_netaddr_t *VAR_3, unsigned int *VAR_4) {
 unsigned int VAR_5 = 0, VAR_6 = 0, VAR_7 = 0, VAR_8;
 const unsigned char *VAR_9;

 switch (VAR_3->family) {
 case 129:
  VAR_9 = (const unsigned char *) &VAR_3->type.in;
  VAR_7 = 4;
  break;
 case 128:
  VAR_9 = (const unsigned char *) &VAR_3->type.in6;
  VAR_7 = 16;
  break;
 default:
  return (VAR_1);
 }
 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_9[VAR_8] != 0xFF)
   break;
 }
 VAR_6 = VAR_8;
 if (VAR_8 < VAR_7) {
  unsigned int VAR_10 = VAR_9[VAR_6];
  while ((VAR_10 & 0x80) != 0 && VAR_5 < 8) {
   VAR_10 <<= 1; VAR_5++;
  }
  if ((VAR_10 & 0xFF) != 0)
   return (VAR_0);
  VAR_8++;
 }
 for (; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_9[VAR_8] != 0)
   return (VAR_0);
 }
 *VAR_4 = VAR_6 * 8 + VAR_5;
 return (VAR_2);
}

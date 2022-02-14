
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int in6; int in; } ;
struct TYPE_6__ {int family; scalar_t__ zone; TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;
typedef int isc_boolean_t ;




 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char const*,unsigned char const*,unsigned int) ;

isc_boolean_t
FUNC_3(const isc_netaddr_t *VAR_2, const isc_netaddr_t *VAR_3,
       unsigned int VAR_4)
{
 const unsigned char *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 unsigned int VAR_7 = 0;
 unsigned int VAR_8;
 unsigned int VAR_9;

 FUNC_1(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 if (VAR_2->family != VAR_3->family)
  return (VAR_0);

 if (VAR_2->zone != VAR_3->zone && VAR_3->zone != 0)
  return (VAR_0);

 switch (VAR_2->family) {
 case 129:
  VAR_5 = (const unsigned char *) &VAR_2->type.in;
  VAR_6 = (const unsigned char *) &VAR_3->type.in;
  VAR_7 = 4;
  break;
 case 128:
  VAR_5 = (const unsigned char *) &VAR_2->type.in6;
  VAR_6 = (const unsigned char *) &VAR_3->type.in6;
  VAR_7 = 16;
  break;
 default:
  return (VAR_0);
 }




 if (VAR_4 > VAR_7 * 8)
  VAR_4 = VAR_7 * 8;

 VAR_8 = VAR_4 / 8;
 VAR_9 = VAR_4 % 8;

 if (VAR_8 > 0) {
  if (FUNC_2(VAR_5, VAR_6, VAR_8) != 0)
   return (VAR_0);
 }
 if (VAR_9 > 0) {
  unsigned int VAR_10, VAR_11, VAR_12;
  FUNC_0(VAR_8 < VAR_7);
  FUNC_0(VAR_9 < 8);
  VAR_10 = VAR_5[VAR_8];
  VAR_11 = VAR_6[VAR_8];
  VAR_12 = (0xFF << (8-VAR_9)) & 0xFF;
  if ((VAR_10 & VAR_12) != (VAR_11 & VAR_12))
   return (VAR_0);
 }
 return (VAR_1);
}

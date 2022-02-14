
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int zbuf ;
typedef int isc_result_t ;
struct TYPE_4__ {char* un; int in6; int in; } ;
struct TYPE_5__ {int family; int zone; TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;
typedef int isc_buffer_t ;
typedef int abuf ;





 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int,void const*,char*,int) ;
 unsigned int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned char const*,int) ;
 int FUNC_5 (char*,int,char*,int) ;
 unsigned int FUNC_6 (char*) ;

isc_result_t
FUNC_7(const isc_netaddr_t *VAR_3, isc_buffer_t *VAR_4) {
 char VAR_5[sizeof("xxxx:xxxx:xxxx:xxxx:xxxx:xxxx:255.255.255.255")];
 char VAR_6[sizeof("%4294967295")];
 unsigned int VAR_7;
 int VAR_8;
 const char *VAR_9;
 const void *VAR_10;

 FUNC_1(VAR_3 != ((void*)0));

 switch (VAR_3->family) {
 case 130:
  VAR_10 = &VAR_3->type.in;
  break;
 case 129:
  VAR_10 = &VAR_3->type.in6;
  break;
 default:
  return (VAR_0);
 }
 VAR_9 = FUNC_2(VAR_3->family, VAR_10, VAR_5, sizeof(VAR_5));
 if (VAR_9 == ((void*)0))
  return (VAR_0);

 VAR_7 = (unsigned int)FUNC_6(VAR_5);
 FUNC_0(VAR_7 < sizeof(VAR_5));

 VAR_8 = 0;
 if (VAR_3->family == 129 && VAR_3->zone != 0) {
  VAR_8 = FUNC_5(VAR_6, sizeof(VAR_6), "%%%u", VAR_3->zone);
  if (VAR_8 < 0)
   return (VAR_0);
  FUNC_0((unsigned int)VAR_8 < sizeof(VAR_6));
 }

 if (VAR_7 + VAR_8 > FUNC_3(VAR_4))
  return (VAR_1);

 FUNC_4(VAR_4, (unsigned char *)VAR_5, VAR_7);
 FUNC_4(VAR_4, (unsigned char *)VAR_6, VAR_8);

 return (VAR_2);
}

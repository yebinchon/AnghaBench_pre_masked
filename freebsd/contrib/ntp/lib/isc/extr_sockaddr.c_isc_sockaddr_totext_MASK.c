
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_7__ ;
typedef struct TYPE_16__ TYPE_6__ ;
typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int pbuf ;
struct TYPE_14__ {char* sun_path; } ;
struct TYPE_13__ {int sin6_port; } ;
struct TYPE_12__ {int sin_port; } ;
struct TYPE_11__ {int sa_family; } ;
struct TYPE_15__ {TYPE_4__ sunix; TYPE_3__ sin6; TYPE_2__ sin; TYPE_1__ sa; } ;
struct TYPE_16__ {TYPE_5__ type; } ;
typedef TYPE_6__ isc_sockaddr_t ;
typedef scalar_t__ isc_result_t ;
struct TYPE_17__ {int length; char* base; } ;
typedef TYPE_7__ isc_region_t ;
typedef int isc_netaddr_t ;
typedef int isc_buffer_t ;





 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_7__*) ;
 int FUNC_4 (int *,unsigned char const*,unsigned int) ;
 int FUNC_5 (int *,TYPE_6__ const*) ;
 scalar_t__ FUNC_6 (int *,int *) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,int,char*,int) ;
 scalar_t__ FUNC_9 (char*) ;

isc_result_t
FUNC_10(const isc_sockaddr_t *VAR_3, isc_buffer_t *VAR_4) {
 isc_result_t VAR_5;
 isc_netaddr_t VAR_6;
 char VAR_7[sizeof("65000")];
 unsigned int VAR_8;
 isc_region_t VAR_9;

 FUNC_1(VAR_3 != ((void*)0));






 switch (VAR_3->type.sa.sa_family) {
 case 130:
  FUNC_8(VAR_7, sizeof(VAR_7), "%u", FUNC_7(VAR_3->type.sin.sin_port));
  break;
 case 129:
  FUNC_8(VAR_7, sizeof(VAR_7), "%u", FUNC_7(VAR_3->type.sin6.sin6_port));
  break;
 default:
  return (VAR_0);
 }

 VAR_8 = (unsigned int)FUNC_9(VAR_7);
 FUNC_0(VAR_8 < sizeof(VAR_7));

 FUNC_5(&VAR_6, VAR_3);
 VAR_5 = FUNC_6(&VAR_6, VAR_4);
 if (VAR_5 != VAR_2)
  return (VAR_5);

 if (1 + VAR_8 + 1 > FUNC_2(VAR_4))
  return (VAR_1);

 FUNC_4(VAR_4, (const unsigned char *)"#", 1);
 FUNC_4(VAR_4, (const unsigned char *)VAR_7, VAR_8);




 FUNC_3(VAR_4, &VAR_9);
 FUNC_0(VAR_9.length >= 1);
 VAR_9.base[0] = '\0';

 return (VAR_2);
}

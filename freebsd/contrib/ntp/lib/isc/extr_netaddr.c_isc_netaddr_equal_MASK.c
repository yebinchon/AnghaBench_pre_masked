
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {int un; int in6; TYPE_1__ in; } ;
struct TYPE_8__ {int family; scalar_t__ zone; TYPE_2__ type; } ;
typedef TYPE_3__ isc_netaddr_t ;
typedef int isc_boolean_t ;





 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int ,int ) ;

isc_boolean_t
FUNC_3(const isc_netaddr_t *VAR_2, const isc_netaddr_t *VAR_3) {
 FUNC_0(VAR_2 != ((void*)0) && VAR_3 != ((void*)0));

 if (VAR_2->family != VAR_3->family)
  return (VAR_0);

 if (VAR_2->zone != VAR_3->zone)
  return (VAR_0);

 switch (VAR_2->family) {
 case 130:
  if (VAR_2->type.in.s_addr != VAR_3->type.in.s_addr)
   return (VAR_0);
  break;
 case 129:
  if (FUNC_1(&VAR_2->type.in6, &VAR_3->type.in6,
      sizeof(VAR_2->type.in6)) != 0 ||
      VAR_2->zone != VAR_3->zone)
   return (VAR_0);
  break;






 default:
  return (VAR_0);
 }
 return (VAR_1);
}

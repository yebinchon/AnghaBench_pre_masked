
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int in6; } ;
struct TYPE_5__ {int family; TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;
typedef int isc_boolean_t ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

isc_boolean_t
FUNC_2(isc_netaddr_t *VAR_1) {
 switch (VAR_1->family) {
 case 129:
  return (VAR_0);
 case 128:
  return (FUNC_1(FUNC_0(&VAR_1->type.in6)));
 default:
  return (VAR_0);
 }
}

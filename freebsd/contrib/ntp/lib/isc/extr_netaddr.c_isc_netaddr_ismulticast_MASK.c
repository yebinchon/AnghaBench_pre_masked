
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {int in6; TYPE_1__ in; } ;
struct TYPE_7__ {int family; TYPE_2__ type; } ;
typedef TYPE_3__ isc_netaddr_t ;
typedef int isc_boolean_t ;




 int FUNC_0 (int *) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

isc_boolean_t
FUNC_3(isc_netaddr_t *VAR_1) {
 switch (VAR_1->family) {
 case 129:
  return (FUNC_2(FUNC_1(VAR_1->type.in.s_addr)));
 case 128:
  return (FUNC_2(FUNC_0(&VAR_1->type.in6)));
 default:
  return (VAR_0);
 }
}

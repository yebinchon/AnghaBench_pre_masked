
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int s_addr; } ;
struct TYPE_6__ {TYPE_1__ in; } ;
struct TYPE_7__ {int family; TYPE_2__ type; } ;
typedef TYPE_3__ isc_netaddr_t ;
typedef int isc_boolean_t ;



 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

isc_boolean_t
FUNC_2(isc_netaddr_t *VAR_1) {
 switch (VAR_1->family) {
 case 128:
  return (FUNC_1(FUNC_0(VAR_1->type.in.s_addr)));
 default:
  return (VAR_0);
 }
}

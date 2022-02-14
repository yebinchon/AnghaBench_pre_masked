
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_3__ {scalar_t__ family; int zone; } ;
typedef TYPE_1__ isc_netaddr_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;

void
FUNC_1(isc_netaddr_t *VAR_1, isc_uint32_t VAR_2) {

 FUNC_0(VAR_1->family == VAR_0);

 VAR_1->zone = VAR_2;
}

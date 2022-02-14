
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int in6; } ;
struct TYPE_6__ {TYPE_1__ type; int family; } ;
typedef TYPE_2__ isc_netaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void
FUNC_1(isc_netaddr_t *VAR_2) {
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->family = VAR_0;
 VAR_2->type.in6 = VAR_1;
}

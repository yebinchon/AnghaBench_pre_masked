
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_5__ {struct in_addr in; } ;
struct TYPE_6__ {TYPE_1__ type; int family; } ;
typedef TYPE_2__ isc_netaddr_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int) ;

void
FUNC_1(isc_netaddr_t *VAR_1, const struct in_addr *VAR_2) {
 FUNC_0(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->family = VAR_0;
 VAR_1->type.in = *VAR_2;
}

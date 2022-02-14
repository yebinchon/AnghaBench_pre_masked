
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int s_addr; } ;
struct TYPE_7__ {TYPE_1__ in; } ;
struct TYPE_8__ {TYPE_2__ type; int family; } ;
typedef TYPE_3__ isc_netaddr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int) ;

void
FUNC_1(isc_netaddr_t *VAR_2) {
 FUNC_0(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->family = VAR_0;
 VAR_2->type.in.s_addr = VAR_1;
}

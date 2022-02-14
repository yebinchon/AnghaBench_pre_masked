
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int in6; int in; } ;
struct TYPE_9__ {scalar_t__ family; TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_2__ const*,TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *,char*,int) ;
 int FUNC_4 (TYPE_2__*,int ,int) ;

void
FUNC_5(isc_netaddr_t *VAR_2, const isc_netaddr_t *VAR_3) {
 isc_netaddr_t *VAR_4;

 FUNC_0(VAR_3, VAR_4);

 FUNC_2(VAR_3->family == VAR_1);
 FUNC_2(FUNC_1(&VAR_4->type.in6));

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->family = VAR_0;
 FUNC_3(&VAR_2->type.in, (char *)&VAR_4->type.in6 + 12, 4);
 return;
}

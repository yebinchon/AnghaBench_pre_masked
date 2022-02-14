
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int isc_uint32_t ;
struct TYPE_6__ {int in; } ;
struct TYPE_7__ {TYPE_1__ type; } ;
typedef TYPE_2__ isc_netaddr_t ;



__attribute__((used)) static void
FUNC_0(isc_netaddr_t *VAR_0, isc_netaddr_t *VAR_1, isc_netaddr_t *VAR_2) {

 isc_uint32_t * VAR_3;
 isc_uint32_t VAR_4, VAR_5;

 VAR_3 = (isc_uint32_t *)&VAR_0->type.in;
 VAR_4 = *(isc_uint32_t *)&VAR_1->type.in;
 VAR_5 = *(isc_uint32_t *)&VAR_2->type.in;

 *VAR_3 = VAR_4 | ~VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_14__ {int sin6_len; void* sin6_port; int sin6_scope_id; int sin6_addr; } ;
struct TYPE_12__ {short sin_family; int sin_len; void* sin_port; int sin_addr; } ;
struct TYPE_15__ {TYPE_3__ sin6; TYPE_1__ sin; } ;
struct TYPE_16__ {int length; TYPE_4__ type; } ;
typedef TYPE_5__ isc_sockaddr_t ;
struct TYPE_13__ {int in6; int in; } ;
struct TYPE_17__ {int family; TYPE_2__ type; } ;
typedef TYPE_6__ isc_netaddr_t ;
typedef int in_port_t ;




 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int ) ;
 void* FUNC_2 (int ) ;
 int FUNC_3 (TYPE_6__ const*) ;
 int VAR_0 ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (TYPE_5__*,int ,int) ;

void
FUNC_6(isc_sockaddr_t *VAR_1, const isc_netaddr_t *VAR_2,
      in_port_t VAR_3)
{
 FUNC_5(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->type.sin.sin_family = (short)VAR_2->family;
 switch (VAR_2->family) {
 case 129:
  VAR_1->length = sizeof(VAR_1->type.sin);



  VAR_1->type.sin.sin_addr = VAR_2->type.in;
  VAR_1->type.sin.sin_port = FUNC_2(VAR_3);
  break;
 case 128:
  VAR_1->length = sizeof(VAR_1->type.sin6);



  FUNC_4(&VAR_1->type.sin6.sin6_addr, &VAR_2->type.in6, 16);



  VAR_1->type.sin6.sin6_port = FUNC_2(VAR_3);
  break;
 default:
  FUNC_0(0);
 }
 FUNC_1(VAR_1, VAR_0);
}

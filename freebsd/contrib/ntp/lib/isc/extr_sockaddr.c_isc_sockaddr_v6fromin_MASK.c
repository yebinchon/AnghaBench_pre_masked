
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct in_addr {int dummy; } ;
struct TYPE_8__ {int* s6_addr; } ;
struct TYPE_9__ {int sin6_len; int sin6_port; TYPE_1__ sin6_addr; int sin6_family; } ;
struct TYPE_10__ {TYPE_2__ sin6; } ;
struct TYPE_11__ {int length; TYPE_3__ type; } ;
typedef TYPE_4__ isc_sockaddr_t ;
typedef int in_port_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (int*,struct in_addr const*,int) ;
 int FUNC_3 (TYPE_4__*,int ,int) ;

void
FUNC_4(isc_sockaddr_t *VAR_2, const struct in_addr *VAR_3,
        in_port_t VAR_4)
{
 FUNC_3(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->type.sin6.sin6_family = VAR_0;



 VAR_2->type.sin6.sin6_addr.s6_addr[10] = 0xff;
 VAR_2->type.sin6.sin6_addr.s6_addr[11] = 0xff;
 FUNC_2(&VAR_2->type.sin6.sin6_addr.s6_addr[12], VAR_3, 4);
 VAR_2->type.sin6.sin6_port = FUNC_1(VAR_4);
 VAR_2->length = sizeof(VAR_2->type.sin6);
 FUNC_0(VAR_2, VAR_1);
}

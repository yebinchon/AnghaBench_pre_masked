
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct in6_addr {int dummy; } ;
struct TYPE_8__ {int sin6_len; int sin6_port; struct in6_addr sin6_addr; int sin6_family; } ;
struct TYPE_7__ {TYPE_2__ sin6; } ;
struct TYPE_9__ {int length; TYPE_1__ type; } ;
typedef TYPE_3__ isc_sockaddr_t ;
typedef int in_port_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_3__*,int ) ;
 int FUNC_1 (int ) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*,int ,int) ;

void
FUNC_3(isc_sockaddr_t *VAR_2, const struct in6_addr *VAR_3,
       in_port_t VAR_4)
{
 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 VAR_2->type.sin6.sin6_family = VAR_0;



 VAR_2->type.sin6.sin6_addr = *VAR_3;
 VAR_2->type.sin6.sin6_port = FUNC_1(VAR_4);
 VAR_2->length = sizeof(VAR_2->type.sin6);
 FUNC_0(VAR_2, VAR_1);
}

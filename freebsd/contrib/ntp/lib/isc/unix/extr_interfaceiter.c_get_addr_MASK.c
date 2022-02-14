
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int zone16 ;
struct TYPE_15__ {struct TYPE_15__* s6_addr; } ;
struct sockaddr_in6 {TYPE_8__ sin6_addr; int sin6_scope_id; } ;
struct sockaddr_in {TYPE_8__ sin_addr; } ;
struct sockaddr {int dummy; } ;
struct in_addr {int dummy; } ;
struct in6_addr {int dummy; } ;
typedef int isc_uint32_t ;
struct TYPE_13__ {int * s6_addr; } ;
typedef TYPE_2__ isc_uint16_t ;
struct TYPE_12__ {TYPE_2__ in6; TYPE_2__ in; } ;
struct TYPE_14__ {unsigned int family; TYPE_1__ type; } ;
typedef TYPE_3__ isc_netaddr_t ;




 int FUNC_0 (TYPE_8__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 unsigned int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_3__*,int ) ;
 int FUNC_5 (TYPE_2__*,TYPE_8__*,int) ;
 int FUNC_6 (TYPE_3__*,int ,int) ;
 TYPE_2__ FUNC_7 (TYPE_2__) ;

__attribute__((used)) static void
FUNC_8(unsigned int VAR_0, isc_netaddr_t *VAR_1, struct sockaddr *VAR_2,
  char *VAR_3)
{
 struct sockaddr_in6 *VAR_4;



 FUNC_2(VAR_3);



 FUNC_6(VAR_1, 0, sizeof(*VAR_1));

 VAR_1->family = VAR_0;
 switch (VAR_0) {
 case 129:
  FUNC_5(&VAR_1->type.in,
         &((struct sockaddr_in *)(void *)VAR_2)->sin_addr,
         sizeof(struct in_addr));
  break;
 case 128:
  VAR_4 = (struct sockaddr_in6 *)(void *)VAR_2;
  FUNC_5(&VAR_1->type.in6, &VAR_4->sin6_addr,
         sizeof(struct in6_addr));
  break;
 default:
  FUNC_1(0);
  break;
 }
}

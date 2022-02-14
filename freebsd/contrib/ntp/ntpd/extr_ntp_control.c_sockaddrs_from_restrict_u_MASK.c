
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_18__ {int sin6_addr; } ;
struct TYPE_17__ {void* sa_family; } ;
struct TYPE_14__ {void* s_addr; } ;
struct TYPE_15__ {TYPE_1__ sin_addr; } ;
struct TYPE_21__ {TYPE_5__ sa6; TYPE_4__ sa; TYPE_2__ sa4; } ;
typedef TYPE_8__ sockaddr_u ;
struct TYPE_19__ {int mask; int addr; } ;
struct TYPE_16__ {int mask; int addr; } ;
struct TYPE_20__ {TYPE_6__ v6; TYPE_3__ v4; } ;
struct TYPE_22__ {TYPE_7__ u; } ;
typedef TYPE_9__ restrict_u ;


 void* VAR_0 ;
 void* VAR_1 ;
 int FUNC_0 (TYPE_8__) ;
 void* FUNC_1 (int ) ;
 int FUNC_2 (int *,int *,int) ;

__attribute__((used)) static void
FUNC_3(
 sockaddr_u * VAR_2,
 sockaddr_u * VAR_3,
 restrict_u * VAR_4,
 int VAR_5
 )
{
 FUNC_0(*VAR_2);
 FUNC_0(*VAR_3);
 if (!VAR_5) {
  VAR_2->sa.sa_family = VAR_0;
  VAR_2->sa4.sin_addr.s_addr = FUNC_1(VAR_4->u.v4.addr);
  VAR_3->sa.sa_family = VAR_0;
  VAR_3->sa4.sin_addr.s_addr = FUNC_1(VAR_4->u.v4.mask);
 } else {
  VAR_2->sa.sa_family = VAR_1;
  FUNC_2(&VAR_2->sa6.sin6_addr, &VAR_4->u.v6.addr,
         sizeof(VAR_2->sa6.sin6_addr));
  VAR_3->sa.sa_family = VAR_1;
  FUNC_2(&VAR_3->sa6.sin6_addr, &VAR_4->u.v6.mask,
         sizeof(VAR_2->sa6.sin6_addr));
 }
}

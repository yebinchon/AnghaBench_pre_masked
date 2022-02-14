
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int s_addr; } ;
struct TYPE_5__ {TYPE_1__ sin_addr; scalar_t__ sin_port; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sock {int dummy; } ;
struct TYPE_6__ {int rcv_saddr; } ;


 int VAR_0 ;
 TYPE_3__* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_1, struct sock *VAR_2)
{
 VAR_1->v4.sin_family = VAR_0;
 VAR_1->v4.sin_port = 0;
 VAR_1->v4.sin_addr.s_addr = FUNC_0(VAR_2)->rcv_saddr;
}

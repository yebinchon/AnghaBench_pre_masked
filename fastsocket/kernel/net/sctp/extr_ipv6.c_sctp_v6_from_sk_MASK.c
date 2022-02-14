
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int sin6_addr; scalar_t__ sin6_port; int sin6_family; } ;
union sctp_addr {TYPE_1__ v6; } ;
struct sock {int dummy; } ;
struct TYPE_4__ {int rcv_saddr; } ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (struct sock*) ;

__attribute__((used)) static void FUNC_1(union sctp_addr *VAR_1, struct sock *VAR_2)
{
 VAR_1->v6.sin6_family = VAR_0;
 VAR_1->v6.sin6_port = 0;
 VAR_1->v6.sin6_addr = FUNC_0(VAR_2)->rcv_saddr;
}

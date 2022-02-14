
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__* s6_addr32; } ;
struct TYPE_11__ {TYPE_3__ sin6_addr; } ;
struct TYPE_8__ {scalar_t__ s_addr; } ;
struct TYPE_9__ {TYPE_1__ sin_addr; } ;
struct TYPE_12__ {scalar_t__ sa_family; } ;
union sctp_addr {TYPE_4__ v6; TYPE_2__ v4; TYPE_5__ sa; } ;
struct sock {int dummy; } ;
struct TYPE_14__ {TYPE_3__ daddr; } ;
struct TYPE_13__ {scalar_t__ v4mapped; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_0 (int) ;
 TYPE_7__* FUNC_1 (struct sock*) ;
 TYPE_6__* FUNC_2 (struct sock*) ;

__attribute__((used)) static void FUNC_3(union sctp_addr *VAR_1, struct sock *VAR_2)
{
 if (VAR_1->sa.sa_family == VAR_0 && FUNC_2(VAR_2)->v4mapped) {
  FUNC_1(VAR_2)->daddr.s6_addr32[0] = 0;
  FUNC_1(VAR_2)->daddr.s6_addr32[1] = 0;
  FUNC_1(VAR_2)->daddr.s6_addr32[2] = FUNC_0(0x0000ffff);
  FUNC_1(VAR_2)->daddr.s6_addr32[3] = VAR_1->v4.sin_addr.s_addr;
 } else {
  FUNC_1(VAR_2)->daddr = VAR_1->v6.sin6_addr;
 }
}

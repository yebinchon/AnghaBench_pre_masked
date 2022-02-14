
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;
struct TYPE_4__ {TYPE_1__ sin_addr; int sin_family; } ;
union sctp_addr {TYPE_2__ v4; } ;
struct sctp_transport {scalar_t__ dst; union sctp_addr saddr; } ;
struct sctp_sock {int dummy; } ;
struct rtable {int rt_src; } ;
struct flowi {int dummy; } ;


 int VAR_0 ;

__attribute__((used)) static void FUNC_0(struct sctp_sock *VAR_1,
         struct sctp_transport *VAR_2,
         union sctp_addr *VAR_3,
         struct flowi *VAR_4)
{
 union sctp_addr *VAR_5 = &VAR_2->saddr;
        struct rtable *VAR_6 = (struct rtable *)VAR_2->dst;

 if (VAR_6) {
  VAR_5->v4.sin_family = VAR_0;
  VAR_5->v4.sin_addr.s_addr = VAR_6->rt_src;
 }
}

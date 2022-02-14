
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tcphdr {int ece; } ;
struct request_sock {int dummy; } ;
struct TYPE_2__ {scalar_t__ ecn_ok; } ;


 TYPE_1__* FUNC_0 (struct request_sock*) ;

__attribute__((used)) static __inline__ void
FUNC_1(struct request_sock *VAR_0, struct tcphdr *VAR_1)
{
 if (FUNC_0(VAR_0)->ecn_ok)
  VAR_1->ece = 1;
}

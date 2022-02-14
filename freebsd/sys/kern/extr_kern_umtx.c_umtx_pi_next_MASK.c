
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umtx_q {struct umtx_pi* uq_pi_blocked; } ;
struct umtx_pi {TYPE_1__* pi_owner; } ;
struct TYPE_2__ {struct umtx_q* td_umtxq; } ;



__attribute__((used)) static struct umtx_pi *
FUNC_0(struct umtx_pi *VAR_0)
{
 struct umtx_q *VAR_1;

 if (VAR_0->pi_owner == ((void*)0))
  return (((void*)0));
 VAR_1 = VAR_0->pi_owner->td_umtxq;
 if (VAR_1 == ((void*)0))
  return (((void*)0));
 return (VAR_1->uq_pi_blocked);
}

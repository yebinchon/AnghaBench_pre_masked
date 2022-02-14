
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct umtx_pi {TYPE_2__* pi_owner; } ;
struct TYPE_4__ {TYPE_1__* td_umtxq; } ;
struct TYPE_3__ {int uq_pi_contested; } ;


 int VAR_0 ;
 int FUNC_0 (int *,struct umtx_pi*,int ) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static void
FUNC_2(struct umtx_pi *VAR_3)
{

 FUNC_1(&VAR_2, VAR_0);
 FUNC_0(&VAR_3->pi_owner->td_umtxq->uq_pi_contested, VAR_3, VAR_1);
 VAR_3->pi_owner = ((void*)0);
}

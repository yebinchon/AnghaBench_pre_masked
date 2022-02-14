
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ifacaddr6 {TYPE_2__* aca_rt; int aca_idev; int aca_refcnt; } ;
struct TYPE_3__ {int dst; } ;
struct TYPE_4__ {TYPE_1__ u; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct ifacaddr6*) ;

__attribute__((used)) static void FUNC_4(struct ifacaddr6 *VAR_0)
{
 if (FUNC_0(&VAR_0->aca_refcnt)) {
  FUNC_2(VAR_0->aca_idev);
  FUNC_1(&VAR_0->aca_rt->u.dst);
  FUNC_3(VAR_0);
 }
}

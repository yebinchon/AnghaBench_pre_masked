
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rman {int rm_mtx; } ;
struct resource {TYPE_1__* __r_i; } ;
struct TYPE_2__ {int r_flags; struct rman* r_rm; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct resource *VAR_1)
{
 struct rman *VAR_2;

 VAR_2 = VAR_1->__r_i->r_rm;
 FUNC_0(VAR_2->rm_mtx);
 VAR_1->__r_i->r_flags &= ~VAR_0;
 FUNC_1(VAR_2->rm_mtx);
 return 0;
}

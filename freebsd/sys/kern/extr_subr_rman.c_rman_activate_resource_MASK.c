
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int rm_mtx; } ;
struct resource_i {int r_flags; struct rman* r_rm; } ;
struct resource {struct resource_i* __r_i; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int
FUNC_2(struct resource *VAR_1)
{
 struct resource_i *VAR_2;
 struct rman *VAR_3;

 VAR_2 = VAR_1->__r_i;
 VAR_3 = VAR_2->r_rm;
 FUNC_0(VAR_3->rm_mtx);
 VAR_2->r_flags |= VAR_0;
 FUNC_1(VAR_3->rm_mtx);
 return 0;
}

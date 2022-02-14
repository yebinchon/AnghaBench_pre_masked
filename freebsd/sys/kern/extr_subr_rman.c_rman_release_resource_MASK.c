
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rman {int rm_mtx; } ;
struct resource_i {struct rman* r_rm; } ;
struct resource {struct resource_i* __r_i; } ;


 int FUNC_0 (struct rman*,struct resource_i*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

int
FUNC_3(struct resource *VAR_0)
{
 int VAR_1;
 struct resource_i *VAR_2;
 struct rman *VAR_3;

 VAR_2 = VAR_0->__r_i;
 VAR_3 = VAR_2->r_rm;
 FUNC_1(VAR_3->rm_mtx);
 VAR_1 = FUNC_0(VAR_3, VAR_2);
 FUNC_2(VAR_3->rm_mtx);
 return (VAR_1);
}

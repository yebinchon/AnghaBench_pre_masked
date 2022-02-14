
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int ztree; } ;
struct local_zone {int lock; int parent; } ;


 int FUNC_0 (struct local_zone*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,struct local_zone*) ;
 int FUNC_4 (struct local_zone*,struct local_zone*,int ) ;

void FUNC_5(struct local_zones* VAR_0, struct local_zone* VAR_1)
{

 FUNC_2(&VAR_1->lock);
 FUNC_4(VAR_1, VAR_1, VAR_1->parent);


 (void)FUNC_3(&VAR_0->ztree, VAR_1);


 FUNC_1(&VAR_1->lock);
 FUNC_0(VAR_1);
}

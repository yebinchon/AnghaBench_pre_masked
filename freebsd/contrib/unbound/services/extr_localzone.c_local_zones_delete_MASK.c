
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct local_zones {int ztree; int lock; } ;


 int FUNC_0 (struct local_zones*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int *,int ,int *) ;

void
FUNC_3(struct local_zones* VAR_1)
{
 if(!VAR_1)
  return;
 FUNC_1(&VAR_1->lock);

 FUNC_2(&VAR_1->ztree, VAR_0, ((void*)0));
 FUNC_0(VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct views {int vtree; int lock; } ;


 scalar_t__ FUNC_0 (int,int) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int VAR_0 ;

struct views*
FUNC_4(void)
{
 struct views* VAR_1 = (struct views*)FUNC_0(1,
  sizeof(*VAR_1));
 if(!VAR_1)
  return ((void*)0);
 FUNC_3(&VAR_1->vtree, &VAR_0);
 FUNC_2(&VAR_1->lock);
 FUNC_1(&VAR_1->lock, &VAR_1->vtree, sizeof(VAR_1->vtree));
 return VAR_1;
}

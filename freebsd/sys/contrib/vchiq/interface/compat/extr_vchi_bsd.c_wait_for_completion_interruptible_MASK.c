
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; int lock; int cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct completion*) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(struct completion *VAR_2)
{
 int VAR_3 = 0;

 FUNC_2(&VAR_2->lock);
 while (VAR_2->done == 0) {
  VAR_3 = FUNC_1(&VAR_2->cv, &VAR_2->lock);
  if (VAR_3)
   goto out;
 }

 FUNC_0(VAR_2);

out:
 FUNC_3(&VAR_2->lock);

 if ((VAR_3 == VAR_0) || (VAR_3 == VAR_1))
  VAR_3 = -VAR_1;
 return VAR_3;
}

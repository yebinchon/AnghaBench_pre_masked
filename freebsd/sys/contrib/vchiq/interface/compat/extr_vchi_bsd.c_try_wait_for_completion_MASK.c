
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int lock; int done; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(struct completion *VAR_0)
{
 int VAR_1 = 0;

 FUNC_0(&VAR_0->lock);
 if (!VAR_0->done)
  VAR_1 = 1;
 else
  VAR_0->done--;
 FUNC_1(&VAR_0->lock);
 return VAR_1 == 0;
}

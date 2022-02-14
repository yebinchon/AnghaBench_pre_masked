
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lruhash_bin {int lock; } ;


 int FUNC_0 (int *,struct lruhash_bin*,int) ;
 int FUNC_1 (int *) ;

void
FUNC_2(struct lruhash_bin* VAR_0, size_t VAR_1)
{
 size_t VAR_2;



 for(VAR_2=0; VAR_2<VAR_1; VAR_2++) {
  FUNC_1(&VAR_0[VAR_2].lock);
  FUNC_0(&VAR_0[VAR_2].lock, &VAR_0[VAR_2],
   sizeof(struct lruhash_bin));
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {int done; int lock; int cv; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(struct completion *VAR_1)
{
 FUNC_2(&VAR_1->lock);

 if (VAR_1->done >= 0) {
  FUNC_0(VAR_1->done < VAR_0, ("c->done overflow"));
  VAR_1->done = -1;
  FUNC_1(&VAR_1->cv);
 } else {
  FUNC_0(VAR_1->done == -1, ("Invalid value of c->done: %d", VAR_1->done));
 }

 FUNC_3(&VAR_1->lock);
}

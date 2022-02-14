
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct via_rate_lock {int rate; int used; int lock; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct via_rate_lock *VAR_1, int VAR_2)
{
 int VAR_3 = 0;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->rate != VAR_2) {
  if (VAR_1->rate && VAR_1->used > 1)
   VAR_3 = -VAR_0;
  else {
   VAR_1->rate = VAR_2;
   VAR_3 = 1;
  }
 }
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}

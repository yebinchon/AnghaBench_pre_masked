
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct completion {scalar_t__ done; int lock; int cv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct completion*) ;
 int FUNC_2 (int *,int *,unsigned long) ;
 unsigned long VAR_3 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int
FUNC_5(struct completion *VAR_4, unsigned long VAR_5)
{
 int VAR_6 = 0;
 unsigned long VAR_7, VAR_8;
 VAR_7 = VAR_3;

 FUNC_3(&VAR_4->lock);
 while (VAR_4->done == 0) {
  VAR_6 = FUNC_2(&VAR_4->cv, &VAR_4->lock, VAR_5);
  if (VAR_6)
   goto out;
  VAR_8 = VAR_3;
  if (VAR_5 < (VAR_8 - VAR_7)) {
   VAR_6 = VAR_2;
   goto out;
  }

  VAR_5 -= (VAR_8 - VAR_7);
  VAR_7 = VAR_8;
 }

 FUNC_1(VAR_4);
 VAR_6 = 0;

out:
 FUNC_4(&VAR_4->lock);

 if (VAR_6 == VAR_2) {
  return 0;
 } else if ((VAR_6 == VAR_0) || (VAR_6 == VAR_1)) {
  return -VAR_1;
 } else {
  FUNC_0((VAR_6 == 0), ("res = %d", VAR_6));
  return VAR_5;
 }
}

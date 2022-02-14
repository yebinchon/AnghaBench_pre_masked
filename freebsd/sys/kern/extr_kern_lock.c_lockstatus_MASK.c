
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lock {uintptr_t lk_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 uintptr_t FUNC_0 (uintptr_t) ;
 uintptr_t VAR_2 ;
 uintptr_t VAR_3 ;
 int VAR_4 ;
 uintptr_t VAR_5 ;
 scalar_t__ VAR_6 ;

int
FUNC_1(const struct lock *VAR_7)
{
 uintptr_t VAR_8, VAR_9;
 int VAR_10;

 VAR_10 = VAR_4;
 VAR_9 = VAR_7->lk_lock;
 VAR_8 = FUNC_0(VAR_9);

 if ((VAR_9 & VAR_3) == 0) {
  if (VAR_8 == (uintptr_t)VAR_6 || VAR_8 == VAR_2)
   VAR_10 = VAR_1;
  else
   VAR_10 = VAR_0;
 } else if (VAR_9 == VAR_5)
  VAR_10 = 0;

 return (VAR_10);
}

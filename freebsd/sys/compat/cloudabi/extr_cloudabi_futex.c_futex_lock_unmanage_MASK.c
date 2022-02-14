
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {int fl_owner; int fl_writers; int fl_readers; } ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int*,int,int*,int) ;
 int FUNC_2 (int*,int*) ;

__attribute__((used)) static int
FUNC_3(struct futex_lock *VAR_2, cloudabi_lock_t *VAR_3)
{
 cloudabi_lock_t VAR_4, VAR_5;
 int VAR_6;

 if (FUNC_0(&VAR_2->fl_readers) == 0 &&
     FUNC_0(&VAR_2->fl_writers) == 0) {

  VAR_2->fl_owner = VAR_1;


  VAR_6 = FUNC_2(VAR_3, &VAR_5);
  if (VAR_6 != 0)
   return (VAR_6);
  for (;;) {
   VAR_4 = VAR_5;
   VAR_6 = FUNC_1(VAR_3, VAR_4, &VAR_5,
       VAR_4 & ~VAR_0);
   if (VAR_6 != 0)
    return (VAR_6);
   if (VAR_5 == VAR_4)
    break;
  }
 }
 return (0);
}

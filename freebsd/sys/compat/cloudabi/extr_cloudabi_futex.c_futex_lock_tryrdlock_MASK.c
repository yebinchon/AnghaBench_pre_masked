
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {scalar_t__ fl_owner; } ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (struct futex_lock*,int) ;
 int FUNC_1 (int*,int,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct futex_lock *VAR_6, cloudabi_lock_t *VAR_7)
{
 cloudabi_lock_t VAR_8, VAR_9;
 int VAR_10;

 if (VAR_6->fl_owner != VAR_5) {

  return (VAR_3);
 }

 VAR_8 = VAR_1;
 for (;;) {
  if ((VAR_8 & VAR_0) != 0) {




   return (VAR_4);
  }

  if ((VAR_8 & VAR_2) == 0) {




   VAR_9 = VAR_8;
   VAR_10 = FUNC_1(VAR_7, VAR_9, &VAR_8, VAR_9 + 1);
   if (VAR_10 != 0)
    return (VAR_10);
   if (VAR_8 == VAR_9) {

    return (0);
   }
  } else {

   VAR_9 = VAR_8;
   VAR_10 = FUNC_1(VAR_7, VAR_9, &VAR_8,
       VAR_9 | VAR_0);
   if (VAR_10 != 0)
    return (VAR_10);
   if (VAR_8 == VAR_9) {

    FUNC_0(VAR_6, VAR_9);
    return (VAR_3);
   }
  }
 }
}

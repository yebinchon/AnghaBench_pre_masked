
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {int fl_owner; } ;
typedef int cloudabi_tid_t ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct futex_lock*,int) ;
 int FUNC_1 (int*,int,int*,int) ;

__attribute__((used)) static int
FUNC_2(struct futex_lock *VAR_7, cloudabi_lock_t *VAR_8,
    cloudabi_tid_t VAR_9, bool VAR_10)
{
 cloudabi_lock_t VAR_11, VAR_12, VAR_13;
 int VAR_14;

 if (VAR_7->fl_owner == VAR_9) {

  return (VAR_4);
 }
 if (VAR_7->fl_owner != VAR_6) {

  return (VAR_3);
 }

 VAR_11 = VAR_1;
 for (;;) {
  if ((VAR_11 & VAR_0) != 0) {




   return (VAR_5);
  }
  if (VAR_11 == (VAR_9 | VAR_2)) {

   return (VAR_4);
  }

  if (VAR_11 == VAR_1) {

   VAR_12 = VAR_9 | VAR_2;
   if (VAR_10)
    VAR_12 |= VAR_0;
   VAR_14 = FUNC_1(VAR_8,
       VAR_1, &VAR_11, VAR_12);
   if (VAR_14 != 0)
    return (VAR_14);
   if (VAR_11 == VAR_1) {

    if (VAR_10)
     VAR_7->fl_owner = VAR_9;
    return (0);
   }
  } else {

   VAR_13 = VAR_11;
   VAR_14 = FUNC_1(VAR_8, VAR_13, &VAR_11,
       VAR_13 | VAR_0);
   if (VAR_14 != 0)
    return (VAR_14);
   if (VAR_11 == VAR_13) {

    FUNC_0(VAR_7, VAR_13);
    return (VAR_3);
   }
  }
 }
}

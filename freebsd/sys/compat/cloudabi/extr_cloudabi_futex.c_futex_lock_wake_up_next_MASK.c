
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {int fl_owner; int fl_readers; int fl_writers; } ;
typedef int cloudabi_tid_t ;
typedef int cloudabi_lock_t ;


 int VAR_0 ;
 int VAR_1 ;
 void* VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int) ;

__attribute__((used)) static int
FUNC_5(struct futex_lock *VAR_3, cloudabi_lock_t *VAR_4)
{
 cloudabi_tid_t VAR_5;
 int VAR_6;





 if (FUNC_0(&VAR_3->fl_writers) > 0) {

  if (FUNC_0(&VAR_3->fl_writers) > 1 ||
      FUNC_0(&VAR_3->fl_readers) > 0) {

   VAR_5 = FUNC_1(&VAR_3->fl_writers);
   VAR_6 = FUNC_4(VAR_4,
       VAR_5 | VAR_1 |
       VAR_0);
   if (VAR_6 != 0)
    return (VAR_6);

   FUNC_3(&VAR_3->fl_writers);
   VAR_3->fl_owner = VAR_5;
  } else {

   VAR_6 = FUNC_4(VAR_4,
       FUNC_1(&VAR_3->fl_writers) |
       VAR_1);
   if (VAR_6 != 0)
    return (VAR_6);

   FUNC_3(&VAR_3->fl_writers);
   VAR_3->fl_owner = VAR_2;
  }
 } else {

  VAR_6 = FUNC_4(VAR_4,
      FUNC_0(&VAR_3->fl_readers));
  if (VAR_6 != 0)
   return (VAR_6);


  FUNC_2(&VAR_3->fl_readers);
  VAR_3->fl_owner = VAR_2;
 }
 return (0);
}

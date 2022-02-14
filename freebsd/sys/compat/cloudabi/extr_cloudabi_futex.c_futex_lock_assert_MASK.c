
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {scalar_t__ fl_owner; scalar_t__ fl_waitcount; int fl_writers; int fl_readers; } ;


 int FUNC_0 (int,char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (int *) ;

__attribute__((used)) static void
FUNC_2(const struct futex_lock *VAR_1)
{






 FUNC_0((VAR_1->fl_owner == VAR_0) ==
     (FUNC_1(&VAR_1->fl_readers) == 0 &&
     FUNC_1(&VAR_1->fl_writers) == 0),
     ("Managed locks must have waiting threads"));
 FUNC_0(VAR_1->fl_waitcount != 0 || VAR_1->fl_owner == VAR_0,
     ("Lock with no waiters must be unmanaged"));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct futex_lock {scalar_t__ fl_waitcount; scalar_t__ fl_owner; int fl_address; } ;


 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct futex_lock*,int ) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct futex_lock*,int ) ;
 int FUNC_3 (int *) ;
 int VAR_3 ;
 int FUNC_4 (struct futex_lock*) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void
FUNC_6(struct futex_lock *VAR_4)
{

 FUNC_4(VAR_4);
 if (VAR_4->fl_waitcount == 0) {

  FUNC_0(VAR_4->fl_owner == VAR_0,
      ("Attempted to free a managed lock"));
  FUNC_3(&VAR_4->fl_address);
  FUNC_1(VAR_4, VAR_2);
  FUNC_2(VAR_4, VAR_1);
 }
 FUNC_5(&VAR_3);
}

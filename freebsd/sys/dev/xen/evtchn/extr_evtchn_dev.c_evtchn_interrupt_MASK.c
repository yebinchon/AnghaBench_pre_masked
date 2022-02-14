
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct user_evtchn {int port; struct per_user_data* user; } ;
struct per_user_data {scalar_t__ ring_prod; scalar_t__ ring_cons; int ring_overflow; int ring_prod_mutex; int ev_rsel; int * ring; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct per_user_data*) ;
 int FUNC_5 () ;

__attribute__((used)) static void
FUNC_6(void *VAR_1)
{
 struct user_evtchn *VAR_2;
 struct per_user_data *VAR_3;

 VAR_2 = VAR_1;
 VAR_3 = VAR_2->user;





 FUNC_1(&VAR_3->ring_prod_mutex);
 if ((VAR_3->ring_prod - VAR_3->ring_cons) < VAR_0) {
  VAR_3->ring[FUNC_0(VAR_3->ring_prod)] = VAR_2->port;
  FUNC_5();
  if (VAR_3->ring_cons == VAR_3->ring_prod++) {
   FUNC_4(VAR_3);
   FUNC_3(&VAR_3->ev_rsel);
  }
 } else
  VAR_3->ring_overflow = 1;
 FUNC_2(&VAR_3->ring_prod_mutex);
}

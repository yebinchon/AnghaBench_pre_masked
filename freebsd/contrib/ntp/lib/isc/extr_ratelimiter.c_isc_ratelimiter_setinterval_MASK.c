
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {scalar_t__ state; int lock; int interval; int timer; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
typedef int isc_interval_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ,int ,int *,int *,int ) ;
 int VAR_3 ;

isc_result_t
FUNC_3(isc_ratelimiter_t *VAR_4, isc_interval_t *VAR_5) {
 isc_result_t VAR_6 = VAR_1;
 FUNC_0(&VAR_4->lock);
 VAR_4->interval = *VAR_5;



        if (VAR_4->state == VAR_2) {
  VAR_6 = FUNC_2(VAR_4->timer, VAR_3, ((void*)0),
      &VAR_4->interval, VAR_0);
 }
 FUNC_1(&VAR_4->lock);
 return (VAR_6);
}

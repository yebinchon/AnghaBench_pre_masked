
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int isc_result_t ;
struct TYPE_3__ {int state; int lock; int interval; int timer; int pending; } ;
typedef TYPE_1__ isc_ratelimiter_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;




 int FUNC_3 (int ,int ,int *,int *,int ) ;
 int VAR_3 ;

isc_result_t
FUNC_4(isc_ratelimiter_t *VAR_4) {
 isc_result_t VAR_5 = VAR_2;

 FUNC_1(&VAR_4->lock);
 switch (VAR_4->state) {
 case 129:
  VAR_5 = VAR_1;
  break;
 case 128:
  if (!FUNC_0(VAR_4->pending)) {
   VAR_5 = FUNC_3(VAR_4->timer,
       VAR_3, ((void*)0),
       &VAR_4->interval, VAR_0);
   if (VAR_5 == VAR_2)
    VAR_4->state = 130;
  } else
   VAR_4->state = 131;
  break;
 case 130:
 case 131:
  break;
 }
 FUNC_2(&VAR_4->lock);
 return (VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refs; int lock; } ;
typedef TYPE_1__ isc_ratelimiter_t ;
typedef scalar_t__ isc_boolean_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(isc_ratelimiter_t **VAR_2) {
 isc_ratelimiter_t *VAR_3 = *VAR_2;
 isc_boolean_t VAR_4 = VAR_0;

 FUNC_0(&VAR_3->lock);
 FUNC_1(VAR_3->refs > 0);
 VAR_3->refs--;
 if (VAR_3->refs == 0)
  VAR_4 = VAR_1;
 FUNC_2(&VAR_3->lock);

 if (VAR_4)
  FUNC_3(VAR_3);

 *VAR_2 = ((void*)0);
}

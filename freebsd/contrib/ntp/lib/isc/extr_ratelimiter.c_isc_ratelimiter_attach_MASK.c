
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ refs; int lock; } ;
typedef TYPE_1__ isc_ratelimiter_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int *) ;

void
FUNC_4(isc_ratelimiter_t *VAR_0, isc_ratelimiter_t **VAR_1) {
 FUNC_2(VAR_0 != ((void*)0));
 FUNC_2(VAR_1 != ((void*)0) && *VAR_1 == ((void*)0));

 FUNC_1(&VAR_0->lock);
 FUNC_2(VAR_0->refs > 0);
 VAR_0->refs++;
 FUNC_0(VAR_0->refs > 0);
 FUNC_3(&VAR_0->lock);
 *VAR_1 = VAR_0;
}

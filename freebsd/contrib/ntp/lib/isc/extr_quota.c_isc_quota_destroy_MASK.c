
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ used; int lock; scalar_t__ soft; scalar_t__ max; } ;
typedef TYPE_1__ isc_quota_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;

void
FUNC_2(isc_quota_t *VAR_0) {
 FUNC_1(VAR_0->used == 0);
 VAR_0->max = 0;
 VAR_0->used = 0;
 VAR_0->soft = 0;
 FUNC_0(&VAR_0->lock);
}

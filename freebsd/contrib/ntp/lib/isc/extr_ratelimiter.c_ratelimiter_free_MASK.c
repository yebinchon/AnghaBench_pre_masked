
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int mctx; int lock; } ;
typedef TYPE_1__ isc_ratelimiter_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,TYPE_1__*,int) ;

__attribute__((used)) static void
FUNC_2(isc_ratelimiter_t *VAR_0) {
 FUNC_0(&VAR_0->lock);
 FUNC_1(VAR_0->mctx, VAR_0, sizeof(*VAR_0));
}

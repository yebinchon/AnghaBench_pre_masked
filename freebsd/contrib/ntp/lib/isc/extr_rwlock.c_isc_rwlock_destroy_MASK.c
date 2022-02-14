
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ active; scalar_t__ magic; } ;
typedef TYPE_1__ isc_rwlock_t ;


 int FUNC_0 (int) ;

void
FUNC_1(isc_rwlock_t *VAR_0) {
 FUNC_0(VAR_0 != ((void*)0));
 FUNC_0(VAR_0->active == 0);
 VAR_0->magic = 0;
}

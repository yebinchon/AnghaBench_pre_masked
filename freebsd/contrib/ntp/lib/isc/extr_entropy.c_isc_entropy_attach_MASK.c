
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int lock; int refcnt; } ;
typedef TYPE_1__ isc_entropy_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;

void
FUNC_4(isc_entropy_t *VAR_0, isc_entropy_t **VAR_1) {
 FUNC_1(FUNC_3(VAR_0));
 FUNC_1(VAR_1 != ((void*)0) && *VAR_1 == ((void*)0));

 FUNC_0(&VAR_0->lock);

 VAR_0->refcnt++;
 *VAR_1 = VAR_0;

 FUNC_2(&VAR_0->lock);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcnt; } ;
typedef TYPE_1__ isc_hash_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *) ;

void
FUNC_3(isc_hash_t *VAR_0, isc_hash_t **VAR_1) {
 FUNC_0(FUNC_1(VAR_0));
 FUNC_0(VAR_1 != ((void*)0) && *VAR_1 == ((void*)0));

 FUNC_2(&VAR_0->refcnt, ((void*)0));
 *VAR_1 = VAR_0;
}

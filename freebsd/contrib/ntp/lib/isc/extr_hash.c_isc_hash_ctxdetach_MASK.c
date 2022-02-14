
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refcnt; } ;
typedef TYPE_1__ isc_hash_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__**) ;
 int FUNC_3 (int *,unsigned int*) ;

void
FUNC_4(isc_hash_t **VAR_0) {
 isc_hash_t *VAR_1;
 unsigned int VAR_2;

 FUNC_0(VAR_0 != ((void*)0) && FUNC_1(*VAR_0));
 VAR_1 = *VAR_0;

 FUNC_3(&VAR_1->refcnt, &VAR_2);
 if (VAR_2 == 0)
  FUNC_2(&VAR_1);

 *VAR_0 = ((void*)0);
}

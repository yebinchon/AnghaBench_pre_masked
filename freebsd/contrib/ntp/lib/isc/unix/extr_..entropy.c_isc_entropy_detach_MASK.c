
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ refcnt; int lock; } ;
typedef TYPE_1__ isc_entropy_t ;
typedef scalar_t__ isc_boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__**) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;

void
FUNC_6(isc_entropy_t **VAR_0) {
 isc_entropy_t *VAR_1;
 isc_boolean_t VAR_2;

 FUNC_1(VAR_0 != ((void*)0) && FUNC_3(*VAR_0));
 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 FUNC_0(&VAR_1->lock);

 FUNC_1(VAR_1->refcnt > 0);
 VAR_1->refcnt--;

 VAR_2 = FUNC_5(VAR_1);

 FUNC_2(&VAR_1->lock);

 if (VAR_2)
  FUNC_4(&VAR_1);
}

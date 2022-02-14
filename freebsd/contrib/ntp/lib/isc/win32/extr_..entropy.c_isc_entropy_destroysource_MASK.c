
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* ent; } ;
typedef TYPE_1__ isc_entropysource_t ;
struct TYPE_10__ {int lock; } ;
typedef TYPE_2__ isc_entropy_t ;
typedef scalar_t__ isc_boolean_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__**) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_1__**) ;

void
FUNC_8(isc_entropysource_t **VAR_0) {
 isc_entropysource_t *VAR_1;
 isc_entropy_t *VAR_2;
 isc_boolean_t VAR_3;

 FUNC_1(VAR_0 != ((void*)0));
 FUNC_1(FUNC_4(*VAR_0));

 VAR_1 = *VAR_0;
 *VAR_0 = ((void*)0);

 VAR_2 = VAR_1->ent;
 FUNC_1(FUNC_3(VAR_2));

 FUNC_0(&VAR_2->lock);

 FUNC_7(&VAR_1);

 VAR_3 = FUNC_6(VAR_2);

 FUNC_2(&VAR_2->lock);

 if (VAR_3)
  FUNC_5(&VAR_2);
}

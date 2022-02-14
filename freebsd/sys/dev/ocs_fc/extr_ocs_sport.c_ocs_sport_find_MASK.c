
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_sport_t ;
struct TYPE_4__ {int lookup_lock; int * lookup; int ocs; } ;
typedef TYPE_1__ ocs_domain_t ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *,int ) ;

ocs_sport_t *
FUNC_5(ocs_domain_t *VAR_0, uint32_t VAR_1)
{
 ocs_sport_t *VAR_2;

 FUNC_0(VAR_0, ((void*)0));
 FUNC_1(&VAR_0->lookup_lock);
  if (VAR_0->lookup == ((void*)0)) {
   FUNC_2(VAR_0->ocs, "assertion failed: domain->lookup is not valid\n");
   FUNC_3(&VAR_0->lookup_lock);
   return ((void*)0);
  }

  VAR_2 = FUNC_4(VAR_0->lookup, VAR_1);
 FUNC_3(&VAR_0->lookup_lock);
 return VAR_2;
}

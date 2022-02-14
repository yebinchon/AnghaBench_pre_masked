
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_4__ {size_t ds_symid; int ds_next; } ;
typedef TYPE_1__ dt_sym_t ;
struct TYPE_5__ {size_t dm_symfree; int dm_nsymelems; size_t dm_nsymbuckets; int * dm_symbuckets; TYPE_1__* dm_symchains; } ;
typedef TYPE_2__ dt_module_t ;


 int FUNC_0 (int) ;
 size_t FUNC_1 (char const*,int *) ;

__attribute__((used)) static void
FUNC_2(dt_module_t *VAR_0, const char *VAR_1, uint_t VAR_2)
{
 dt_sym_t *VAR_3 = &VAR_0->dm_symchains[VAR_0->dm_symfree];
 uint_t VAR_4;

 FUNC_0(VAR_0->dm_symfree < VAR_0->dm_nsymelems + 1);

 VAR_3->ds_symid = VAR_2;
 VAR_4 = FUNC_1(VAR_1, ((void*)0)) % VAR_0->dm_nsymbuckets;
 VAR_3->ds_next = VAR_0->dm_symbuckets[VAR_4];
 VAR_0->dm_symbuckets[VAR_4] = VAR_0->dm_symfree++;
}

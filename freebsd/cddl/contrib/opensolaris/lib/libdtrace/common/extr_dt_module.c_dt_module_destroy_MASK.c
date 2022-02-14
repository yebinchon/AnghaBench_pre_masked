
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_9__ {size_t dt_modbuckets; scalar_t__ dt_nmods; int dt_modlist; TYPE_2__** dt_mods; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_10__ {struct TYPE_10__* dm_next; int dm_name; } ;
typedef TYPE_2__ dt_module_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_2__*) ;
 size_t FUNC_3 (int ,int *) ;
 int FUNC_4 (TYPE_2__*) ;

void
FUNC_5(dtrace_hdl_t *VAR_0, dt_module_t *VAR_1)
{
 uint_t VAR_2 = FUNC_3(VAR_1->dm_name, ((void*)0)) % VAR_0->dt_modbuckets;
 dt_module_t **VAR_3 = &VAR_0->dt_mods[VAR_2];

 FUNC_1(&VAR_0->dt_modlist, VAR_1);
 FUNC_0(VAR_0->dt_nmods != 0);
 VAR_0->dt_nmods--;






 while (*VAR_3 != VAR_1) {
  VAR_3 = &((*VAR_3)->dm_next);
  FUNC_0(*VAR_3 != ((void*)0));
 }

 *VAR_3 = VAR_1->dm_next;

 FUNC_2(VAR_0, VAR_1);
 FUNC_4(VAR_1);
}

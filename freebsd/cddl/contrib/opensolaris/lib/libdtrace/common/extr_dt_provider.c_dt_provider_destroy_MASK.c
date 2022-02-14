
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_10__ {size_t dt_provbuckets; int dt_nprovs; int dt_provlist; TYPE_3__** dt_provs; } ;
typedef TYPE_2__ dtrace_hdl_t ;
struct TYPE_9__ {int dtvd_name; } ;
struct TYPE_11__ {struct TYPE_11__* pv_xrefs; int pv_nodes; int * pv_probes; struct TYPE_11__* pv_next; TYPE_1__ pv_desc; TYPE_2__* pv_hdl; } ;
typedef TYPE_3__ dt_provider_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__*,TYPE_3__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,TYPE_3__*) ;
 int FUNC_4 (int *) ;
 size_t FUNC_5 (int ,int *) ;

void
FUNC_6(dtrace_hdl_t *VAR_0, dt_provider_t *VAR_1)
{
 dt_provider_t **VAR_2;
 uint_t VAR_3;

 FUNC_0(VAR_1->pv_hdl == VAR_0);

 VAR_3 = FUNC_5(VAR_1->pv_desc.dtvd_name, ((void*)0)) % VAR_0->dt_provbuckets;
 VAR_2 = &VAR_0->dt_provs[VAR_3];

 while (*VAR_2 != ((void*)0) && *VAR_2 != VAR_1)
  VAR_2 = &(*VAR_2)->pv_next;

 FUNC_0(*VAR_2 != ((void*)0) && *VAR_2 == VAR_1);
 *VAR_2 = VAR_1->pv_next;

 FUNC_3(&VAR_0->dt_provlist, VAR_1);
 VAR_0->dt_nprovs--;

 if (VAR_1->pv_probes != ((void*)0))
  FUNC_2(VAR_1->pv_probes);

 FUNC_4(&VAR_1->pv_nodes);
 FUNC_1(VAR_0, VAR_1->pv_xrefs);
 FUNC_1(VAR_0, VAR_1);
}

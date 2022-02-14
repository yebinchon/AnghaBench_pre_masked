
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_7__ {int dt_nprovs; TYPE_2__** dt_provs; int dt_provlist; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_8__ {struct TYPE_8__* pv_next; } ;
typedef TYPE_2__ dt_provider_t ;


 int FUNC_0 (int *,TYPE_2__*) ;

__attribute__((used)) static dt_provider_t *
FUNC_1(dtrace_hdl_t *VAR_0, dt_provider_t *VAR_1, uint_t VAR_2)
{
 FUNC_0(&VAR_0->dt_provlist, VAR_1);

 VAR_1->pv_next = VAR_0->dt_provs[VAR_2];
 VAR_0->dt_provs[VAR_2] = VAR_1;
 VAR_0->dt_nprovs++;

 return (VAR_1);
}

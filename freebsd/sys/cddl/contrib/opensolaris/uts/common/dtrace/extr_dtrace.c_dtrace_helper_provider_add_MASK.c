
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef size_t uint_t ;
struct TYPE_9__ {int dthps_nprovs; size_t dthps_maxprovs; TYPE_2__** dthps_provs; } ;
typedef TYPE_1__ dtrace_helpers_t ;
struct TYPE_11__ {scalar_t__ dofhp_addr; } ;
struct TYPE_10__ {int dthp_ref; int dthp_generation; TYPE_3__ dthp_prov; } ;
typedef TYPE_2__ dtrace_helper_provider_t ;
typedef TYPE_3__ dof_helper_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_2__**,TYPE_2__**,size_t) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__**,size_t) ;
 void* FUNC_4 (int,int ) ;

__attribute__((used)) static int
FUNC_5(dof_helper_t *VAR_5, dtrace_helpers_t *VAR_6, int VAR_7)
{
 dtrace_helper_provider_t *VAR_8, **VAR_9;
 uint_t VAR_10, VAR_11;

 FUNC_0(FUNC_1(&VAR_4));
 FUNC_0(VAR_6 != ((void*)0));





 if (VAR_6->dthps_nprovs >= VAR_3)
  return (VAR_1);




 for (VAR_11 = 0; VAR_11 < VAR_6->dthps_nprovs; VAR_11++) {
  if (VAR_5->dofhp_addr ==
      VAR_6->dthps_provs[VAR_11]->dthp_prov.dofhp_addr)
   return (VAR_0);
 }

 VAR_8 = FUNC_4(sizeof (dtrace_helper_provider_t), VAR_2);
 VAR_8->dthp_prov = *VAR_5;
 VAR_8->dthp_ref = 1;
 VAR_8->dthp_generation = VAR_7;




 if (VAR_6->dthps_maxprovs == VAR_6->dthps_nprovs) {
  VAR_10 = VAR_6->dthps_maxprovs;
  VAR_9 = VAR_6->dthps_provs;

  if (VAR_6->dthps_maxprovs == 0)
   VAR_6->dthps_maxprovs = 2;
  else
   VAR_6->dthps_maxprovs *= 2;
  if (VAR_6->dthps_maxprovs > VAR_3)
   VAR_6->dthps_maxprovs = VAR_3;

  FUNC_0(VAR_10 < VAR_6->dthps_maxprovs);

  VAR_6->dthps_provs = FUNC_4(VAR_6->dthps_maxprovs *
      sizeof (dtrace_helper_provider_t *), VAR_2);

  if (VAR_9 != ((void*)0)) {
   FUNC_2(VAR_9, VAR_6->dthps_provs, VAR_10 *
       sizeof (dtrace_helper_provider_t *));
   FUNC_3(VAR_9, VAR_10 *
       sizeof (dtrace_helper_provider_t *));
  }
 }

 VAR_6->dthps_provs[VAR_6->dthps_nprovs] = VAR_8;
 VAR_6->dthps_nprovs++;

 return (0);
}

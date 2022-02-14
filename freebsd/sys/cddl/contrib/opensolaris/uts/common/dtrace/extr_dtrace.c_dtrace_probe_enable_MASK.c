
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int zoneid_t ;
typedef int uint32_t ;
typedef int uid_t ;
typedef int dtrace_probekey_t ;
typedef int dtrace_probedesc_t ;
struct TYPE_12__ {TYPE_2__* dten_vstate; } ;
typedef TYPE_4__ dtrace_enabling_t ;
struct TYPE_9__ {int dcr_cred; } ;
struct TYPE_11__ {TYPE_1__ dts_cred; } ;
struct TYPE_10__ {TYPE_3__* dtvs_state; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,int *,int *) ;
 int * VAR_0 ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int VAR_1 ;
 int FUNC_4 (int *,int ,int ,int ,int (*) (int *,TYPE_4__*),TYPE_4__*) ;
 int FUNC_5 (int *,int *) ;

__attribute__((used)) static int
FUNC_6(dtrace_probedesc_t *VAR_2, dtrace_enabling_t *VAR_3)
{
 dtrace_probekey_t VAR_4;
 uint32_t VAR_5;
 uid_t VAR_6;
 zoneid_t VAR_7;

 FUNC_0(FUNC_1(&VAR_1));
 VAR_0 = ((void*)0);

 if (VAR_2 == ((void*)0)) {




  (void) FUNC_3(((void*)0), VAR_3);
  return (0);
 }

 FUNC_5(VAR_2, &VAR_4);
 FUNC_2(VAR_3->dten_vstate->dtvs_state->dts_cred.dcr_cred,
     &VAR_5, &VAR_6, &VAR_7);

 return (FUNC_4(&VAR_4, VAR_5, VAR_6, VAR_7, FUNC_3,
     VAR_3));
}

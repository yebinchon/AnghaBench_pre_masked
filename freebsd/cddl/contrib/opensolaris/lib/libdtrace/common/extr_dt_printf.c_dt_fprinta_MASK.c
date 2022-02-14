
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int uint_t ;
typedef int dtrace_recdesc_t ;
struct TYPE_10__ {int dt_errno; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_11__ {int dtagd_flags; int dtagd_nrecs; int * dtagd_rec; } ;
typedef TYPE_2__ dtrace_aggdesc_t ;
struct TYPE_12__ {int dtada_size; int dtada_data; TYPE_2__* dtada_desc; } ;
typedef TYPE_3__ dtrace_aggdata_t ;
struct TYPE_13__ {int pfw_aid; int pfw_err; TYPE_7__* pfw_argv; int pfw_fp; } ;
typedef TYPE_4__ dt_pfwalk_t ;
struct TYPE_14__ {TYPE_1__* pfv_dtp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_7__*,int const*,int ,int ,int ,TYPE_3__ const**,int) ;
 scalar_t__ FUNC_1 (TYPE_1__*,int ,int ,int ,int ,int*) ;

__attribute__((used)) static int
FUNC_2(const dtrace_aggdata_t *VAR_1, void *VAR_2)
{
 const dtrace_aggdesc_t *VAR_3 = VAR_1->dtada_desc;
 const dtrace_recdesc_t *VAR_4 = &VAR_3->dtagd_rec[0];
 uint_t VAR_5 = VAR_3->dtagd_nrecs;
 dt_pfwalk_t *VAR_6 = VAR_2;
 dtrace_hdl_t *VAR_7 = VAR_6->pfw_argv->pfv_dtp;
 int VAR_8;

 if (FUNC_1(VAR_7, VAR_4++, VAR_5--,
     VAR_1->dtada_data, VAR_1->dtada_size, &VAR_8) != 0 || VAR_6->pfw_aid != VAR_8)
  return (0);

 if (FUNC_0(VAR_7, VAR_6->pfw_fp, VAR_6->pfw_argv,
     VAR_4, VAR_5, VAR_1->dtada_data, VAR_1->dtada_size, &VAR_1, 1) == -1)
  return (VAR_6->pfw_err = VAR_7->dt_errno);





 ((dtrace_aggdesc_t *)VAR_3)->dtagd_flags |= VAR_0;

 return (0);
}

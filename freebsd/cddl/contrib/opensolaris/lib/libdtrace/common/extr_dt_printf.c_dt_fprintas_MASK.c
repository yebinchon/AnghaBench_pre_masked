
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint_t ;
typedef int dtrace_recdesc_t ;
struct TYPE_9__ {int dt_errno; } ;
typedef TYPE_1__ dtrace_hdl_t ;
struct TYPE_10__ {int dtagd_flags; scalar_t__ dtagd_nrecs; int * dtagd_rec; } ;
typedef TYPE_2__ dtrace_aggdesc_t ;
struct TYPE_11__ {TYPE_2__* dtada_desc; int dtada_size; int dtada_data; } ;
typedef TYPE_3__ dtrace_aggdata_t ;
struct TYPE_12__ {int pfw_err; TYPE_6__* pfw_argv; int pfw_fp; } ;
typedef TYPE_4__ dt_pfwalk_t ;
struct TYPE_13__ {TYPE_1__* pfv_dtp; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,TYPE_6__*,int const*,scalar_t__,int ,int ,TYPE_3__ const**,int) ;

__attribute__((used)) static int
FUNC_1(const dtrace_aggdata_t **VAR_1, int VAR_2, void *VAR_3)
{
 const dtrace_aggdata_t *VAR_4 = VAR_1[0];
 const dtrace_aggdesc_t *VAR_5 = VAR_4->dtada_desc;
 const dtrace_recdesc_t *VAR_6 = &VAR_5->dtagd_rec[1];
 uint_t VAR_7 = VAR_5->dtagd_nrecs - 1;
 dt_pfwalk_t *VAR_8 = VAR_3;
 dtrace_hdl_t *VAR_9 = VAR_8->pfw_argv->pfv_dtp;
 int VAR_10;

 if (FUNC_0(VAR_9, VAR_8->pfw_fp, VAR_8->pfw_argv,
     VAR_6, VAR_7, VAR_4->dtada_data, VAR_4->dtada_size,
     VAR_1, VAR_2) == -1)
  return (VAR_8->pfw_err = VAR_9->dt_errno);





 for (VAR_10 = 1; VAR_10 < VAR_2; VAR_10++) {
  VAR_5 = VAR_1[VAR_10]->dtada_desc;
  ((dtrace_aggdesc_t *)VAR_5)->dtagd_flags |= VAR_0;
 }

 return (0);
}

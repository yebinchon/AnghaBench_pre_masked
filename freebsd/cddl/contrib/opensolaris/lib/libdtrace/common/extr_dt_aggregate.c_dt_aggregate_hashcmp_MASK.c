
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ dtagd_nrecs; } ;
typedef TYPE_2__ dtrace_aggdesc_t ;
struct TYPE_4__ {TYPE_2__* dtada_desc; } ;
struct TYPE_6__ {TYPE_1__ dtahe_data; } ;
typedef TYPE_3__ dt_ahashent_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const void *VAR_2, const void *VAR_3)
{
 dt_ahashent_t *VAR_4 = *((dt_ahashent_t **)VAR_2);
 dt_ahashent_t *VAR_5 = *((dt_ahashent_t **)VAR_3);
 dtrace_aggdesc_t *VAR_6 = VAR_4->dtahe_data.dtada_desc;
 dtrace_aggdesc_t *VAR_7 = VAR_5->dtahe_data.dtada_desc;

 if (VAR_6->dtagd_nrecs < VAR_7->dtagd_nrecs)
  return (VAR_1);

 if (VAR_6->dtagd_nrecs > VAR_7->dtagd_nrecs)
  return (VAR_0);

 return (0);
}

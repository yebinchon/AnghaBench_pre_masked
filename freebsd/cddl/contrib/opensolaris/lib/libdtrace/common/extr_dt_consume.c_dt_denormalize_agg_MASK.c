
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ dtrace_aggvarid_t ;
struct TYPE_4__ {scalar_t__ dtagd_nrecs; scalar_t__ dtagd_varid; } ;
typedef TYPE_1__ dtrace_aggdesc_t ;
struct TYPE_5__ {TYPE_1__* dtada_desc; } ;
typedef TYPE_2__ dtrace_aggdata_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const dtrace_aggdata_t *VAR_2, void *VAR_3)
{
 dtrace_aggdesc_t *VAR_4 = VAR_2->dtada_desc;
 dtrace_aggvarid_t VAR_5 = *((dtrace_aggvarid_t *)VAR_3);

 if (VAR_4->dtagd_nrecs == 0)
  return (VAR_1);

 if (VAR_4->dtagd_varid != VAR_5)
  return (VAR_1);

 return (VAR_0);
}

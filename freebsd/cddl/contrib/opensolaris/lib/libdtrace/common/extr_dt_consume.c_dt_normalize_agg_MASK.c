
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ dtrace_aggvarid_t ;
struct TYPE_5__ {scalar_t__ dtagd_nrecs; scalar_t__ dtagd_varid; } ;
typedef TYPE_1__ dtrace_aggdesc_t ;
struct TYPE_6__ {int dtada_normal; TYPE_1__* dtada_desc; } ;
typedef TYPE_2__ dtrace_aggdata_t ;
struct TYPE_7__ {scalar_t__ dtnd_id; int dtnd_normal; } ;
typedef TYPE_3__ dt_normal_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(const dtrace_aggdata_t *VAR_2, void *VAR_3)
{
 dt_normal_t *VAR_4 = VAR_3;
 dtrace_aggdesc_t *VAR_5 = VAR_2->dtada_desc;
 dtrace_aggvarid_t VAR_6 = VAR_4->dtnd_id;

 if (VAR_5->dtagd_nrecs == 0)
  return (VAR_0);

 if (VAR_5->dtagd_varid != VAR_6)
  return (VAR_0);

 ((dtrace_aggdata_t *)VAR_2)->dtada_normal = VAR_4->dtnd_normal;
 return (VAR_1);
}

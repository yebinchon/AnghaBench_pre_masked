
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ dtrace_aggvarid_t ;
struct TYPE_6__ {int dtagd_flags; scalar_t__ dtagd_nrecs; scalar_t__ dtagd_varid; } ;
typedef TYPE_1__ dtrace_aggdesc_t ;
struct TYPE_7__ {TYPE_1__* dtada_desc; } ;
typedef TYPE_2__ dtrace_aggdata_t ;
struct TYPE_8__ {scalar_t__ dtpa_id; scalar_t__ dtpa_allunprint; } ;
typedef TYPE_3__ dt_print_aggdata_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__ const**,int,void*) ;

int
FUNC_1(const dtrace_aggdata_t *VAR_1, void *VAR_2)
{
 dt_print_aggdata_t *VAR_3 = VAR_2;
 dtrace_aggdesc_t *VAR_4 = VAR_1->dtada_desc;
 dtrace_aggvarid_t VAR_5 = VAR_3->dtpa_id;

 if (VAR_3->dtpa_allunprint) {
  if (VAR_4->dtagd_flags & VAR_0)
   return (0);
 } else {






  if (VAR_4->dtagd_nrecs == 0)
   return (0);

  if (VAR_5 != VAR_4->dtagd_varid)
   return (0);
 }

 return (FUNC_0(&VAR_1, 1, VAR_2));
}

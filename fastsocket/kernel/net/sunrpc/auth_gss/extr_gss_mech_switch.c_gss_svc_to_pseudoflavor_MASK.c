
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct gss_api_mech {int gm_pf_num; TYPE_1__* gm_pfs; } ;
struct TYPE_2__ {scalar_t__ service; scalar_t__ pseudoflavor; } ;


 scalar_t__ VAR_0 ;

u32
FUNC_0(struct gss_api_mech *VAR_1, u32 VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1->gm_pf_num; VAR_3++) {
  if (VAR_1->gm_pfs[VAR_3].service == VAR_2) {
   return VAR_1->gm_pfs[VAR_3].pseudoflavor;
  }
 }
 return VAR_0;
}

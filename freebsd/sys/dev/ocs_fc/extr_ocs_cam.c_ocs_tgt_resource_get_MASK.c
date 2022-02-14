
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ target_id_t ;
struct ccb_hdr {scalar_t__ target_id; size_t target_lun; } ;
typedef int ocs_tgt_resource_t ;
struct TYPE_3__ {int * targ_rsrc; int targ_rsrc_wildcard; } ;
typedef TYPE_1__ ocs_fcport ;
typedef size_t lun_id_t ;


 int VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 size_t VAR_3 ;

__attribute__((used)) static ocs_tgt_resource_t *FUNC_0(ocs_fcport *VAR_4,
    struct ccb_hdr *VAR_5, uint32_t *VAR_6)
{
 target_id_t VAR_7 = VAR_5->target_id;
 lun_id_t VAR_8 = VAR_5->target_lun;

 if (VAR_2 == VAR_7) {
  if (VAR_1 != VAR_8) {
   *VAR_6 = VAR_0;
   return ((void*)0);
  }
  return &VAR_4->targ_rsrc_wildcard;
 } else {
  if (VAR_8 < VAR_3) {
   return &VAR_4->targ_rsrc[VAR_8];
  } else {
   *VAR_6 = VAR_0;
   return ((void*)0);
  }
 }

}

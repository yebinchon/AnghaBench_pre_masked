
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drr_freeobjects {scalar_t__ drr_firstobj; scalar_t__ drr_numobjs; int drr_toguid; } ;
struct TYPE_7__ {scalar_t__ dsa_pending_op; int dsa_toguid; TYPE_5__* dsa_drr; } ;
typedef TYPE_2__ dmu_sendarg_t ;
typedef int dmu_replay_record_t ;
struct TYPE_6__ {struct drr_freeobjects drr_freeobjects; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_3(dmu_sendarg_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6)
{
 struct drr_freeobjects *VAR_7 = &(VAR_4->dsa_drr->drr_u.drr_freeobjects);
 if (VAR_4->dsa_pending_op != VAR_3 &&
     VAR_4->dsa_pending_op != VAR_2) {
  if (FUNC_2(VAR_4, ((void*)0), 0) != 0)
   return (FUNC_0(VAR_1));
  VAR_4->dsa_pending_op = VAR_3;
 }
 if (VAR_4->dsa_pending_op == VAR_2) {




  if (VAR_7->drr_firstobj + VAR_7->drr_numobjs == VAR_5) {
   VAR_7->drr_numobjs += VAR_6;
   return (0);
  } else {

   if (FUNC_2(VAR_4, ((void*)0), 0) != 0)
    return (FUNC_0(VAR_1));
   VAR_4->dsa_pending_op = VAR_3;
  }
 }


 FUNC_1(VAR_4->dsa_drr, sizeof (dmu_replay_record_t));
 VAR_4->dsa_drr->drr_type = VAR_0;
 VAR_7->drr_firstobj = VAR_5;
 VAR_7->drr_numobjs = VAR_6;
 VAR_7->drr_toguid = VAR_4->dsa_toguid;

 VAR_4->dsa_pending_op = VAR_2;

 return (0);
}

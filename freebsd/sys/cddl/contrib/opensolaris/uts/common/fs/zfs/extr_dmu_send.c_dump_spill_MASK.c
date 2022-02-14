
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint64_t ;
struct drr_spill {int drr_length; int drr_toguid; int drr_object; } ;
struct TYPE_7__ {scalar_t__ dsa_pending_op; int dsa_toguid; TYPE_5__* dsa_drr; } ;
typedef TYPE_2__ dmu_sendarg_t ;
typedef int dmu_replay_record_t ;
struct TYPE_6__ {struct drr_spill drr_spill; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_5__*,int) ;
 scalar_t__ FUNC_2 (TYPE_2__*,void*,int) ;

__attribute__((used)) static int
FUNC_3(dmu_sendarg_t *VAR_3, uint64_t VAR_4, int VAR_5, void *VAR_6)
{
 struct drr_spill *VAR_7 = &(VAR_3->dsa_drr->drr_u.drr_spill);

 if (VAR_3->dsa_pending_op != VAR_2) {
  if (FUNC_2(VAR_3, ((void*)0), 0) != 0)
   return (FUNC_0(VAR_1));
  VAR_3->dsa_pending_op = VAR_2;
 }


 FUNC_1(VAR_3->dsa_drr, sizeof (dmu_replay_record_t));
 VAR_3->dsa_drr->drr_type = VAR_0;
 VAR_7->drr_object = VAR_4;
 VAR_7->drr_length = VAR_5;
 VAR_7->drr_toguid = VAR_3->dsa_toguid;

 if (FUNC_2(VAR_3, VAR_6, VAR_5) != 0)
  return (FUNC_0(VAR_1));
 return (0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct drr_free {scalar_t__ drr_object; scalar_t__ drr_offset; scalar_t__ drr_length; int drr_toguid; } ;
struct TYPE_7__ {scalar_t__ dsa_last_data_object; scalar_t__ dsa_last_data_offset; scalar_t__ dsa_pending_op; int dsa_toguid; TYPE_5__* dsa_drr; } ;
typedef TYPE_2__ dmu_sendarg_t ;
typedef int dmu_replay_record_t ;
struct TYPE_6__ {struct drr_free drr_free; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int *,int ) ;

__attribute__((used)) static int
FUNC_4(dmu_sendarg_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    uint64_t VAR_7)
{
 struct drr_free *VAR_8 = &(VAR_4->dsa_drr->drr_u.drr_free);
 FUNC_0(VAR_5 > VAR_4->dsa_last_data_object ||
     (VAR_5 == VAR_4->dsa_last_data_object &&
     VAR_6 > VAR_4->dsa_last_data_offset));

 if (VAR_7 != -1ULL && VAR_6 + VAR_7 < VAR_6)
  VAR_7 = -1ULL;
 if (VAR_4->dsa_pending_op != VAR_3 &&
     VAR_4->dsa_pending_op != VAR_2) {
  if (FUNC_3(VAR_4, ((void*)0), 0) != 0)
   return (FUNC_1(VAR_1));
  VAR_4->dsa_pending_op = VAR_3;
 }

 if (VAR_4->dsa_pending_op == VAR_2) {






  FUNC_0(VAR_7 != -1ULL);




  if (VAR_8->drr_object == VAR_5 && VAR_8->drr_offset +
      VAR_8->drr_length == VAR_6) {
   VAR_8->drr_length += VAR_7;
   return (0);
  } else {

   if (FUNC_3(VAR_4, ((void*)0), 0) != 0)
    return (FUNC_1(VAR_1));
   VAR_4->dsa_pending_op = VAR_3;
  }
 }

 FUNC_2(VAR_4->dsa_drr, sizeof (dmu_replay_record_t));
 VAR_4->dsa_drr->drr_type = VAR_0;
 VAR_8->drr_object = VAR_5;
 VAR_8->drr_offset = VAR_6;
 VAR_8->drr_length = VAR_7;
 VAR_8->drr_toguid = VAR_4->dsa_toguid;
 if (VAR_7 == -1ULL) {
  if (FUNC_3(VAR_4, ((void*)0), 0) != 0)
   return (FUNC_1(VAR_1));
 } else {
  VAR_4->dsa_pending_op = VAR_2;
 }

 return (0);
}

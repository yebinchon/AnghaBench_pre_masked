
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint64_t ;
struct drr_write_embedded {int drr_length; int drr_psize; int drr_lsize; int drr_etype; int drr_compression; int drr_toguid; void* drr_offset; void* drr_object; } ;
struct TYPE_7__ {scalar_t__ dsa_pending_op; int dsa_toguid; TYPE_5__* dsa_drr; } ;
typedef TYPE_2__ dmu_sendarg_t ;
typedef int dmu_replay_record_t ;
typedef int blkptr_t ;
struct TYPE_6__ {struct drr_write_embedded drr_write_embedded; } ;
struct TYPE_8__ {int drr_type; TYPE_1__ drr_u; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int const*) ;
 int VAR_0 ;
 int FUNC_4 (int const*) ;
 int FUNC_5 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 (int ,int) ;
 scalar_t__ VAR_3 ;
 int FUNC_7 (TYPE_5__*,int) ;
 int FUNC_8 (int const*,char*) ;
 scalar_t__ FUNC_9 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static int
FUNC_10(dmu_sendarg_t *VAR_4, uint64_t VAR_5, uint64_t VAR_6,
    int VAR_7, const blkptr_t *VAR_8)
{
 char VAR_9[VAR_0];
 struct drr_write_embedded *VAR_10 =
     &(VAR_4->dsa_drr->drr_u.drr_write_embedded);

 if (VAR_4->dsa_pending_op != VAR_3) {
  if (FUNC_9(VAR_4, ((void*)0), 0) != 0)
   return (VAR_2);
  VAR_4->dsa_pending_op = VAR_3;
 }

 FUNC_0(FUNC_5(VAR_8));

 FUNC_7(VAR_4->dsa_drr, sizeof (dmu_replay_record_t));
 VAR_4->dsa_drr->drr_type = VAR_1;
 VAR_10->drr_object = VAR_5;
 VAR_10->drr_offset = VAR_6;
 VAR_10->drr_length = VAR_7;
 VAR_10->drr_toguid = VAR_4->dsa_toguid;
 VAR_10->drr_compression = FUNC_4(VAR_8);
 VAR_10->drr_etype = FUNC_1(VAR_8);
 VAR_10->drr_lsize = FUNC_2(VAR_8);
 VAR_10->drr_psize = FUNC_3(VAR_8);

 FUNC_8(VAR_8, VAR_9);

 if (FUNC_9(VAR_4, VAR_9, FUNC_6(VAR_10->drr_psize, 8)) != 0)
  return (VAR_2);
 return (0);
}

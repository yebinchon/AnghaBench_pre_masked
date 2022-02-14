
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ drr_magic; int drr_versioninfo; } ;
struct TYPE_13__ {TYPE_2__ drr_begin; } ;
struct TYPE_15__ {TYPE_1__ drr_u; } ;
typedef TYPE_3__ dmu_replay_record_t ;
struct TYPE_16__ {char* drc_tosnap; char* drc_tofs; TYPE_2__* drc_drrb; int drc_cksum; int drc_byteswap; int drc_clone; void* drc_cred; void* drc_resumable; void* drc_force; TYPE_3__* drc_drr_begin; } ;
typedef TYPE_4__ dmu_recv_cookie_t ;
struct TYPE_17__ {char* drba_origin; void* drba_cred; TYPE_4__* drba_cookie; int member_0; } ;
typedef TYPE_5__ dmu_recv_begin_arg_t ;
typedef void* boolean_t ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 void* FUNC_1 () ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int VAR_4 ;
 int FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_4__*,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 (char*,int ,int ,TYPE_5__*,int,int ) ;
 int FUNC_7 (TYPE_3__*,int,int *) ;
 int FUNC_8 (TYPE_3__*,int,int *) ;

int
FUNC_9(char *VAR_9, char *VAR_10, dmu_replay_record_t *VAR_11,
    boolean_t VAR_12, boolean_t VAR_13, char *VAR_14, dmu_recv_cookie_t *VAR_15)
{
 dmu_recv_begin_arg_t VAR_16 = { 0 };

 FUNC_5(VAR_15, sizeof (dmu_recv_cookie_t));
 VAR_15->drc_drr_begin = VAR_11;
 VAR_15->drc_drrb = &VAR_11->drr_u.drr_begin;
 VAR_15->drc_tosnap = VAR_10;
 VAR_15->drc_tofs = VAR_9;
 VAR_15->drc_force = VAR_12;
 VAR_15->drc_resumable = VAR_13;
 VAR_15->drc_cred = FUNC_1();
 VAR_15->drc_clone = (VAR_14 != ((void*)0));

 if (VAR_15->drc_drrb->drr_magic == FUNC_0(VAR_2)) {
  VAR_15->drc_byteswap = VAR_0;
  (void) FUNC_7(VAR_11,
      sizeof (dmu_replay_record_t), &VAR_15->drc_cksum);
  FUNC_4(VAR_11);
 } else if (VAR_15->drc_drrb->drr_magic == VAR_2) {
  (void) FUNC_8(VAR_11,
      sizeof (dmu_replay_record_t), &VAR_15->drc_cksum);
 } else {
  return (FUNC_3(VAR_3));
 }

 VAR_16.drba_origin = VAR_14;
 VAR_16.drba_cookie = VAR_15;
 VAR_16.drba_cred = FUNC_1();

 if (FUNC_2(VAR_15->drc_drrb->drr_versioninfo) &
     VAR_1) {
  return (FUNC_6(VAR_9,
      VAR_7, VAR_8,
      &VAR_16, 5, VAR_4));
 } else {
  return (FUNC_6(VAR_9,
      VAR_5, VAR_6,
      &VAR_16, 5, VAR_4));
 }
}

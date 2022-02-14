
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {TYPE_2__* zl_spa; TYPE_4__* zl_header; } ;
typedef TYPE_3__ zilog_t ;
struct TYPE_11__ {scalar_t__ zh_claim_txg; scalar_t__ zh_flags; scalar_t__ zh_replay_seq; scalar_t__ zh_claim_lr_seq; scalar_t__ zh_claim_blk_seq; int zh_log; } ;
typedef TYPE_4__ zil_header_t ;
typedef int u_longlong_t ;
struct TYPE_12__ {scalar_t__ zri_count; } ;
struct TYPE_8__ {scalar_t__ ub_checkpoint_txg; } ;
struct TYPE_9__ {TYPE_1__ spa_uberblock; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (TYPE_3__*,int ,int ,int *,scalar_t__) ;
 TYPE_5__* VAR_4 ;

void
FUNC_5(zilog_t *VAR_5)
{
 const zil_header_t *VAR_6 = VAR_5->zl_header;
 int VAR_7 = FUNC_1(VAR_1['d'], VAR_1['i']);
 int VAR_8;

 if (FUNC_0(&VAR_6->zh_log) || VAR_7 < 1)
  return;

 (void) FUNC_3("\n    ZIL header: claim_txg %llu, "
     "claim_blk_seq %llu, claim_lr_seq %llu",
     (u_longlong_t)VAR_6->zh_claim_txg,
     (u_longlong_t)VAR_6->zh_claim_blk_seq,
     (u_longlong_t)VAR_6->zh_claim_lr_seq);
 (void) FUNC_3(" replay_seq %llu, flags 0x%llx\n",
     (u_longlong_t)VAR_6->zh_replay_seq, (u_longlong_t)VAR_6->zh_flags);

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++)
  VAR_4[VAR_8].zri_count = 0;


 if (VAR_5->zl_spa->spa_uberblock.ub_checkpoint_txg != 0 &&
     VAR_6->zh_claim_txg == 0)
  return;

 if (VAR_7 >= 2) {
  (void) FUNC_3("\n");
  (void) FUNC_4(VAR_5, VAR_2, VAR_3, ((void*)0),
      VAR_6->zh_claim_txg);
  FUNC_2(VAR_7);
 }
}

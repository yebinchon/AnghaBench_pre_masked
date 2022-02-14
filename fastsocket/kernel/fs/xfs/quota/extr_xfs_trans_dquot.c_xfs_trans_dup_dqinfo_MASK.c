
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int t_flags; TYPE_1__* t_dqinfo; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_9__ {scalar_t__ qt_ino_res_used; scalar_t__ qt_ino_res; scalar_t__ qt_rtblk_res_used; scalar_t__ qt_rtblk_res; scalar_t__ qt_blk_res_used; scalar_t__ qt_blk_res; scalar_t__ qt_rtbcount_delta; scalar_t__ qt_icount_delta; scalar_t__ qt_bcount_delta; int * qt_dquot; } ;
typedef TYPE_3__ xfs_dqtrx_t ;
struct TYPE_7__ {TYPE_3__* dqa_grpdquots; TYPE_3__* dqa_usrdquots; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*) ;

void
FUNC_1(
 xfs_trans_t *VAR_2,
 xfs_trans_t *VAR_3)
{
 xfs_dqtrx_t *VAR_4, *VAR_5;
 int VAR_6,VAR_7;
 xfs_dqtrx_t *VAR_8, *VAR_9;

 if (!VAR_2->t_dqinfo)
  return;

 FUNC_0(VAR_3);
 VAR_8 = VAR_2->t_dqinfo->dqa_usrdquots;
 VAR_9 = VAR_3->t_dqinfo->dqa_usrdquots;





 if(VAR_2->t_flags & VAR_1)
  VAR_3->t_flags |= VAR_1;

 for (VAR_7 = 0; VAR_7 < 2; VAR_7++) {
  for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
   if (VAR_8[VAR_6].qt_dquot == ((void*)0))
    break;
   VAR_4 = &VAR_8[VAR_6];
   VAR_5 = &VAR_9[VAR_6];

   VAR_5->qt_dquot = VAR_4->qt_dquot;
   VAR_5->qt_bcount_delta = VAR_5->qt_icount_delta = 0;
   VAR_5->qt_rtbcount_delta = 0;




   VAR_5->qt_blk_res = VAR_4->qt_blk_res - VAR_4->qt_blk_res_used;
   VAR_4->qt_blk_res = VAR_4->qt_blk_res_used;

   VAR_5->qt_rtblk_res = VAR_4->qt_rtblk_res -
    VAR_4->qt_rtblk_res_used;
   VAR_4->qt_rtblk_res = VAR_4->qt_rtblk_res_used;

   VAR_5->qt_ino_res = VAR_4->qt_ino_res - VAR_4->qt_ino_res_used;
   VAR_4->qt_ino_res = VAR_4->qt_ino_res_used;

  }
  VAR_8 = VAR_2->t_dqinfo->dqa_grpdquots;
  VAR_9 = VAR_3->t_dqinfo->dqa_grpdquots;
 }
}

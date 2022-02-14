
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {int sb_agblocks; scalar_t__ sb_dblocks; scalar_t__ sb_imax_pct; } ;
typedef TYPE_1__ xfs_sb_t ;
struct TYPE_15__ {int pagi_inodeok; int pagf_metadata; int pag_buf_tree; int pag_buf_lock; int pag_ici_root; int pag_ici_reclaim_lock; int pag_ici_lock; TYPE_3__* pag_mount; scalar_t__ pag_agno; } ;
typedef TYPE_2__ xfs_perag_t ;
struct TYPE_16__ {int m_flags; int m_perag_tree; scalar_t__ m_maxicount; int m_perag_lock; TYPE_1__ m_sb; } ;
typedef TYPE_3__ xfs_mount_t ;
typedef scalar_t__ xfs_ino_t ;
typedef scalar_t__ xfs_agnumber_t ;
typedef int xfs_agino_t ;
typedef scalar_t__ __uint64_t ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (TYPE_3__*,scalar_t__,int ) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_3 (TYPE_3__*,int,int ) ;
 int FUNC_4 (scalar_t__,int) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int,int ) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *,scalar_t__) ;
 scalar_t__ FUNC_9 (int *,scalar_t__,TYPE_2__*) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 () ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 TYPE_2__* FUNC_15 (TYPE_3__*,scalar_t__) ;
 int FUNC_16 (TYPE_2__*) ;

int
FUNC_17(
 xfs_mount_t *VAR_9,
 xfs_agnumber_t VAR_10,
 xfs_agnumber_t *VAR_11)
{
 xfs_agnumber_t VAR_12, VAR_13;
 xfs_agnumber_t VAR_14 = 0;
 xfs_perag_t *VAR_15;
 xfs_agino_t VAR_16;
 xfs_ino_t VAR_17;
 xfs_sb_t *VAR_18 = &VAR_9->m_sb;
 int VAR_19 = -VAR_1;






 for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
  VAR_15 = FUNC_15(VAR_9, VAR_12);
  if (VAR_15) {
   FUNC_16(VAR_15);
   continue;
  }
  if (!VAR_14)
   VAR_14 = VAR_12;

  VAR_15 = FUNC_6(sizeof(*VAR_15), VAR_4);
  if (!VAR_15)
   goto out_unwind;
  VAR_15->pag_agno = VAR_12;
  VAR_15->pag_mount = VAR_9;
  FUNC_13(&VAR_15->pag_ici_lock);
  FUNC_7(&VAR_15->pag_ici_reclaim_lock);
  FUNC_1(&VAR_15->pag_ici_root, VAR_2);
  FUNC_13(&VAR_15->pag_buf_lock);
  VAR_15->pag_buf_tree = VAR_5;

  if (FUNC_10(VAR_3))
   goto out_unwind;

  FUNC_12(&VAR_9->m_perag_lock);
  if (FUNC_9(&VAR_9->m_perag_tree, VAR_12, VAR_15)) {
   FUNC_0();
   FUNC_14(&VAR_9->m_perag_lock);
   FUNC_11();
   VAR_19 = -VAR_0;
   goto out_unwind;
  }
  FUNC_14(&VAR_9->m_perag_lock);
  FUNC_11();
 }





 VAR_16 = FUNC_3(VAR_9, VAR_18->sb_agblocks - 1, 0);
 VAR_17 = FUNC_2(VAR_9, VAR_10 - 1, VAR_16);

 if ((VAR_9->m_flags & VAR_8) && VAR_17 > VAR_6)
  VAR_9->m_flags |= VAR_7;
 else
  VAR_9->m_flags &= ~VAR_7;

 if (VAR_9->m_flags & VAR_7) {




  if (VAR_9->m_maxicount) {
   __uint64_t VAR_20;

   VAR_20 = VAR_18->sb_dblocks * VAR_18->sb_imax_pct;
   FUNC_4(VAR_20, 100);
   VAR_20 += VAR_18->sb_agblocks - 1;
   FUNC_4(VAR_20, VAR_18->sb_agblocks);
   VAR_13 = VAR_20;
  } else {
   VAR_13 = VAR_10;
  }

  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   VAR_17 = FUNC_2(VAR_9, VAR_12, VAR_16);
   if (VAR_17 > VAR_6) {
    VAR_12++;
    break;
   }

   VAR_15 = FUNC_15(VAR_9, VAR_12);
   VAR_15->pagi_inodeok = 1;
   if (VAR_12 < VAR_13)
    VAR_15->pagf_metadata = 1;
   FUNC_16(VAR_15);
  }
 } else {
  for (VAR_12 = 0; VAR_12 < VAR_10; VAR_12++) {
   VAR_15 = FUNC_15(VAR_9, VAR_12);
   VAR_15->pagi_inodeok = 1;
   FUNC_16(VAR_15);
  }
 }

 if (VAR_11)
  *VAR_11 = VAR_12;
 return 0;

out_unwind:
 FUNC_5(VAR_15);
 for (; VAR_12 > VAR_14; VAR_12--) {
  VAR_15 = FUNC_8(&VAR_9->m_perag_tree, VAR_12);
  FUNC_5(VAR_15);
 }
 return VAR_19;
}

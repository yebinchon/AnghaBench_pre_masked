
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {scalar_t__ t_frextents_delta; TYPE_4__* t_mountp; } ;
typedef TYPE_3__ xfs_trans_t ;
typedef int xfs_rtblock_t ;
struct TYPE_14__ {scalar_t__ sb_frextents; scalar_t__ sb_rextents; } ;
struct TYPE_17__ {TYPE_7__* m_rbmip; TYPE_1__ m_sb; } ;
typedef TYPE_4__ xfs_mount_t ;
typedef int xfs_fsblock_t ;
typedef scalar_t__ xfs_extlen_t ;
typedef int xfs_buf_t ;
typedef scalar_t__ __uint64_t ;
struct TYPE_15__ {int di_flags; int di_atime; } ;
struct TYPE_18__ {TYPE_2__ i_d; int * i_itemp; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (TYPE_7__*,int ) ;
 int FUNC_2 (TYPE_4__*,TYPE_3__*,int ,scalar_t__,int*) ;
 int FUNC_3 (TYPE_4__*,TYPE_3__*,int ,scalar_t__,int **,int *) ;
 int FUNC_4 (TYPE_3__*,TYPE_7__*,int ) ;
 int FUNC_5 (TYPE_3__*,int ,long) ;

int
FUNC_6(
 xfs_trans_t *VAR_4,
 xfs_rtblock_t VAR_5,
 xfs_extlen_t VAR_6)
{
 int VAR_7;
 xfs_mount_t *VAR_8;
 xfs_fsblock_t VAR_9;
 xfs_buf_t *VAR_10;

 VAR_8 = VAR_4->t_mountp;

 FUNC_0(VAR_8->m_rbmip->i_itemp != ((void*)0));
 FUNC_0(FUNC_1(VAR_8->m_rbmip, VAR_1));
 VAR_10 = ((void*)0);



 VAR_7 = FUNC_3(VAR_8, VAR_4, VAR_5, VAR_6, &VAR_10, &VAR_9);
 if (VAR_7) {
  return VAR_7;
 }



 FUNC_5(VAR_4, VAR_3, (long)VAR_6);




 if (VAR_4->t_frextents_delta + VAR_8->m_sb.sb_frextents ==
     VAR_8->m_sb.sb_rextents) {
  if (!(VAR_8->m_rbmip->i_d.di_flags & VAR_0))
   VAR_8->m_rbmip->i_d.di_flags |= VAR_0;
  *(__uint64_t *)&VAR_8->m_rbmip->i_d.di_atime = 0;
  FUNC_4(VAR_4, VAR_8->m_rbmip, VAR_2);
 }
 return 0;
}

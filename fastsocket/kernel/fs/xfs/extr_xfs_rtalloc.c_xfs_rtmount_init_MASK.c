
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int xfs_suminfo_t ;
struct TYPE_9__ {scalar_t__ sb_rblocks; int sb_rextslog; int sb_rbmblocks; int sb_blocksize; } ;
typedef TYPE_1__ xfs_sb_t ;
struct TYPE_10__ {int m_rsumlevels; int m_rsumsize; int * m_rtdev_targp; TYPE_1__ m_sb; int * m_rsumip; int m_rbmip; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef scalar_t__ xfs_daddr_t ;
typedef int xfs_buf_t ;
typedef int uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_2__*,scalar_t__) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int) ;
 scalar_t__ FUNC_3 (TYPE_2__*,int) ;
 int FUNC_4 (int,int ) ;
 int * FUNC_5 (TYPE_2__*,int *,scalar_t__,int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_2__*,char*,...) ;

int
FUNC_8(
 xfs_mount_t *VAR_3)
{
 xfs_buf_t *VAR_4;
 xfs_daddr_t VAR_5;
 xfs_sb_t *VAR_6;

 VAR_6 = &VAR_3->m_sb;
 if (VAR_6->sb_rblocks == 0)
  return 0;
 if (VAR_3->m_rtdev_targp == ((void*)0)) {
  FUNC_7(VAR_3,
 "Filesystem has a realtime volume, use rtdev=device option");
  return FUNC_1(VAR_2);
 }
 VAR_3->m_rsumlevels = VAR_6->sb_rextslog + 1;
 VAR_3->m_rsumsize =
  (uint)sizeof(xfs_suminfo_t) * VAR_3->m_rsumlevels *
  VAR_6->sb_rbmblocks;
 VAR_3->m_rsumsize = FUNC_4(VAR_3->m_rsumsize, VAR_6->sb_blocksize);
 VAR_3->m_rbmip = *(VAR_3->m_rsumip = ((void*)0));



 VAR_5 = (xfs_daddr_t)FUNC_3(VAR_3, VAR_3->m_sb.sb_rblocks);
 if (FUNC_0(VAR_3, VAR_5) != VAR_3->m_sb.sb_rblocks) {
  FUNC_7(VAR_3, "realtime mount -- %llu != %llu",
   (unsigned long long) FUNC_0(VAR_3, VAR_5),
   (unsigned long long) VAR_3->m_sb.sb_rblocks);
  return FUNC_1(VAR_0);
 }
 VAR_4 = FUNC_5(VAR_3, VAR_3->m_rtdev_targp,
     VAR_5 - FUNC_3(VAR_3, 1),
     FUNC_2(VAR_3, 1), 0);
 if (!VAR_4) {
  FUNC_7(VAR_3, "realtime device size check failed");
  return VAR_1;
 }
 FUNC_6(VAR_4);
 return 0;
}

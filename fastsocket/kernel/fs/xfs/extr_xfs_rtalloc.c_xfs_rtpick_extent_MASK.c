
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_rtblock_t ;
struct TYPE_8__ {int sb_rextents; } ;
struct TYPE_9__ {TYPE_4__* m_rbmip; TYPE_2__ m_sb; } ;
typedef TYPE_3__ xfs_mount_t ;
typedef int xfs_extlen_t ;
typedef int __uint64_t ;
struct TYPE_7__ {int di_flags; int di_atime; } ;
struct TYPE_10__ {TYPE_1__ i_d; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_4__*,int ) ;
 int FUNC_4 (int *,TYPE_4__*,int ) ;

int
FUNC_5(
 xfs_mount_t *VAR_3,
 xfs_trans_t *VAR_4,
 xfs_extlen_t VAR_5,
 xfs_rtblock_t *VAR_6)
{
 xfs_rtblock_t VAR_7;
 int VAR_8;
 __uint64_t VAR_9;
 __uint64_t VAR_10;
 __uint64_t *VAR_11;

 FUNC_0(FUNC_3(VAR_3->m_rbmip, VAR_1));

 VAR_11 = (__uint64_t *)&VAR_3->m_rbmip->i_d.di_atime;
 if (!(VAR_3->m_rbmip->i_d.di_flags & VAR_0)) {
  VAR_3->m_rbmip->i_d.di_flags |= VAR_0;
  *VAR_11 = 0;
 }
 VAR_10 = *VAR_11;
 if ((VAR_8 = FUNC_2(VAR_10)) == -1)
  VAR_7 = 0;
 else {
  VAR_9 = VAR_10 - (1ULL << VAR_8);
  VAR_7 = (VAR_3->m_sb.sb_rextents * ((VAR_9 << 1) + 1ULL)) >>
      (VAR_8 + 1);
  if (VAR_7 >= VAR_3->m_sb.sb_rextents)
   VAR_7 = FUNC_1(VAR_7, VAR_3->m_sb.sb_rextents);
  if (VAR_7 + VAR_5 > VAR_3->m_sb.sb_rextents)
   VAR_7 = VAR_3->m_sb.sb_rextents - VAR_5;
 }
 *VAR_11 = VAR_10 + 1;
 FUNC_4(VAR_4, VAR_3->m_rbmip, VAR_2);
 *VAR_6 = VAR_7;
 return 0;
}

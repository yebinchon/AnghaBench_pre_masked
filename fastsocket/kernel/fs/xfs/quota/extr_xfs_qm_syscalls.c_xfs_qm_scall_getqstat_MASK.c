
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct xfs_quotainfo {int qi_iwarnlimit; int qi_bwarnlimit; int qi_rtbtimelimit; int qi_itimelimit; int qi_btimelimit; int qi_dquots; struct xfs_inode* qi_gquotaip; struct xfs_inode* qi_uquotaip; } ;
struct TYPE_8__ {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; } ;
struct xfs_mount {int m_qflags; TYPE_4__ m_sb; struct xfs_quotainfo* m_quotainfo; } ;
struct TYPE_7__ {int di_nextents; int di_nblocks; } ;
struct xfs_inode {TYPE_3__ i_d; } ;
struct TYPE_6__ {scalar_t__ qfs_ino; int qfs_nextents; int qfs_nblks; } ;
struct TYPE_5__ {scalar_t__ qfs_ino; int qfs_nextents; int qfs_nblks; } ;
struct fs_quota_stat {int qs_iwarnlimit; int qs_bwarnlimit; int qs_rtbtimelimit; int qs_itimelimit; int qs_btimelimit; int qs_incoredqs; TYPE_2__ qs_gquota; TYPE_1__ qs_uquota; scalar_t__ qs_pad; scalar_t__ qs_flags; int qs_version; } ;
typedef int fs_quota_stat_t ;
typedef scalar_t__ boolean_t ;
typedef scalar_t__ __uint16_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct xfs_inode*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct fs_quota_stat*,int ,int) ;
 scalar_t__ FUNC_2 (struct xfs_mount*,int *,scalar_t__,int ,int ,struct xfs_inode**) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (TYPE_4__*) ;

int
FUNC_5(
 struct xfs_mount *VAR_6,
 struct fs_quota_stat *VAR_7)
{
 struct xfs_quotainfo *VAR_8 = VAR_6->m_quotainfo;
 struct xfs_inode *VAR_9, *VAR_10;
 boolean_t VAR_11, VAR_12;

 VAR_9 = VAR_10 = ((void*)0);
 VAR_11 = VAR_12 = VAR_0;
 FUNC_1(VAR_7, 0, sizeof(fs_quota_stat_t));

 VAR_7->qs_version = VAR_2;
 if (!FUNC_4(&VAR_6->m_sb)) {
  VAR_7->qs_uquota.qfs_ino = VAR_3;
  VAR_7->qs_gquota.qfs_ino = VAR_3;
  return (0);
 }
 VAR_7->qs_flags = (__uint16_t) FUNC_3(VAR_6->m_qflags &
       (VAR_4|
        VAR_5));
 VAR_7->qs_pad = 0;
 VAR_7->qs_uquota.qfs_ino = VAR_6->m_sb.sb_uquotino;
 VAR_7->qs_gquota.qfs_ino = VAR_6->m_sb.sb_gquotino;

 if (VAR_8) {
  VAR_9 = VAR_8->qi_uquotaip;
  VAR_10 = VAR_8->qi_gquotaip;
 }
 if (!VAR_9 && VAR_6->m_sb.sb_uquotino != VAR_3) {
  if (FUNC_2(VAR_6, ((void*)0), VAR_6->m_sb.sb_uquotino,
     0, 0, &VAR_9) == 0)
   VAR_11 = VAR_1;
 }
 if (!VAR_10 && VAR_6->m_sb.sb_gquotino != VAR_3) {
  if (FUNC_2(VAR_6, ((void*)0), VAR_6->m_sb.sb_gquotino,
     0, 0, &VAR_10) == 0)
   VAR_12 = VAR_1;
 }
 if (VAR_9) {
  VAR_7->qs_uquota.qfs_nblks = VAR_9->i_d.di_nblocks;
  VAR_7->qs_uquota.qfs_nextents = VAR_9->i_d.di_nextents;
  if (VAR_11)
   FUNC_0(VAR_9);
 }
 if (VAR_10) {
  VAR_7->qs_gquota.qfs_nblks = VAR_10->i_d.di_nblocks;
  VAR_7->qs_gquota.qfs_nextents = VAR_10->i_d.di_nextents;
  if (VAR_12)
   FUNC_0(VAR_10);
 }
 if (VAR_8) {
  VAR_7->qs_incoredqs = VAR_8->qi_dquots;
  VAR_7->qs_btimelimit = VAR_8->qi_btimelimit;
  VAR_7->qs_itimelimit = VAR_8->qi_itimelimit;
  VAR_7->qs_rtbtimelimit = VAR_8->qi_rtbtimelimit;
  VAR_7->qs_bwarnlimit = VAR_8->qi_bwarnlimit;
  VAR_7->qs_iwarnlimit = VAR_8->qi_iwarnlimit;
 }
 return 0;
}

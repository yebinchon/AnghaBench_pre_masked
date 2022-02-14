
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ xfs_qcnt_t ;
typedef scalar_t__ xfs_dqid_t ;
typedef int xfs_disk_dquot_t ;
typedef int uint ;
struct xfs_trans {int dummy; } ;
struct xfs_quotainfo {int qi_quotaofflock; int qi_rtbwarnlimit; int qi_iwarnlimit; int qi_bwarnlimit; int qi_rtbtimelimit; int qi_itimelimit; int qi_btimelimit; scalar_t__ qi_isoftlimit; scalar_t__ qi_ihardlimit; scalar_t__ qi_rtbsoftlimit; scalar_t__ qi_rtbhardlimit; scalar_t__ qi_bsoftlimit; scalar_t__ qi_bhardlimit; } ;
struct xfs_mount {struct xfs_quotainfo* m_quotainfo; } ;
struct xfs_disk_dquot {void* d_rtbtimer; void* d_itimer; void* d_btimer; void* d_rtbwarns; void* d_iwarns; void* d_bwarns; void* d_ino_softlimit; void* d_ino_hardlimit; void* d_rtb_softlimit; void* d_rtb_hardlimit; void* d_blk_softlimit; void* d_blk_hardlimit; } ;
struct xfs_dquot {int dq_flags; struct xfs_disk_dquot q_core; } ;
struct TYPE_3__ {int d_fieldmask; int d_rtbwarns; int d_iwarns; int d_bwarns; int d_rtbtimer; int d_itimer; int d_btimer; scalar_t__ d_ino_softlimit; scalar_t__ d_ino_hardlimit; int d_rtb_softlimit; int d_rtb_hardlimit; int d_blk_softlimit; int d_blk_hardlimit; } ;
typedef TYPE_1__ fs_disk_quota_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (struct xfs_mount*,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 scalar_t__ FUNC_2 (void*) ;
 void* FUNC_3 (int ) ;
 void* FUNC_4 (int ) ;
 void* FUNC_5 (scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct xfs_mount*,char*,scalar_t__,scalar_t__) ;
 int FUNC_9 (struct xfs_dquot*) ;
 int FUNC_10 (struct xfs_mount*,struct xfs_disk_dquot*) ;
 int FUNC_11 (struct xfs_mount*,int *,scalar_t__,int ,int ,struct xfs_dquot**) ;
 int FUNC_12 (struct xfs_dquot*) ;
 int FUNC_13 (struct xfs_dquot*) ;
 struct xfs_trans* FUNC_14 (struct xfs_mount*,int ) ;
 int FUNC_15 (struct xfs_trans*,int ) ;
 int FUNC_16 (struct xfs_trans*,int ) ;
 int FUNC_17 (struct xfs_trans*,struct xfs_dquot*) ;
 int FUNC_18 (struct xfs_trans*,struct xfs_dquot*) ;
 int FUNC_19 (struct xfs_trans*,int ,int,int ,int ,int ) ;

int
FUNC_20(
 struct xfs_mount *VAR_20,
 xfs_dqid_t VAR_21,
 uint VAR_22,
 fs_disk_quota_t *VAR_23)
{
 struct xfs_quotainfo *VAR_24 = VAR_20->m_quotainfo;
 struct xfs_disk_dquot *VAR_25;
 struct xfs_dquot *VAR_26;
 struct xfs_trans *VAR_27;
 int VAR_28;
 xfs_qcnt_t VAR_29, VAR_30;

 if (VAR_23->d_fieldmask & ~VAR_16)
  return VAR_0;
 if ((VAR_23->d_fieldmask & VAR_16) == 0)
  return 0;

 VAR_27 = FUNC_14(VAR_20, VAR_19);
 if ((VAR_28 = FUNC_19(VAR_27, 0, sizeof(xfs_disk_dquot_t) + 128,
          0, 0, VAR_14))) {
  FUNC_15(VAR_27, 0);
  return (VAR_28);
 }







 FUNC_6(&VAR_24->qi_quotaofflock);





 if ((VAR_28 = FUNC_11(VAR_20, ((void*)0), VAR_21, VAR_22, VAR_17, &VAR_26))) {
  FUNC_15(VAR_27, VAR_18);
  FUNC_0(VAR_28 != VAR_1);
  goto out_unlock;
 }
 FUNC_17(VAR_27, VAR_26);
 VAR_25 = &VAR_26->q_core;




 VAR_29 = (VAR_23->d_fieldmask & VAR_2) ?
  (xfs_qcnt_t) FUNC_1(VAR_20, VAR_23->d_blk_hardlimit) :
   FUNC_2(VAR_25->d_blk_hardlimit);
 VAR_30 = (VAR_23->d_fieldmask & VAR_3) ?
  (xfs_qcnt_t) FUNC_1(VAR_20, VAR_23->d_blk_softlimit) :
   FUNC_2(VAR_25->d_blk_softlimit);
 if (VAR_29 == 0 || VAR_29 >= VAR_30) {
  VAR_25->d_blk_hardlimit = FUNC_5(VAR_29);
  VAR_25->d_blk_softlimit = FUNC_5(VAR_30);
  FUNC_9(VAR_26);
  if (VAR_21 == 0) {
   VAR_24->qi_bhardlimit = VAR_29;
   VAR_24->qi_bsoftlimit = VAR_30;
  }
 } else {
  FUNC_8(VAR_20, "blkhard %Ld < blksoft %Ld\n", VAR_29, VAR_30);
 }
 VAR_29 = (VAR_23->d_fieldmask & VAR_10) ?
  (xfs_qcnt_t) FUNC_1(VAR_20, VAR_23->d_rtb_hardlimit) :
   FUNC_2(VAR_25->d_rtb_hardlimit);
 VAR_30 = (VAR_23->d_fieldmask & VAR_11) ?
  (xfs_qcnt_t) FUNC_1(VAR_20, VAR_23->d_rtb_softlimit) :
   FUNC_2(VAR_25->d_rtb_softlimit);
 if (VAR_29 == 0 || VAR_29 >= VAR_30) {
  VAR_25->d_rtb_hardlimit = FUNC_5(VAR_29);
  VAR_25->d_rtb_softlimit = FUNC_5(VAR_30);
  if (VAR_21 == 0) {
   VAR_24->qi_rtbhardlimit = VAR_29;
   VAR_24->qi_rtbsoftlimit = VAR_30;
  }
 } else {
  FUNC_8(VAR_20, "rtbhard %Ld < rtbsoft %Ld\n", VAR_29, VAR_30);
 }

 VAR_29 = (VAR_23->d_fieldmask & VAR_6) ?
  (xfs_qcnt_t) VAR_23->d_ino_hardlimit :
   FUNC_2(VAR_25->d_ino_hardlimit);
 VAR_30 = (VAR_23->d_fieldmask & VAR_7) ?
  (xfs_qcnt_t) VAR_23->d_ino_softlimit :
   FUNC_2(VAR_25->d_ino_softlimit);
 if (VAR_29 == 0 || VAR_29 >= VAR_30) {
  VAR_25->d_ino_hardlimit = FUNC_5(VAR_29);
  VAR_25->d_ino_softlimit = FUNC_5(VAR_30);
  if (VAR_21 == 0) {
   VAR_24->qi_ihardlimit = VAR_29;
   VAR_24->qi_isoftlimit = VAR_30;
  }
 } else {
  FUNC_8(VAR_20, "ihard %Ld < isoft %Ld\n", VAR_29, VAR_30);
 }




 if (VAR_23->d_fieldmask & VAR_5)
  VAR_25->d_bwarns = FUNC_3(VAR_23->d_bwarns);
 if (VAR_23->d_fieldmask & VAR_9)
  VAR_25->d_iwarns = FUNC_3(VAR_23->d_iwarns);
 if (VAR_23->d_fieldmask & VAR_13)
  VAR_25->d_rtbwarns = FUNC_3(VAR_23->d_rtbwarns);

 if (VAR_21 == 0) {







  if (VAR_23->d_fieldmask & VAR_4) {
   VAR_24->qi_btimelimit = VAR_23->d_btimer;
   VAR_25->d_btimer = FUNC_4(VAR_23->d_btimer);
  }
  if (VAR_23->d_fieldmask & VAR_8) {
   VAR_24->qi_itimelimit = VAR_23->d_itimer;
   VAR_25->d_itimer = FUNC_4(VAR_23->d_itimer);
  }
  if (VAR_23->d_fieldmask & VAR_12) {
   VAR_24->qi_rtbtimelimit = VAR_23->d_rtbtimer;
   VAR_25->d_rtbtimer = FUNC_4(VAR_23->d_rtbtimer);
  }
  if (VAR_23->d_fieldmask & VAR_5)
   VAR_24->qi_bwarnlimit = VAR_23->d_bwarns;
  if (VAR_23->d_fieldmask & VAR_9)
   VAR_24->qi_iwarnlimit = VAR_23->d_iwarns;
  if (VAR_23->d_fieldmask & VAR_13)
   VAR_24->qi_rtbwarnlimit = VAR_23->d_rtbwarns;
 } else {







  FUNC_10(VAR_20, VAR_25);
 }
 VAR_26->dq_flags |= VAR_15;
 FUNC_18(VAR_27, VAR_26);

 VAR_28 = FUNC_16(VAR_27, 0);
 FUNC_12(VAR_26);
 FUNC_13(VAR_26);

 out_unlock:
 FUNC_7(&VAR_24->qi_quotaofflock);
 return VAR_28;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int xfs_qoff_logitem_t ;
struct TYPE_11__ {int sb_qflags; } ;
struct TYPE_12__ {int m_qflags; int m_sb_lock; TYPE_1__ m_sb; struct xfs_quotainfo* m_quotainfo; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int uint ;
struct xfs_quotainfo {int qi_quotaofflock; int * qi_gquotaip; int * qi_uquotaip; } ;


 int FUNC_0 (struct xfs_quotainfo*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (TYPE_2__*,int ) ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (TYPE_2__*,int) ;
 int FUNC_11 (TYPE_2__*,int) ;
 int FUNC_12 (TYPE_2__*,int **,int) ;
 int FUNC_13 (TYPE_2__*,int *,int) ;
 int FUNC_14 (TYPE_2__*,int ) ;

int
FUNC_15(
 xfs_mount_t *VAR_21,
 uint VAR_22)
{
 struct xfs_quotainfo *VAR_23 = VAR_21->m_quotainfo;
 uint VAR_24;
 int VAR_25;
 uint VAR_26;
 xfs_qoff_logitem_t *VAR_27;
 int VAR_28;






 if ((VAR_21->m_qflags & VAR_22) == 0)
  return FUNC_2(VAR_0);
 VAR_25 = 0;

 VAR_22 &= (VAR_2 | VAR_3);







 FUNC_0(VAR_23);
 FUNC_4(&VAR_23->qi_quotaofflock);




 if ((VAR_22 & VAR_2) == 0) {
  VAR_21->m_qflags &= ~(VAR_22);

  FUNC_6(&VAR_21->m_sb_lock);
  VAR_21->m_sb.sb_qflags = VAR_21->m_qflags;
  FUNC_7(&VAR_21->m_sb_lock);
  FUNC_5(&VAR_23->qi_quotaofflock);


  VAR_25 = FUNC_14(VAR_21, VAR_16);
  return (VAR_25);
 }

 VAR_24 = 0;
 VAR_26 = 0;





 if (VAR_22 & VAR_17) {
  VAR_24 |= VAR_15;
  VAR_22 |= (VAR_19 | VAR_20);
  VAR_26 |= VAR_18;
 }
 if (VAR_22 & VAR_4) {
  VAR_24 |= VAR_13;
  VAR_22 |= (VAR_9 | VAR_10);
  VAR_26 |= VAR_5;
 } else if (VAR_22 & VAR_11) {
  VAR_24 |= VAR_14;
  VAR_22 |= (VAR_9 | VAR_10);
  VAR_26 |= VAR_12;
 }





 if ((VAR_21->m_qflags & VAR_22) == 0)
  goto out_unlock;






 VAR_25 = FUNC_12(VAR_21, &VAR_27, VAR_22);
 if (VAR_25)
  goto out_unlock;
 VAR_21->m_qflags &= ~VAR_26;
 FUNC_11(VAR_21, VAR_22);






 VAR_21->m_qflags &= ~(VAR_22);
 while ((VAR_28 = FUNC_10(VAR_21, VAR_24)))
  FUNC_3(10 * VAR_28);
 VAR_25 = FUNC_13(VAR_21, VAR_27, VAR_22);
 if (VAR_25) {

  FUNC_8(VAR_21, VAR_1);
  goto out_unlock;
 }




 if (((VAR_22 & VAR_6) == VAR_7) ||
     ((VAR_22 & VAR_6) == VAR_8)) {
  FUNC_5(&VAR_23->qi_quotaofflock);
  FUNC_9(VAR_21);
  return (0);
 }




 if ((VAR_24 & VAR_15) && VAR_23->qi_uquotaip) {
  FUNC_1(VAR_23->qi_uquotaip);
  VAR_23->qi_uquotaip = ((void*)0);
 }
 if ((VAR_24 & (VAR_13|VAR_14)) && VAR_23->qi_gquotaip) {
  FUNC_1(VAR_23->qi_gquotaip);
  VAR_23->qi_gquotaip = ((void*)0);
 }

out_unlock:
 FUNC_5(&VAR_23->qi_quotaofflock);
 return VAR_25;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_16__ {int m_qflags; TYPE_1__* m_quotainfo; int m_ddev_targp; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_inode_t ;
typedef scalar_t__ xfs_ino_t ;
typedef int uint ;
struct TYPE_15__ {int * qi_gquotaip; int * qi_uquotaip; int qi_dqlist; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int * VAR_7 ;
 int FUNC_5 (TYPE_2__*,scalar_t__*,int*,int ,size_t,int *,int*) ;
 scalar_t__ FUNC_6 (TYPE_2__*) ;
 int FUNC_7 (TYPE_2__*,char*) ;
 int FUNC_8 (TYPE_2__*) ;
 int FUNC_9 (TYPE_2__*,int ) ;
 int FUNC_10 (TYPE_2__*,int *,int ) ;
 int FUNC_11 (TYPE_2__*,int ) ;
 int FUNC_12 (TYPE_2__*) ;
 int VAR_8 ;
 int FUNC_13 (TYPE_2__*,char*,...) ;

int
FUNC_14(
 xfs_mount_t *VAR_9)
{
 int VAR_10, VAR_11, VAR_12;
 xfs_ino_t VAR_13;
 size_t VAR_14;
 xfs_inode_t *VAR_15, *VAR_16;
 uint VAR_17;

 VAR_11 = VAR_0;
 VAR_14 = 1;
 VAR_13 = 0;
 VAR_17 = 0;

 FUNC_0(VAR_9->m_quotainfo->qi_uquotaip || VAR_9->m_quotainfo->qi_gquotaip);
 FUNC_0(FUNC_2(VAR_9));





 FUNC_0(FUNC_4(&VAR_9->m_quotainfo->qi_dqlist));

 FUNC_7(VAR_9, "Quotacheck needed: Please wait.");






 VAR_15 = VAR_9->m_quotainfo->qi_uquotaip;
 if (VAR_15) {
  VAR_12 = FUNC_10(VAR_9, VAR_15, VAR_5);
  if (VAR_12)
   goto error_return;
  VAR_17 |= VAR_6;
 }

 VAR_16 = VAR_9->m_quotainfo->qi_gquotaip;
 if (VAR_16) {
  VAR_12 = FUNC_10(VAR_9, VAR_16, FUNC_1(VAR_9) ?
     VAR_2 : VAR_3);
  if (VAR_12)
   goto error_return;
  VAR_17 |= VAR_1;
 }

 do {




  VAR_12 = FUNC_5(VAR_9, &VAR_13, &VAR_11,
         VAR_8,
         VAR_14, ((void*)0), &VAR_10);
  if (VAR_12)
   break;

 } while (!VAR_10);






 if (!VAR_12)
  VAR_12 = FUNC_9(VAR_9, 0);
 if (VAR_12) {
  FUNC_11(VAR_9, VAR_4);
  goto error_return;
 }
 FUNC_3(VAR_9->m_ddev_targp);






 VAR_9->m_qflags &= ~(VAR_1 | VAR_6);
 VAR_9->m_qflags |= VAR_17;

 FUNC_12(VAR_9);

 error_return:
 if (VAR_12) {
  FUNC_13(VAR_9,
 "Quotacheck: Unsuccessful (Error %d): Disabling quotas.",
   VAR_12);



  FUNC_0(VAR_9->m_quotainfo != ((void*)0));
  FUNC_0(VAR_7 != ((void*)0));
  FUNC_8(VAR_9);
  if (FUNC_6(VAR_9)) {
   FUNC_13(VAR_9,
    "Quotacheck: Failed to reset quota flags.");
  }
 } else
  FUNC_7(VAR_9, "Quotacheck: Done.");
 return (VAR_12);
}

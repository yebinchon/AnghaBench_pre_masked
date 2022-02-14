
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_ddev_targp; int m_rootip; } ;
typedef scalar_t__ __uint64_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct xfs_mount*,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (struct xfs_mount*,int ) ;
 int FUNC_6 (struct xfs_mount*,int) ;
 int FUNC_7 (struct xfs_mount*) ;
 int FUNC_8 (struct xfs_mount*) ;
 int FUNC_9 (struct xfs_mount*) ;
 int FUNC_10 (struct xfs_mount*) ;
 int FUNC_11 (struct xfs_mount*,int ) ;
 int FUNC_12 (struct xfs_mount*,scalar_t__*,int *) ;
 int FUNC_13 (struct xfs_mount*) ;
 int FUNC_14 (struct xfs_mount*) ;
 int FUNC_15 (struct xfs_mount*) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (struct xfs_mount*,char*,...) ;

void
FUNC_18(
 struct xfs_mount *VAR_2)
{
 __uint64_t VAR_3;
 int VAR_4;

 FUNC_10(VAR_2);
 FUNC_13(VAR_2);
 FUNC_0(VAR_2->m_rootip);
 FUNC_5(VAR_2, VAR_1);
 FUNC_11(VAR_2, 0);
 FUNC_1(VAR_2->m_ddev_targp);
 FUNC_11(VAR_2, VAR_0);

 FUNC_9(VAR_2);






 FUNC_5(VAR_2, VAR_1);
 VAR_3 = 0;
 VAR_4 = FUNC_12(VAR_2, &VAR_3, ((void*)0));
 if (VAR_4)
  FUNC_17(VAR_2, "Unable to free reserved block pool. "
    "Freespace may not be correct on next mount.");

 VAR_4 = FUNC_6(VAR_2, 1);
 if (VAR_4)
  FUNC_17(VAR_2, "Unable to update superblock counters. "
    "Freespace may not be correct on next mount.");
 FUNC_14(VAR_2);





 VAR_4 = FUNC_3(VAR_2->m_ddev_targp, 1);
 if (VAR_4)
  FUNC_17(VAR_2, "%d busy buffers during unmount.", VAR_4);
 FUNC_16(VAR_2->m_ddev_targp);

 FUNC_8(VAR_2);
 FUNC_7(VAR_2);
 FUNC_15(VAR_2);




 FUNC_4(VAR_2);
}

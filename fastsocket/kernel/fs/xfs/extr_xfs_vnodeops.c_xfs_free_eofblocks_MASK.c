
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


typedef int xfs_ufsize_t ;
typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_15__ {scalar_t__ i_delayed_blks; } ;
typedef TYPE_1__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
typedef scalar_t__ xfs_filblks_t ;
struct TYPE_16__ {scalar_t__ br_startblock; } ;
typedef TYPE_2__ xfs_bmbt_irec_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int *,int ) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int VAR_7 ;
 int FUNC_4 (int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (int *,TYPE_1__*,scalar_t__,scalar_t__,int ,int *,int ,TYPE_2__*,int*,int *) ;
 int FUNC_7 (TYPE_1__*,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (int **,TYPE_1__*,scalar_t__,int ) ;
 int FUNC_11 (TYPE_1__*,int ,scalar_t__) ;
 int FUNC_12 (TYPE_1__*,int) ;
 int FUNC_13 (TYPE_1__*,int ) ;
 int * FUNC_14 (int *,int ) ;
 int FUNC_15 (int *,int) ;
 int FUNC_16 (int *,int) ;
 int FUNC_17 (int *,TYPE_1__*) ;
 int FUNC_18 (int *,int ,int ,int ,int ,int ) ;

int
FUNC_19(
 xfs_mount_t *VAR_13,
 xfs_inode_t *VAR_14,
 int VAR_15)
{
 xfs_trans_t *VAR_16;
 int VAR_17;
 xfs_fileoff_t VAR_18;
 xfs_fileoff_t VAR_19;
 xfs_filblks_t VAR_20;
 int VAR_21;
 xfs_bmbt_irec_t VAR_22;





 VAR_18 = FUNC_1(VAR_13, (xfs_ufsize_t)FUNC_3(VAR_14));
 VAR_19 = FUNC_1(VAR_13, (xfs_ufsize_t)FUNC_5(VAR_13));
 if (VAR_19 <= VAR_18)
  return 0;
 VAR_20 = VAR_19 - VAR_18;

 VAR_21 = 1;
 FUNC_7(VAR_14, VAR_5);
 VAR_17 = FUNC_6(((void*)0), VAR_14, VAR_18, VAR_20, 0,
     ((void*)0), 0, &VAR_22, &VAR_21, ((void*)0));
 FUNC_12(VAR_14, VAR_5);

 if (!VAR_17 && (VAR_21 != 0) &&
     (VAR_22.br_startblock != VAR_1 ||
      VAR_14->i_delayed_blks)) {



  VAR_17 = FUNC_13(VAR_14, 0);
  if (VAR_17)
   return VAR_17;






  VAR_16 = FUNC_14(VAR_13, VAR_10);
  if (VAR_15 & VAR_3) {
   if (!FUNC_8(VAR_14, VAR_6)) {
    FUNC_15(VAR_16, 0);
    return VAR_0;
   }
  } else {
   FUNC_7(VAR_14, VAR_6);
  }
  VAR_17 = FUNC_11(VAR_14, VAR_8,
        FUNC_3(VAR_14));
  if (VAR_17) {
   FUNC_15(VAR_16, 0);
   FUNC_12(VAR_14, VAR_6);
   return VAR_17;
  }

  VAR_17 = FUNC_18(VAR_16, 0,
       FUNC_4(VAR_13),
       0, VAR_11,
       VAR_7);
  if (VAR_17) {
   FUNC_0(FUNC_2(VAR_13));
   FUNC_15(VAR_16, 0);
   FUNC_12(VAR_14, VAR_6);
   return VAR_17;
  }

  FUNC_7(VAR_14, VAR_4);
  FUNC_17(VAR_16, VAR_14);

  VAR_17 = FUNC_10(&VAR_16, VAR_14, FUNC_3(VAR_14),
          VAR_2);




  if (VAR_17) {
   FUNC_15(VAR_16,
      (VAR_12 |
       VAR_9));
  } else {
   VAR_17 = FUNC_16(VAR_16,
      VAR_12);
   if (!VAR_17)
    FUNC_9(VAR_14);
  }
  FUNC_12(VAR_14, VAR_6|VAR_4);
 }
 return VAR_17;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_33__ TYPE_3__ ;
typedef struct TYPE_32__ TYPE_2__ ;
typedef struct TYPE_31__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_32__ {int m_flags; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_31__ {int di_mode; scalar_t__ di_nlink; int di_flags; } ;
struct TYPE_33__ {int i_ino; TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_bmap_free_t ;
struct xfs_name {int len; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_4 (TYPE_3__*,TYPE_3__*,struct xfs_name*,struct xfs_name*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int **,int *,int*) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (int *,TYPE_3__*) ;
 int FUNC_10 (int *,TYPE_3__*,struct xfs_name*,int) ;
 int FUNC_11 (int *,TYPE_3__*,struct xfs_name*,int ,int *,int *,int) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (int *,TYPE_3__*,struct xfs_name*,int ,int *,int *,int) ;
 int FUNC_14 (int *,TYPE_3__*,struct xfs_name*,int ,int *,int *,int) ;
 int FUNC_15 (int *,TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*) ;
 int FUNC_17 (TYPE_3__**,int,int ) ;
 struct xfs_name VAR_19 ;
 int FUNC_18 (TYPE_3__**) ;
 int FUNC_19 (TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__*,TYPE_3__**,int*) ;
 int * FUNC_20 (TYPE_2__*,int ) ;
 int FUNC_21 (int *,int) ;
 int FUNC_22 (int *,int) ;
 int FUNC_23 (int *,TYPE_3__*,int) ;
 int FUNC_24 (int *,TYPE_3__*,int ) ;
 int FUNC_25 (int *,TYPE_3__*,int ) ;
 int FUNC_26 (int *,int,int ,int ,int ,int ) ;
 int FUNC_27 (int *) ;

int
FUNC_28(
 xfs_inode_t *VAR_20,
 struct xfs_name *VAR_21,
 xfs_inode_t *VAR_22,
 xfs_inode_t *VAR_23,
 struct xfs_name *VAR_24,
 xfs_inode_t *VAR_25)
{
 xfs_trans_t *VAR_26 = ((void*)0);
 xfs_mount_t *VAR_27 = VAR_20->i_mount;
 int VAR_28;
 int VAR_29;
 int VAR_30;
 xfs_bmap_free_t VAR_31;
 xfs_fsblock_t VAR_32;
 int VAR_33;
 int VAR_34;
 xfs_inode_t *VAR_35[4];
 int VAR_36;
 int VAR_37;

 FUNC_4(VAR_20, VAR_23, VAR_21, VAR_24);

 VAR_28 = (VAR_20 != VAR_23);
 VAR_29 = ((VAR_22->i_d.di_mode & VAR_5) == VAR_4);

 if (VAR_29) {



  if (VAR_25 == ((void*)0) && VAR_28 &&
      VAR_23->i_d.di_nlink >= VAR_11) {
   VAR_30 = FUNC_1(VAR_1);
   goto std_return;
  }
 }

 FUNC_19(VAR_20, VAR_23, VAR_22, VAR_25,
    VAR_35, &VAR_37);

 FUNC_8(&VAR_31, &VAR_32);
 VAR_26 = FUNC_20(VAR_27, VAR_18);
 VAR_33 = VAR_17;
 VAR_36 = FUNC_3(VAR_27, VAR_24->len);
 VAR_30 = FUNC_26(VAR_26, VAR_36, FUNC_2(VAR_27), 0,
   VAR_16, VAR_14);
 if (VAR_30 == VAR_2) {
  VAR_36 = 0;
  VAR_30 = FUNC_26(VAR_26, 0, FUNC_2(VAR_27), 0,
    VAR_16, VAR_14);
 }
 if (VAR_30) {
  FUNC_21(VAR_26, 0);
  goto std_return;
 }




 VAR_30 = FUNC_18(VAR_35);
 if (VAR_30) {
  FUNC_21(VAR_26, VAR_33);
  goto std_return;
 }







 FUNC_17(VAR_35, VAR_37, VAR_9);






 FUNC_24(VAR_26, VAR_20, VAR_9);
 if (VAR_28)
  FUNC_24(VAR_26, VAR_23, VAR_9);
 FUNC_24(VAR_26, VAR_22, VAR_9);
 if (VAR_25)
  FUNC_24(VAR_26, VAR_25, VAR_9);






 if (FUNC_5((VAR_23->i_d.di_flags & VAR_6) &&
       (FUNC_16(VAR_23) != FUNC_16(VAR_22)))) {
  VAR_30 = FUNC_1(VAR_3);
  goto error_return;
 }




 if (VAR_25 == ((void*)0)) {




  VAR_30 = FUNC_10(VAR_26, VAR_23, VAR_24, VAR_36);
  if (VAR_30)
   goto error_return;





  VAR_30 = FUNC_11(VAR_26, VAR_23, VAR_24,
      VAR_22->i_ino, &VAR_32,
      &VAR_31, VAR_36);
  if (VAR_30 == VAR_2)
   goto error_return;
  if (VAR_30)
   goto abort_return;

  FUNC_23(VAR_26, VAR_23,
     VAR_8 | VAR_7);

  if (VAR_28 && VAR_29) {
   VAR_30 = FUNC_9(VAR_26, VAR_23);
   if (VAR_30)
    goto abort_return;
  }
 } else {





  if ((VAR_25->i_d.di_mode & VAR_5) == VAR_4) {



   if (!(FUNC_12(VAR_25)) ||
       (VAR_25->i_d.di_nlink > 2)) {
    VAR_30 = FUNC_1(VAR_0);
    goto error_return;
   }
  }
  VAR_30 = FUNC_14(VAR_26, VAR_23, VAR_24,
     VAR_22->i_ino,
     &VAR_32, &VAR_31, VAR_36);
  if (VAR_30)
   goto abort_return;

  FUNC_23(VAR_26, VAR_23,
     VAR_8 | VAR_7);





  VAR_30 = FUNC_15(VAR_26, VAR_25);
  if (VAR_30)
   goto abort_return;

  if (VAR_29) {



   VAR_30 = FUNC_15(VAR_26, VAR_25);
   if (VAR_30)
    goto abort_return;
  }
 }




 if (VAR_28 && VAR_29) {




  VAR_30 = FUNC_14(VAR_26, VAR_22, &VAR_19,
     VAR_23->i_ino,
     &VAR_32, &VAR_31, VAR_36);
  FUNC_0(VAR_30 != VAR_0);
  if (VAR_30)
   goto abort_return;
 }
 FUNC_23(VAR_26, VAR_22, VAR_7);
 FUNC_25(VAR_26, VAR_22, VAR_10);






 if (VAR_29 && (VAR_28 || VAR_25 != ((void*)0))) {





  VAR_30 = FUNC_15(VAR_26, VAR_20);
  if (VAR_30)
   goto abort_return;
 }

 VAR_30 = FUNC_13(VAR_26, VAR_20, VAR_21, VAR_22->i_ino,
     &VAR_32, &VAR_31, VAR_36);
 if (VAR_30)
  goto abort_return;

 FUNC_23(VAR_26, VAR_20, VAR_8 | VAR_7);
 FUNC_25(VAR_26, VAR_20, VAR_10);
 if (VAR_28)
  FUNC_25(VAR_26, VAR_23, VAR_10);






 if (VAR_27->m_flags & (VAR_13|VAR_12)) {
  FUNC_27(VAR_26);
 }

 VAR_30 = FUNC_7(&VAR_26, &VAR_31, &VAR_34);
 if (VAR_30) {
  FUNC_6(&VAR_31);
  FUNC_21(VAR_26, (VAR_17 |
     VAR_15));
  goto std_return;
 }





 return FUNC_22(VAR_26, VAR_17);

 abort_return:
 VAR_33 |= VAR_15;
 error_return:
 FUNC_6(&VAR_31);
 FUNC_21(VAR_26, VAR_33);
 std_return:
 return VAR_30;
}

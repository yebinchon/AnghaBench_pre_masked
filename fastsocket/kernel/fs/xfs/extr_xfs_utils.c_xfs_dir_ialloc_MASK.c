
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int t_flags; int * t_dqinfo; int t_ticket; } ;
typedef TYPE_1__ xfs_trans_t ;
typedef int xfs_nlink_t ;
typedef int xfs_inode_t ;
typedef int xfs_dev_t ;
typedef int xfs_buf_t ;
typedef int uint ;
typedef int prid_t ;
typedef int mode_t ;
typedef scalar_t__ boolean_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *,int ,int ,int ,int ,int,int **,scalar_t__*,int **) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_1__*,int *) ;
 int FUNC_6 (TYPE_1__*,int *) ;
 int FUNC_7 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*,int ,int,int ,int,int) ;

int
FUNC_13(
 xfs_trans_t **VAR_4,

 xfs_inode_t *VAR_5,

 mode_t VAR_6,
 xfs_nlink_t VAR_7,
 xfs_dev_t VAR_8,
 prid_t VAR_9,
 int VAR_10,
 xfs_inode_t **VAR_11,

 int *VAR_12)

{
 xfs_trans_t *VAR_13;
 xfs_trans_t *VAR_14;
 xfs_inode_t *VAR_15;
 xfs_buf_t *VAR_16 = ((void*)0);
 boolean_t VAR_17 = VAR_0;
 int VAR_18;
 uint VAR_19;
 uint VAR_20;
 void *VAR_21;
 uint VAR_22;

 VAR_13 = *VAR_4;
 FUNC_0(VAR_13->t_flags & VAR_3);
 VAR_18 = FUNC_3(VAR_13, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10,
     &VAR_16, &VAR_17, &VAR_15);






 if (VAR_18) {
  *VAR_11 = ((void*)0);
  return VAR_18;
 }
 if (!VAR_17 && (VAR_15 == ((void*)0))) {
  *VAR_11 = ((void*)0);
  return FUNC_1(VAR_1);
 }







 if (VAR_17) {
  FUNC_5(VAR_13, VAR_16);




  VAR_19 = FUNC_11(VAR_13);
  VAR_20 = FUNC_10(VAR_13);






  VAR_21 = ((void*)0);
  VAR_22 = 0;
  if (VAR_13->t_dqinfo) {
   VAR_21 = (void *)VAR_13->t_dqinfo;
   VAR_13->t_dqinfo = ((void*)0);
   VAR_22 = VAR_13->t_flags & VAR_2;
   VAR_13->t_flags &= ~(VAR_2);
  }

  VAR_14 = FUNC_8(VAR_13);
  VAR_18 = FUNC_7(VAR_13, 0);
  VAR_13 = VAR_14;
  if (VAR_12 != ((void*)0)) {
   *VAR_12 = 1;
  }





  if (VAR_18) {
   FUNC_2(VAR_16);
   if (VAR_21) {
    VAR_13->t_dqinfo = VAR_21;
    FUNC_9(VAR_13);
   }
   *VAR_4 = VAR_14;
   *VAR_11 = ((void*)0);
   return VAR_18;
  }





  FUNC_4(VAR_13->t_ticket);
  VAR_18 = FUNC_12(VAR_13, 0, VAR_19, 0,
      VAR_3, VAR_20);



  if (VAR_21) {
   VAR_13->t_dqinfo = VAR_21;
   VAR_13->t_flags |= VAR_22;
  }

  if (VAR_18) {
   FUNC_2(VAR_16);
   *VAR_4 = VAR_14;
   *VAR_11 = ((void*)0);
   return VAR_18;
  }
  FUNC_6(VAR_13, VAR_16);






  VAR_18 = FUNC_3(VAR_13, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9,
      VAR_10, &VAR_16, &VAR_17, &VAR_15);





  if (VAR_18) {
   *VAR_4 = VAR_13;
   *VAR_11 = ((void*)0);
   return VAR_18;
  }
  FUNC_0 ((!VAR_17) && (VAR_15 != ((void*)0)));

 } else {
  if (VAR_12 != ((void*)0)) {
   *VAR_12 = 0;
  }
 }

 *VAR_11 = VAR_15;
 *VAR_4 = VAR_13;

 return 0;
}

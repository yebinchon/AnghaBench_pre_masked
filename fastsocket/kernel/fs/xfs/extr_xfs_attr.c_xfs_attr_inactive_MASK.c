
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_12__ {scalar_t__ di_aformat; } ;
struct TYPE_13__ {TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int *,TYPE_2__*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int **,TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int **,TYPE_2__*,long long,int ) ;
 int FUNC_7 (TYPE_2__*,int ) ;
 int * FUNC_8 (int *,int ) ;
 int FUNC_9 (int *,int) ;
 int FUNC_10 (int *,int) ;
 int FUNC_11 (int *,TYPE_2__*) ;
 int FUNC_12 (int *,TYPE_2__*,int ) ;
 int FUNC_13 (int *,int ,int ,int ,int ,int ) ;

int
FUNC_14(xfs_inode_t *VAR_10)
{
 xfs_trans_t *VAR_11;
 xfs_mount_t *VAR_12;
 int VAR_13;

 VAR_12 = VAR_10->i_mount;
 FUNC_0(! FUNC_2(VAR_12, VAR_10));

 FUNC_4(VAR_10, VAR_4);
 if (!FUNC_5(VAR_10) ||
     VAR_10->i_d.di_aformat == VAR_2) {
  FUNC_7(VAR_10, VAR_4);
  return 0;
 }
 FUNC_7(VAR_10, VAR_4);
 VAR_11 = FUNC_8(VAR_12, VAR_7);
 if ((VAR_13 = FUNC_13(VAR_11, 0, FUNC_1(VAR_12), 0,
          VAR_8,
          VAR_0))) {
  FUNC_9(VAR_11, 0);
  return(VAR_13);
 }
 FUNC_4(VAR_10, VAR_3);





 FUNC_11(VAR_11, VAR_10);




 if (!FUNC_5(VAR_10) ||
     VAR_10->i_d.di_aformat == VAR_2) {
  VAR_13 = 0;
  goto out;
 }
 VAR_13 = FUNC_3(&VAR_11, VAR_10);
 if (VAR_13)
  goto out;

 VAR_13 = FUNC_6(&VAR_11, VAR_10, 0LL, VAR_1);
 if (VAR_13)
  goto out;




 FUNC_12(VAR_11, VAR_10, VAR_5);
 VAR_13 = FUNC_10(VAR_11, VAR_9);
 FUNC_7(VAR_10, VAR_3);

 return(VAR_13);

out:
 FUNC_9(VAR_11, VAR_9|VAR_6);
 FUNC_7(VAR_10, VAR_3);
 return(VAR_13);
}

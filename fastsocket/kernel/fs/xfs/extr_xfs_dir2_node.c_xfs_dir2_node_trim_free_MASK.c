
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_13__ {int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef scalar_t__ xfs_fileoff_t ;
struct TYPE_12__ {int nused; int magic; } ;
struct TYPE_14__ {TYPE_1__ hdr; } ;
typedef TYPE_3__ xfs_dir2_free_t ;
struct TYPE_15__ {TYPE_3__* data; } ;
typedef TYPE_4__ xfs_dabuf_t ;
typedef int xfs_dablk_t ;
struct TYPE_16__ {int * trans; TYPE_2__* dp; } ;
typedef TYPE_5__ xfs_da_args_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (int *,TYPE_4__*) ;
 int FUNC_4 (int *,TYPE_2__*,int ,int,TYPE_4__**,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (TYPE_5__*,int ,TYPE_4__*) ;

int
FUNC_7(
 xfs_da_args_t *VAR_3,
 xfs_fileoff_t VAR_4,
 int *VAR_5)
{
 xfs_dabuf_t *VAR_6;
 xfs_inode_t *VAR_7;
 int VAR_8;
 xfs_dir2_free_t *VAR_9;
 xfs_mount_t *VAR_10;
 xfs_trans_t *VAR_11;

 VAR_7 = VAR_3->dp;
 VAR_10 = VAR_7->i_mount;
 VAR_11 = VAR_3->trans;



 if (FUNC_2(VAR_8 = FUNC_4(VAR_11, VAR_7, (xfs_dablk_t)VAR_4, -2, &VAR_6,
   VAR_1))) {
  return VAR_8;
 }





 if (VAR_6 == ((void*)0)) {
  return 0;
 }
 VAR_9 = VAR_6->data;
 FUNC_0(FUNC_1(VAR_9->hdr.magic) == VAR_2);



 if (FUNC_1(VAR_9->hdr.nused) > 0) {
  FUNC_3(VAR_11, VAR_6);
  *VAR_5 = 0;
  return 0;
 }



 if ((VAR_8 =
     FUNC_6(VAR_3, FUNC_5(VAR_10, (xfs_dablk_t)VAR_4),
      VAR_6))) {





  FUNC_0(VAR_8 != VAR_0);
  FUNC_3(VAR_11, VAR_6);
  return VAR_8;
 }



 *VAR_5 = 1;
 return 0;
}

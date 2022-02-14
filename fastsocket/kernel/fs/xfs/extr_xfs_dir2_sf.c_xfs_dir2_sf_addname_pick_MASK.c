
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_24__ TYPE_8__ ;
typedef struct TYPE_23__ TYPE_7__ ;
typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_20__ {int m_dirblksize; } ;
typedef TYPE_4__ xfs_mount_t ;
struct TYPE_17__ {scalar_t__ if_data; } ;
struct TYPE_18__ {TYPE_1__ if_u1; } ;
struct TYPE_21__ {TYPE_2__ i_df; TYPE_4__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_19__ {int count; } ;
struct TYPE_22__ {TYPE_3__ hdr; } ;
typedef TYPE_6__ xfs_dir2_sf_t ;
struct TYPE_23__ {int namelen; } ;
typedef TYPE_7__ xfs_dir2_sf_entry_t ;
typedef int xfs_dir2_leaf_entry_t ;
typedef int xfs_dir2_data_aoff_t ;
typedef int xfs_dir2_block_tail_t ;
struct TYPE_24__ {int namelen; TYPE_5__* dp; } ;
typedef TYPE_8__ xfs_da_args_t ;
typedef int uint ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 TYPE_7__* FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_7__*) ;
 TYPE_7__* FUNC_4 (TYPE_6__*,TYPE_7__*) ;

__attribute__((used)) static int
FUNC_5(
 xfs_da_args_t *VAR_1,
 int VAR_2,
 xfs_dir2_sf_entry_t **VAR_3,
 xfs_dir2_data_aoff_t *VAR_4)
{
 xfs_inode_t *VAR_5;
 int VAR_6;
 int VAR_7;
 xfs_mount_t *VAR_8;
 xfs_dir2_data_aoff_t VAR_9;
 xfs_dir2_sf_entry_t *VAR_10;
 xfs_dir2_sf_t *VAR_11;
 int VAR_12;
 int VAR_13;

 VAR_5 = VAR_1->dp;
 VAR_8 = VAR_5->i_mount;

 VAR_11 = (xfs_dir2_sf_t *)VAR_5->i_df.if_u1.if_data;
 VAR_12 = FUNC_1(VAR_1->namelen);
 VAR_9 = VAR_0;
 VAR_10 = FUNC_2(VAR_11);
 VAR_6 = 0;





 for (VAR_7 = 0; VAR_7 < VAR_11->hdr.count; VAR_7++) {
  if (!VAR_6)
   VAR_6 = VAR_9 + VAR_12 <= FUNC_3(VAR_10);
  VAR_9 = FUNC_3(VAR_10) +
    FUNC_1(VAR_10->namelen);
  VAR_10 = FUNC_4(VAR_11, VAR_10);
 }




 VAR_13 = VAR_9 +
        (VAR_11->hdr.count + 3) * (uint)sizeof(xfs_dir2_leaf_entry_t) +
        (uint)sizeof(xfs_dir2_block_tail_t);





 if (VAR_13 + (VAR_6 ? 0 : VAR_12) > VAR_8->m_dirblksize)
  return 0;
 FUNC_0(VAR_2 == 0);




 if (VAR_13 + VAR_12 > VAR_8->m_dirblksize)
  return 2;



 *VAR_3 = VAR_10;
 *VAR_4 = VAR_9;
 return 1;
}

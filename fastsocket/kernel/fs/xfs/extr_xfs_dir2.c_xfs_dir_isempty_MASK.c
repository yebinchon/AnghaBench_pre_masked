
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ if_data; } ;
struct TYPE_11__ {TYPE_2__ if_u1; } ;
struct TYPE_9__ {int di_mode; scalar_t__ di_size; } ;
struct TYPE_13__ {TYPE_3__ i_df; TYPE_1__ i_d; } ;
typedef TYPE_5__ xfs_inode_t ;
struct TYPE_12__ {int count; } ;
struct TYPE_14__ {TYPE_4__ hdr; } ;
typedef TYPE_6__ xfs_dir2_sf_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (TYPE_5__*) ;

int
FUNC_2(
 xfs_inode_t *VAR_2)
{
 xfs_dir2_sf_t *VAR_3;

 FUNC_0((VAR_2->i_d.di_mode & VAR_1) == VAR_0);
 if (VAR_2->i_d.di_size == 0)
  return 1;
 if (VAR_2->i_d.di_size > FUNC_1(VAR_2))
  return 0;
 VAR_3 = (xfs_dir2_sf_t *)VAR_2->i_df.if_u1.if_data;
 return !VAR_3->hdr.count;
}

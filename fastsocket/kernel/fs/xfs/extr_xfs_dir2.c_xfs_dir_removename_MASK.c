
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_16__ {int di_mode; scalar_t__ di_format; } ;
struct TYPE_17__ {TYPE_3__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_4__ xfs_inode_t ;
typedef int xfs_ino_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct TYPE_18__ {int * trans; int whichfork; int total; int * flist; int * firstblock; TYPE_4__* dp; int inumber; int hashval; int namelen; int name; } ;
typedef TYPE_5__ xfs_da_args_t ;
typedef int xfs_bmap_free_t ;
struct xfs_name {int len; int name; } ;
struct TYPE_15__ {TYPE_1__* m_dirnameops; } ;
struct TYPE_14__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (struct xfs_name*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,TYPE_4__*,int*) ;
 int FUNC_6 (int *,TYPE_4__*,int*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_4 ;

int
FUNC_10(
 xfs_trans_t *VAR_5,
 xfs_inode_t *VAR_6,
 struct xfs_name *VAR_7,
 xfs_ino_t VAR_8,
 xfs_fsblock_t *VAR_9,
 xfs_bmap_free_t *VAR_10,
 xfs_extlen_t VAR_11)
{
 xfs_da_args_t VAR_12;
 int VAR_13;
 int VAR_14;

 FUNC_0((VAR_6->i_d.di_mode & VAR_1) == VAR_0);
 FUNC_1(VAR_4);

 FUNC_2(&VAR_12, 0, sizeof(xfs_da_args_t));
 VAR_12.name = VAR_7->name;
 VAR_12.namelen = VAR_7->len;
 VAR_12.hashval = VAR_6->i_mount->m_dirnameops->hashname(VAR_7);
 VAR_12.inumber = VAR_8;
 VAR_12.dp = VAR_6;
 VAR_12.firstblock = VAR_9;
 VAR_12.flist = VAR_10;
 VAR_12.total = VAR_11;
 VAR_12.whichfork = VAR_2;
 VAR_12.trans = VAR_5;

 if (VAR_6->i_d.di_format == VAR_3)
  VAR_13 = FUNC_9(&VAR_12);
 else if ((VAR_13 = FUNC_5(VAR_5, VAR_6, &VAR_14)))
  return VAR_13;
 else if (VAR_14)
  VAR_13 = FUNC_4(&VAR_12);
 else if ((VAR_13 = FUNC_6(VAR_5, VAR_6, &VAR_14)))
  return VAR_13;
 else if (VAR_14)
  VAR_13 = FUNC_7(&VAR_12);
 else
  VAR_13 = FUNC_8(&VAR_12);
 return VAR_13;
}

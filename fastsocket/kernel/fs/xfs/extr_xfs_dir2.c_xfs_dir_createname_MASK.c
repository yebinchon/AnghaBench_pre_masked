
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_23__ TYPE_6__ ;
typedef struct TYPE_22__ TYPE_5__ ;
typedef struct TYPE_21__ TYPE_4__ ;
typedef struct TYPE_20__ TYPE_3__ ;
typedef struct TYPE_19__ TYPE_2__ ;
typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_21__ {int t_mountp; } ;
typedef TYPE_4__ xfs_trans_t ;
struct TYPE_20__ {int di_mode; scalar_t__ di_format; } ;
struct TYPE_22__ {TYPE_3__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_5__ xfs_inode_t ;
typedef int xfs_ino_t ;
typedef int xfs_fsblock_t ;
typedef int xfs_extlen_t ;
struct TYPE_23__ {int op_flags; TYPE_4__* trans; int whichfork; int total; int * flist; int * firstblock; TYPE_5__* dp; int inumber; int hashval; int namelen; int name; } ;
typedef TYPE_6__ xfs_da_args_t ;
typedef int xfs_bmap_free_t ;
struct xfs_name {int len; int name; } ;
struct TYPE_19__ {TYPE_1__* m_dirnameops; } ;
struct TYPE_18__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_6__*,int ,int) ;
 int FUNC_3 (struct xfs_name*) ;
 int FUNC_4 (TYPE_6__*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_6 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (TYPE_6__*) ;
 int FUNC_10 (int ,int ) ;
 int VAR_6 ;

int
FUNC_11(
 xfs_trans_t *VAR_7,
 xfs_inode_t *VAR_8,
 struct xfs_name *VAR_9,
 xfs_ino_t VAR_10,
 xfs_fsblock_t *VAR_11,
 xfs_bmap_free_t *VAR_12,
 xfs_extlen_t VAR_13)
{
 xfs_da_args_t VAR_14;
 int VAR_15;
 int VAR_16;

 FUNC_0((VAR_8->i_d.di_mode & VAR_1) == VAR_0);
 if ((VAR_15 = FUNC_10(VAR_7->t_mountp, VAR_10)))
  return VAR_15;
 FUNC_1(VAR_6);

 FUNC_2(&VAR_14, 0, sizeof(xfs_da_args_t));
 VAR_14.name = VAR_9->name;
 VAR_14.namelen = VAR_9->len;
 VAR_14.hashval = VAR_8->i_mount->m_dirnameops->hashname(VAR_9);
 VAR_14.inumber = VAR_10;
 VAR_14.dp = VAR_8;
 VAR_14.firstblock = VAR_11;
 VAR_14.flist = VAR_12;
 VAR_14.total = VAR_13;
 VAR_14.whichfork = VAR_2;
 VAR_14.trans = VAR_7;
 VAR_14.op_flags = VAR_3 | VAR_4;

 if (VAR_8->i_d.di_format == VAR_5)
  VAR_15 = FUNC_9(&VAR_14);
 else if ((VAR_15 = FUNC_5(VAR_7, VAR_8, &VAR_16)))
  return VAR_15;
 else if (VAR_16)
  VAR_15 = FUNC_4(&VAR_14);
 else if ((VAR_15 = FUNC_6(VAR_7, VAR_8, &VAR_16)))
  return VAR_15;
 else if (VAR_16)
  VAR_15 = FUNC_7(&VAR_14);
 else
  VAR_15 = FUNC_8(&VAR_14);
 return VAR_15;
}


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
struct TYPE_23__ {TYPE_4__* trans; int whichfork; int total; int * flist; int * firstblock; TYPE_5__* dp; int inumber; int hashval; int namelen; int name; } ;
typedef TYPE_6__ xfs_da_args_t ;
typedef int xfs_bmap_free_t ;
struct xfs_name {int len; int name; } ;
struct TYPE_19__ {TYPE_1__* m_dirnameops; } ;
struct TYPE_18__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (TYPE_6__*,int ,int) ;
 int FUNC_2 (struct xfs_name*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_5 (TYPE_4__*,TYPE_5__*,int*) ;
 int FUNC_6 (TYPE_6__*) ;
 int FUNC_7 (TYPE_6__*) ;
 int FUNC_8 (TYPE_6__*) ;
 int FUNC_9 (int ,int ) ;

int
FUNC_10(
 xfs_trans_t *VAR_4,
 xfs_inode_t *VAR_5,
 struct xfs_name *VAR_6,
 xfs_ino_t VAR_7,
 xfs_fsblock_t *VAR_8,
 xfs_bmap_free_t *VAR_9,
 xfs_extlen_t VAR_10)
{
 xfs_da_args_t VAR_11;
 int VAR_12;
 int VAR_13;

 FUNC_0((VAR_5->i_d.di_mode & VAR_1) == VAR_0);

 if ((VAR_12 = FUNC_9(VAR_4->t_mountp, VAR_7)))
  return VAR_12;

 FUNC_1(&VAR_11, 0, sizeof(xfs_da_args_t));
 VAR_11.name = VAR_6->name;
 VAR_11.namelen = VAR_6->len;
 VAR_11.hashval = VAR_5->i_mount->m_dirnameops->hashname(VAR_6);
 VAR_11.inumber = VAR_7;
 VAR_11.dp = VAR_5;
 VAR_11.firstblock = VAR_8;
 VAR_11.flist = VAR_9;
 VAR_11.total = VAR_10;
 VAR_11.whichfork = VAR_2;
 VAR_11.trans = VAR_4;

 if (VAR_5->i_d.di_format == VAR_3)
  VAR_12 = FUNC_8(&VAR_11);
 else if ((VAR_12 = FUNC_4(VAR_4, VAR_5, &VAR_13)))
  return VAR_12;
 else if (VAR_13)
  VAR_12 = FUNC_3(&VAR_11);
 else if ((VAR_12 = FUNC_5(VAR_4, VAR_5, &VAR_13)))
  return VAR_12;
 else if (VAR_13)
  VAR_12 = FUNC_6(&VAR_11);
 else
  VAR_12 = FUNC_7(&VAR_11);
 return VAR_12;
}

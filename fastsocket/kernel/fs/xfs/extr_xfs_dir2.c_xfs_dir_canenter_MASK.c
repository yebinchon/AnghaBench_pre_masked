
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
struct TYPE_18__ {int op_flags; int * trans; int whichfork; TYPE_4__* dp; int hashval; int namelen; int name; } ;
typedef TYPE_5__ xfs_da_args_t ;
typedef scalar_t__ uint ;
struct xfs_name {int len; int name; } ;
struct TYPE_15__ {TYPE_1__* m_dirnameops; } ;
struct TYPE_14__ {int (* hashname ) (struct xfs_name*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (struct xfs_name*) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *,TYPE_4__*,int*) ;
 int FUNC_5 (int *,TYPE_4__*,int*) ;
 int FUNC_6 (TYPE_5__*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;

int
FUNC_9(
 xfs_trans_t *VAR_7,
 xfs_inode_t *VAR_8,
 struct xfs_name *VAR_9,
 uint VAR_10)
{
 xfs_da_args_t VAR_11;
 int VAR_12;
 int VAR_13;

 if (VAR_10)
  return 0;

 FUNC_0((VAR_8->i_d.di_mode & VAR_1) == VAR_0);

 FUNC_1(&VAR_11, 0, sizeof(xfs_da_args_t));
 VAR_11.name = VAR_9->name;
 VAR_11.namelen = VAR_9->len;
 VAR_11.hashval = VAR_8->i_mount->m_dirnameops->hashname(VAR_9);
 VAR_11.dp = VAR_8;
 VAR_11.whichfork = VAR_2;
 VAR_11.trans = VAR_7;
 VAR_11.op_flags = VAR_4 | VAR_3 |
       VAR_5;

 if (VAR_8->i_d.di_format == VAR_6)
  VAR_12 = FUNC_8(&VAR_11);
 else if ((VAR_12 = FUNC_4(VAR_7, VAR_8, &VAR_13)))
  return VAR_12;
 else if (VAR_13)
  VAR_12 = FUNC_3(&VAR_11);
 else if ((VAR_12 = FUNC_5(VAR_7, VAR_8, &VAR_13)))
  return VAR_12;
 else if (VAR_13)
  VAR_12 = FUNC_6(&VAR_11);
 else
  VAR_12 = FUNC_7(&VAR_11);
 return VAR_12;
}

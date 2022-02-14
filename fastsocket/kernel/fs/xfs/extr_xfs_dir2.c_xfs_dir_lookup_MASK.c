
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
struct TYPE_18__ {int valuelen; int value; int inumber; int op_flags; int * trans; int whichfork; TYPE_4__* dp; int hashval; int namelen; int name; } ;
typedef TYPE_5__ xfs_da_args_t ;
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
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int ,int) ;
 int FUNC_3 (struct xfs_name*) ;
 int FUNC_4 (TYPE_5__*) ;
 int FUNC_5 (int *,TYPE_4__*,int*) ;
 int FUNC_6 (int *,TYPE_4__*,int*) ;
 int FUNC_7 (TYPE_5__*) ;
 int FUNC_8 (TYPE_5__*) ;
 int FUNC_9 (TYPE_5__*) ;
 int VAR_7 ;

int
FUNC_10(
 xfs_trans_t *VAR_8,
 xfs_inode_t *VAR_9,
 struct xfs_name *VAR_10,
 xfs_ino_t *VAR_11,
 struct xfs_name *VAR_12)
{
 xfs_da_args_t VAR_13;
 int VAR_14;
 int VAR_15;

 FUNC_0((VAR_9->i_d.di_mode & VAR_2) == VAR_1);
 FUNC_1(VAR_7);

 FUNC_2(&VAR_13, 0, sizeof(xfs_da_args_t));
 VAR_13.name = VAR_10->name;
 VAR_13.namelen = VAR_10->len;
 VAR_13.hashval = VAR_9->i_mount->m_dirnameops->hashname(VAR_10);
 VAR_13.dp = VAR_9;
 VAR_13.whichfork = VAR_3;
 VAR_13.trans = VAR_8;
 VAR_13.op_flags = VAR_5;
 if (VAR_12)
  VAR_13.op_flags |= VAR_4;

 if (VAR_9->i_d.di_format == VAR_6)
  VAR_14 = FUNC_9(&VAR_13);
 else if ((VAR_14 = FUNC_5(VAR_8, VAR_9, &VAR_15)))
  return VAR_14;
 else if (VAR_15)
  VAR_14 = FUNC_4(&VAR_13);
 else if ((VAR_14 = FUNC_6(VAR_8, VAR_9, &VAR_15)))
  return VAR_14;
 else if (VAR_15)
  VAR_14 = FUNC_7(&VAR_13);
 else
  VAR_14 = FUNC_8(&VAR_13);
 if (VAR_14 == VAR_0)
  VAR_14 = 0;
 if (!VAR_14) {
  *VAR_11 = VAR_13.inumber;
  if (VAR_12) {
   VAR_12->name = VAR_13.value;
   VAR_12->len = VAR_13.valuelen;
  }
 }
 return VAR_14;
}

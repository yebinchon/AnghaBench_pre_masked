
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int t_mountp; } ;
typedef TYPE_2__ xfs_trans_t ;
struct TYPE_9__ {int di_mode; } ;
struct TYPE_11__ {int i_ino; TYPE_1__ i_d; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_12__ {TYPE_2__* trans; TYPE_3__* dp; } ;
typedef TYPE_4__ xfs_da_args_t ;
typedef int args ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (TYPE_4__*,int ) ;
 int FUNC_3 (int ,int ) ;

int
FUNC_4(
 xfs_trans_t *VAR_2,
 xfs_inode_t *VAR_3,
 xfs_inode_t *VAR_4)
{
 xfs_da_args_t VAR_5;
 int VAR_6;

 FUNC_1((char *)&VAR_5, 0, sizeof(VAR_5));
 VAR_5.dp = VAR_3;
 VAR_5.trans = VAR_2;
 FUNC_0((VAR_3->i_d.di_mode & VAR_1) == VAR_0);
 if ((VAR_6 = FUNC_3(VAR_2->t_mountp, VAR_4->i_ino)))
  return VAR_6;
 return FUNC_2(&VAR_5, VAR_4->i_ino);
}

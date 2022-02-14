
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_8__ {scalar_t__ di_nlink; int di_version; } ;
struct TYPE_9__ {TYPE_1__ i_d; } ;
typedef TYPE_2__ xfs_inode_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (int *,TYPE_2__*,int ) ;
 int FUNC_6 (int *,TYPE_2__*,int ) ;

int
FUNC_7(
 xfs_trans_t *VAR_5,
 xfs_inode_t *VAR_6)
{
 if (VAR_6->i_d.di_nlink >= VAR_3)
  return FUNC_2(VAR_0);
 FUNC_5(VAR_5, VAR_6, VAR_1);

 FUNC_0(VAR_6->i_d.di_nlink > 0);
 VAR_6->i_d.di_nlink++;
 FUNC_3(FUNC_1(VAR_6));
 if ((VAR_6->i_d.di_version == 1) &&
     (VAR_6->i_d.di_nlink > VAR_4)) {
  FUNC_4(VAR_5, VAR_6);
 }

 FUNC_6(VAR_5, VAR_6, VAR_2);
 return 0;
}

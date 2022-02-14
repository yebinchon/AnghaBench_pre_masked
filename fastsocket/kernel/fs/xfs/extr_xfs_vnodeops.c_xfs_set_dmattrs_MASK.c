
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
typedef int xfs_mount_t ;
struct TYPE_7__ {int di_dmstate; int di_dmevmask; } ;
struct TYPE_8__ {TYPE_1__ i_d; int * i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
typedef int u_int16_t ;
typedef int u_int ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ) ;
 int * FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ) ;
 int FUNC_8 (int *,TYPE_2__*,int ) ;
 int FUNC_9 (int *,TYPE_2__*,int ) ;
 int FUNC_10 (int *,int ,int ,int ,int ,int ) ;

int
FUNC_11(
 xfs_inode_t *VAR_6,
 u_int VAR_7,
 u_int16_t VAR_8)
{
 xfs_mount_t *VAR_9 = VAR_6->i_mount;
 xfs_trans_t *VAR_10;
 int VAR_11;

 if (!FUNC_3(VAR_0))
  return FUNC_0(VAR_2);

 if (FUNC_1(VAR_9))
  return FUNC_0(VAR_1);

 VAR_10 = FUNC_5(VAR_9, VAR_5);
 VAR_11 = FUNC_10(VAR_10, 0, FUNC_2 (VAR_9), 0, 0, 0);
 if (VAR_11) {
  FUNC_6(VAR_10, 0);
  return VAR_11;
 }
 FUNC_4(VAR_6, VAR_3);
 FUNC_8(VAR_10, VAR_6, VAR_3);

 VAR_6->i_d.di_dmevmask = VAR_7;
 VAR_6->i_d.di_dmstate = VAR_8;

 FUNC_9(VAR_10, VAR_6, VAR_4);
 VAR_11 = FUNC_7(VAR_10, 0);

 return VAR_11;
}

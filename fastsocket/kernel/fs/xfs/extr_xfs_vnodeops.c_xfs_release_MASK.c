
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {int m_flags; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_17__ {scalar_t__ di_mode; scalar_t__ di_nlink; } ;
struct TYPE_19__ {scalar_t__ i_delayed_blks; TYPE_1__ i_d; TYPE_2__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_3__*) ;
 scalar_t__ FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_2__*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_4 (TYPE_3__*,int) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*,int ,int,int ,int ) ;
 int FUNC_7 (TYPE_2__*,TYPE_3__*,int ) ;
 int FUNC_8 (TYPE_3__*,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_10 (TYPE_3__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 scalar_t__ FUNC_12 (TYPE_3__*) ;

int
FUNC_13(
 xfs_inode_t *VAR_7)
{
 xfs_mount_t *VAR_8 = VAR_7->i_mount;
 int VAR_9;

 if (!FUNC_0(VAR_7->i_d.di_mode) || (VAR_7->i_d.di_mode == 0))
  return 0;


 if (VAR_8->m_flags & VAR_6)
  return 0;

 if (!FUNC_3(VAR_8)) {
  int VAR_10;
  if ((VAR_7->i_d.di_nlink == 0) && FUNC_12(VAR_7))
   FUNC_5(VAR_7);
  VAR_10 = FUNC_11(VAR_7, VAR_5);
  if (VAR_10) {
   FUNC_8(VAR_7, VAR_4);
   if (FUNC_2(FUNC_1(VAR_7)) && VAR_7->i_delayed_blks > 0)
    FUNC_6(VAR_7, 0, -1, VAR_2, VAR_1);
  }
 }

 if (VAR_7->i_d.di_nlink == 0)
  return 0;

 if (FUNC_4(VAR_7, 0)) {
  if (FUNC_10(VAR_7, VAR_4))
   return 0;

  VAR_9 = FUNC_7(VAR_8, VAR_7,
        VAR_3);
  if (VAR_9 && VAR_9 != VAR_0)
   return VAR_9;


  if (VAR_7->i_delayed_blks)
   FUNC_9(VAR_7, VAR_4);
 }
 return 0;
}

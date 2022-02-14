
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_8__ {scalar_t__ sb_sectsize; } ;
struct TYPE_7__ {TYPE_2__ m_sb; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef scalar_t__ uint ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_0 (TYPE_1__*,int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;
 int FUNC_7 (int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_8 (int *) ;

int
FUNC_9(
 xfs_mount_t *VAR_6,
 uint VAR_7)
{
 xfs_trans_t *VAR_8;
 int VAR_9;

 if (!FUNC_1(VAR_6))
  return 0;

 FUNC_2(VAR_6, 0);





 if (!FUNC_4(&VAR_6->m_sb))
  return 0;

 VAR_8 = FUNC_0(VAR_6, VAR_5, VAR_0);
 VAR_9 = FUNC_7(VAR_8, 0, VAR_6->m_sb.sb_sectsize + 128, 0, 0,
     VAR_1);
 if (VAR_9) {
  FUNC_5(VAR_8, 0);
  return VAR_9;
 }

 FUNC_3(VAR_8, VAR_4 | VAR_3 | VAR_2);
 if (VAR_7)
  FUNC_8(VAR_8);
 VAR_9 = FUNC_6(VAR_8, 0);
 return VAR_9;
}

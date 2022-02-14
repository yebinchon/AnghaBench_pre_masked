
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_trans_t ;
struct TYPE_5__ {scalar_t__ sb_sectsize; } ;
struct TYPE_6__ {TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,scalar_t__,int ,int ,int ) ;
 int FUNC_5 (int *) ;

int
FUNC_6(
 xfs_mount_t *VAR_4)
{
 xfs_trans_t *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_0(VAR_4, VAR_3, VAR_0);
 VAR_6 = FUNC_4(VAR_5, 0, VAR_4->m_sb.sb_sectsize + 128, 0, 0,
     VAR_1);
 if (VAR_6) {
  FUNC_2(VAR_5, 0);
  return VAR_6;
 }


 FUNC_1(VAR_5, VAR_2);
 FUNC_5(VAR_5);
 return FUNC_3(VAR_5, 0);
}

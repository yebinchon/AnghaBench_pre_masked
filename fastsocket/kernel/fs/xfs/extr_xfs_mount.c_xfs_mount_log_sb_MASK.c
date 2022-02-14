
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
typedef int __int64_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int *,int) ;
 int * FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ,scalar_t__,int ,int ,int ) ;

int
FUNC_6(
 xfs_mount_t *VAR_8,
 __int64_t VAR_9)
{
 xfs_trans_t *VAR_10;
 int VAR_11;

 FUNC_0(VAR_9 & (VAR_3 | VAR_6 | VAR_4 |
    VAR_2 | VAR_1 |
    VAR_5));

 VAR_10 = FUNC_2(VAR_8, VAR_7);
 VAR_11 = FUNC_5(VAR_10, 0, VAR_8->m_sb.sb_sectsize + 128, 0, 0,
    VAR_0);
 if (VAR_11) {
  FUNC_3(VAR_10, 0);
  return VAR_11;
 }
 FUNC_1(VAR_10, VAR_9);
 VAR_11 = FUNC_4(VAR_10, 0);
 return VAR_11;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * m_sb_bp; } ;
typedef TYPE_1__ xfs_mount_t ;
typedef int xfs_buf_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;

xfs_buf_t *
FUNC_5(
 xfs_mount_t *VAR_2,
 int VAR_3)
{
 xfs_buf_t *VAR_4;

 FUNC_0(VAR_2->m_sb_bp != ((void*)0));
 VAR_4 = VAR_2->m_sb_bp;
 if (VAR_3 & VAR_1) {
  if (!FUNC_1(VAR_4)) {
   return ((void*)0);
  }
 } else {
  FUNC_4(VAR_4, VAR_0);
 }
 FUNC_2(VAR_4);
 FUNC_0(FUNC_3(VAR_4));
 return VAR_4;
}

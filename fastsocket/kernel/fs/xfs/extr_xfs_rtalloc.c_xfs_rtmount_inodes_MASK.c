
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ sb_rbmino; scalar_t__ sb_rsumino; } ;
typedef TYPE_1__ xfs_sb_t ;
struct TYPE_6__ {int * m_rsumip; int * m_rbmip; TYPE_1__ m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (TYPE_2__*,int *,scalar_t__,int ,int ,int **) ;

int
FUNC_3(
 xfs_mount_t *VAR_1)
{
 int VAR_2;
 xfs_sb_t *VAR_3;

 VAR_3 = &VAR_1->m_sb;
 if (VAR_3->sb_rbmino == VAR_0)
  return 0;
 VAR_2 = FUNC_2(VAR_1, ((void*)0), VAR_3->sb_rbmino, 0, 0, &VAR_1->m_rbmip);
 if (VAR_2)
  return VAR_2;
 FUNC_0(VAR_1->m_rbmip != ((void*)0));
 FUNC_0(VAR_3->sb_rsumino != VAR_0);
 VAR_2 = FUNC_2(VAR_1, ((void*)0), VAR_3->sb_rsumino, 0, 0, &VAR_1->m_rsumip);
 if (VAR_2) {
  FUNC_1(VAR_1->m_rbmip);
  return VAR_2;
 }
 FUNC_0(VAR_1->m_rsumip != ((void*)0));
 return 0;
}

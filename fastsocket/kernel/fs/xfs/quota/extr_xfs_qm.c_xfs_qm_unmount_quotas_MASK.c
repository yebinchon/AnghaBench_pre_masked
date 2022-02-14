
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* m_quotainfo; scalar_t__ m_rsumip; scalar_t__ m_rbmip; scalar_t__ m_rootip; } ;
typedef TYPE_2__ xfs_mount_t ;
struct TYPE_4__ {int * qi_gquotaip; int * qi_uquotaip; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (scalar_t__) ;

void
FUNC_3(
 xfs_mount_t *VAR_0)
{




 FUNC_0(VAR_0->m_rootip);
 FUNC_2(VAR_0->m_rootip);
 if (VAR_0->m_rbmip)
  FUNC_2(VAR_0->m_rbmip);
 if (VAR_0->m_rsumip)
  FUNC_2(VAR_0->m_rsumip);




 if (VAR_0->m_quotainfo) {
  if (VAR_0->m_quotainfo->qi_uquotaip) {
   FUNC_1(VAR_0->m_quotainfo->qi_uquotaip);
   VAR_0->m_quotainfo->qi_uquotaip = ((void*)0);
  }
  if (VAR_0->m_quotainfo->qi_gquotaip) {
   FUNC_1(VAR_0->m_quotainfo->qi_gquotaip);
   VAR_0->m_quotainfo->qi_gquotaip = ((void*)0);
  }
 }
}

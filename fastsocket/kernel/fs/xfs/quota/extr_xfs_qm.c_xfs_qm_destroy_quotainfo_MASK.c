
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int qi_quotaofflock; int * qi_gquotaip; int * qi_uquotaip; int qi_dqlist_lock; int qi_dqlist; } ;
typedef TYPE_1__ xfs_quotainfo_t ;
struct TYPE_7__ {TYPE_1__* m_quotainfo; } ;
typedef TYPE_2__ xfs_mount_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int * VAR_0 ;
 int FUNC_5 (TYPE_2__*) ;

void
FUNC_6(
 xfs_mount_t *VAR_1)
{
 xfs_quotainfo_t *VAR_2;

 VAR_2 = VAR_1->m_quotainfo;
 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_0 != ((void*)0));






 FUNC_5(VAR_1);

 FUNC_0(FUNC_3(&VAR_2->qi_dqlist));
 FUNC_4(&VAR_2->qi_dqlist_lock);

 if (VAR_2->qi_uquotaip) {
  FUNC_1(VAR_2->qi_uquotaip);
  VAR_2->qi_uquotaip = ((void*)0);
 }
 if (VAR_2->qi_gquotaip) {
  FUNC_1(VAR_2->qi_gquotaip);
  VAR_2->qi_gquotaip = ((void*)0);
 }
 FUNC_4(&VAR_2->qi_quotaofflock);
 FUNC_2(VAR_2);
 VAR_1->m_quotainfo = ((void*)0);
}

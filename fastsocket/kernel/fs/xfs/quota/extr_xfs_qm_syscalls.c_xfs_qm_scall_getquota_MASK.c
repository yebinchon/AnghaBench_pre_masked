
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfs_mount_t ;
struct TYPE_5__ {int q_core; } ;
typedef TYPE_1__ xfs_dquot_t ;
typedef int xfs_dqid_t ;
typedef int uint ;
typedef int fs_disk_quota_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int *,int *,int ,int ,int ,TYPE_1__**) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (int *,int *,int *) ;

int
FUNC_5(
 xfs_mount_t *VAR_2,
 xfs_dqid_t VAR_3,
 uint VAR_4,
 fs_disk_quota_t *VAR_5)
{
 xfs_dquot_t *VAR_6;
 int VAR_7;






 if ((VAR_7 = FUNC_2(VAR_2, ((void*)0), VAR_3, VAR_4, 0, &VAR_6))) {
  return (VAR_7);
 }





 if (FUNC_1(VAR_6)) {
  FUNC_3(VAR_6);
  return FUNC_0(VAR_1);
 }




 FUNC_4(VAR_2, &VAR_6->q_core, VAR_5);
 FUNC_3(VAR_6);
 return (VAR_7 ? FUNC_0(VAR_0) : 0);
}

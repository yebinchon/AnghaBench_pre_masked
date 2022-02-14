
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_6__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {TYPE_2__* t_mountp; } ;
typedef TYPE_1__ xfs_trans_t ;
typedef int xfs_sb_t ;
typedef long long xfs_sb_field_t ;
struct TYPE_9__ {int m_sb; } ;
typedef TYPE_2__ xfs_mount_t ;
typedef int xfs_buf_t ;
typedef int __uint64_t ;
typedef long long __int64_t ;
struct TYPE_10__ {int offset; } ;


 int FUNC_0 (long long) ;
 int FUNC_1 (int *) ;
 long long VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 TYPE_6__* VAR_1 ;
 int FUNC_4 (int ,int *,long long) ;
 int * FUNC_5 (TYPE_1__*,TYPE_2__*,int ) ;
 int FUNC_6 (TYPE_1__*,int *,int,int) ;

void
FUNC_7(xfs_trans_t *VAR_2, __int64_t VAR_3)
{
 xfs_buf_t *VAR_4;
 int VAR_5;
 int VAR_6;
 xfs_mount_t *VAR_7;
 xfs_sb_field_t VAR_8;

 FUNC_0(VAR_3);
 if (!VAR_3)
  return;
 VAR_7 = VAR_2->t_mountp;
 VAR_4 = FUNC_5(VAR_2, VAR_7, 0);
 VAR_5 = sizeof(xfs_sb_t);
 VAR_6 = 0;



 FUNC_4(FUNC_1(VAR_4), &VAR_7->m_sb, VAR_3);


 VAR_8 = (xfs_sb_field_t)FUNC_2((__uint64_t)VAR_3);
 FUNC_0((1LL << VAR_8) & VAR_0);
 VAR_6 = VAR_1[VAR_8 + 1].offset - 1;

 VAR_8 = (xfs_sb_field_t)FUNC_3((__uint64_t)VAR_3);
 FUNC_0((1LL << VAR_8) & VAR_0);
 VAR_5 = VAR_1[VAR_8].offset;

 FUNC_6(VAR_2, VAR_4, VAR_5, VAR_6);
}

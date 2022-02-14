
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ xfs_sb_field_t ;
struct xfs_mount {int m_sb_lock; } ;
typedef int int64_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_mount*,scalar_t__,int ,int) ;

int
FUNC_4(
 struct xfs_mount *VAR_2,
 xfs_sb_field_t VAR_3,
 int64_t VAR_4,
 int VAR_5)
{
 int VAR_6;




 FUNC_1(&VAR_2->m_sb_lock);
 VAR_6 = FUNC_3(VAR_2, VAR_3, VAR_4, VAR_5);
 FUNC_2(&VAR_2->m_sb_lock);

 return VAR_6;
}

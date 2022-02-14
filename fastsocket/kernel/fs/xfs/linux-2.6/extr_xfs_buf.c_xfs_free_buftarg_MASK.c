
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_flags; } ;
struct xfs_buftarg {int bt_task; int bt_shrinker; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_buftarg*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct xfs_buftarg*) ;
 int FUNC_4 (struct xfs_buftarg*,int) ;

void
FUNC_5(
 struct xfs_mount *VAR_1,
 struct xfs_buftarg *VAR_2)
{
 FUNC_2(&VAR_2->bt_shrinker);

 FUNC_4(VAR_2, 1);
 if (VAR_1->m_flags & VAR_0)
  FUNC_3(VAR_2);

 FUNC_1(VAR_2->bt_task);
 FUNC_0(VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {int m_active_trans; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct xfs_mount*,int) ;
 int FUNC_4 (struct xfs_mount*) ;
 int FUNC_5 (struct xfs_mount*) ;
 int FUNC_6 (struct xfs_mount*) ;
 int FUNC_7 (struct xfs_mount*,char*) ;

void
FUNC_8(
 struct xfs_mount *VAR_0)
{
 int VAR_1 = 0;


 while (FUNC_1(&VAR_0->m_active_trans) > 0)
  FUNC_2(100);


 FUNC_5(VAR_0);





 FUNC_0(FUNC_1(&VAR_0->m_active_trans) != 0);


 VAR_1 = FUNC_3(VAR_0, 1);
 if (VAR_1)
  FUNC_7(VAR_0, "xfs_attr_quiesce: failed to log sb changes. "
    "Frozen image may not be consistent.");
 FUNC_4(VAR_0);
 FUNC_6(VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {scalar_t__ m_rtdev_targp; int m_ddev_targp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (struct xfs_mount*) ;
 int FUNC_3 (struct xfs_mount*,int ) ;
 int FUNC_4 (struct xfs_mount*,int ) ;
 int FUNC_5 (struct xfs_mount*) ;

int
FUNC_6(
 struct xfs_mount *VAR_2)
{
 int VAR_3, VAR_4 = 0;


 FUNC_4(VAR_2, 0);
 FUNC_3(VAR_2, VAR_0);


 FUNC_4(VAR_2, VAR_1);

 FUNC_3(VAR_2, VAR_1);


 VAR_3 = FUNC_5(VAR_2);


 FUNC_1(VAR_2->m_ddev_targp, 1);


 VAR_4 = FUNC_2(VAR_2);


 if (VAR_2->m_rtdev_targp)
  FUNC_0(VAR_2->m_rtdev_targp);

 return VAR_3 ? VAR_3 : VAR_4;
}

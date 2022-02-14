
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {scalar_t__ m_quotainfo; } ;


 int VAR_0 ;
 int FUNC_0 (struct xfs_mount*) ;
 int FUNC_1 (struct xfs_mount*,int ) ;

void
FUNC_2(
 struct xfs_mount *VAR_1)
{
 if (VAR_1->m_quotainfo) {
  FUNC_1(VAR_1, VAR_0);
  FUNC_0(VAR_1);
 }
}

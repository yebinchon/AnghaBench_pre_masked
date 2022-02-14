
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_mount {scalar_t__ m_rsumip; scalar_t__ m_rbmip; } ;


 int FUNC_0 (scalar_t__) ;

void
FUNC_1(
 struct xfs_mount *VAR_0)
{
 if (VAR_0->m_rbmip)
  FUNC_0(VAR_0->m_rbmip);
 if (VAR_0->m_rsumip)
  FUNC_0(VAR_0->m_rsumip);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int seeks; int shrink; } ;
struct xfs_mount {TYPE_1__ m_inode_shrink; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int VAR_1 ;

void
FUNC_1(
 struct xfs_mount *VAR_2)
{
 VAR_2->m_inode_shrink.shrink = VAR_1;
 VAR_2->m_inode_shrink.seeks = VAR_0;
 FUNC_0(&VAR_2->m_inode_shrink);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xfs_mru_cache_t ;
struct TYPE_5__ {int i_ino; TYPE_1__* i_mount; } ;
typedef TYPE_2__ xfs_inode_t ;
struct TYPE_4__ {int * m_filestream; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(
 xfs_inode_t *VAR_0)
{
 xfs_mru_cache_t *VAR_1 = VAR_0->i_mount->m_filestream;

 FUNC_0(VAR_1, VAR_0->i_ino);
}

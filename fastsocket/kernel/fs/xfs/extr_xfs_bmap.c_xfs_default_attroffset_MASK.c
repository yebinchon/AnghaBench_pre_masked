
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint ;
struct TYPE_2__ {int sb_inodesize; } ;
struct xfs_mount {TYPE_1__ m_sb; } ;
struct xfs_inode {struct xfs_mount* i_mount; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct xfs_mount*) ;

uint
FUNC_3(
 struct xfs_inode *VAR_1)
{
 struct xfs_mount *VAR_2 = VAR_1->i_mount;
 uint VAR_3;

 if (VAR_2->m_sb.sb_inodesize == 256) {
  VAR_3 = FUNC_2(VAR_2) -
    FUNC_1(VAR_0);
 } else {
  VAR_3 = FUNC_1(6 * VAR_0);
 }

 FUNC_0(VAR_3 < FUNC_2(VAR_2));
 return VAR_3;
}

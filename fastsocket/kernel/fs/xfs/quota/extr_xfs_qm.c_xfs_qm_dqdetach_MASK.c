
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ i_ino; int * i_gdquot; int * i_udquot; TYPE_1__* i_mount; } ;
typedef TYPE_3__ xfs_inode_t ;
struct TYPE_7__ {scalar_t__ sb_uquotino; scalar_t__ sb_gquotino; } ;
struct TYPE_6__ {TYPE_2__ m_sb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *) ;

void
FUNC_3(
 xfs_inode_t *VAR_0)
{
 if (!(VAR_0->i_udquot || VAR_0->i_gdquot))
  return;

 FUNC_1(VAR_0);

 FUNC_0(VAR_0->i_ino != VAR_0->i_mount->m_sb.sb_uquotino);
 FUNC_0(VAR_0->i_ino != VAR_0->i_mount->m_sb.sb_gquotino);
 if (VAR_0->i_udquot) {
  FUNC_2(VAR_0->i_udquot);
  VAR_0->i_udquot = ((void*)0);
 }
 if (VAR_0->i_gdquot) {
  FUNC_2(VAR_0->i_gdquot);
  VAR_0->i_gdquot = ((void*)0);
 }
}

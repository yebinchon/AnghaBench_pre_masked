
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct ocfs2_xattr_bucket {int bu_blocks; int * bu_bhs; TYPE_1__* bu_inode; } ;
typedef int handle_t ;
struct TYPE_6__ {int osb_xattr_lock; } ;
struct TYPE_5__ {int xh_check; } ;
struct TYPE_4__ {int i_sb; } ;


 TYPE_3__* FUNC_0 (int ) ;
 TYPE_2__* FUNC_1 (struct ocfs2_xattr_bucket*) ;
 int FUNC_2 (int ,int *,int,int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(handle_t *VAR_0,
          struct ocfs2_xattr_bucket *VAR_1)
{
 int VAR_2;

 FUNC_4(&FUNC_0(VAR_1->bu_inode->i_sb)->osb_xattr_lock);
 FUNC_2(VAR_1->bu_inode->i_sb,
       VAR_1->bu_bhs, VAR_1->bu_blocks,
       &FUNC_1(VAR_1)->xh_check);
 FUNC_5(&FUNC_0(VAR_1->bu_inode->i_sb)->osb_xattr_lock);

 for (VAR_2 = 0; VAR_2 < VAR_1->bu_blocks; VAR_2++)
  FUNC_3(VAR_0, VAR_1->bu_bhs[VAR_2]);
}

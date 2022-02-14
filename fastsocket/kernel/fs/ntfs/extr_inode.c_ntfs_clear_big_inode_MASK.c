
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct inode {int i_ino; int i_sb; } ;
struct TYPE_7__ {int * base_ntfs_ino; int * extent_ntfs_inos; } ;
struct TYPE_8__ {int nr_extents; TYPE_1__ ext; } ;
typedef TYPE_2__ ntfs_inode ;


 scalar_t__ FUNC_0 (TYPE_2__*) ;
 scalar_t__ FUNC_1 (TYPE_2__*) ;
 TYPE_2__* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct inode*) ;
 int FUNC_10 (int ,char*,int ) ;

void FUNC_11(struct inode *VAR_0)
{
 ntfs_inode *VAR_1 = FUNC_2(VAR_0);
 if (VAR_1->nr_extents > 0) {
  int VAR_2;

  for (VAR_2 = 0; VAR_2 < VAR_1->nr_extents; VAR_2++)
   FUNC_8(VAR_1->ext.extent_ntfs_inos[VAR_2]);
  FUNC_7(VAR_1->ext.extent_ntfs_inos);
 }

 FUNC_4(VAR_1);

 if (FUNC_0(VAR_1)) {

  if (VAR_1->nr_extents == -1) {
   FUNC_5(FUNC_3(VAR_1->ext.base_ntfs_ino));
   VAR_1->nr_extents = 0;
   VAR_1->ext.base_ntfs_ino = ((void*)0);
  }
 }
 return;
}

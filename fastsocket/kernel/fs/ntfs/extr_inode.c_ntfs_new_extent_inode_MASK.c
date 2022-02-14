
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_5__ {unsigned long mft_no; scalar_t__ name_len; int * name; int type; int mrec_lock; } ;
typedef TYPE_1__ ntfs_inode ;


 int VAR_0 ;
 int FUNC_0 (struct super_block*,TYPE_1__*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int *,int *) ;
 TYPE_1__* FUNC_3 () ;
 int FUNC_4 (char*) ;

inline ntfs_inode *FUNC_5(struct super_block *VAR_2,
  unsigned long VAR_3)
{
 ntfs_inode *VAR_4 = FUNC_3();

 FUNC_4("Entering.");
 if (FUNC_1(VAR_4 != ((void*)0))) {
  FUNC_0(VAR_2, VAR_4);
  FUNC_2(&VAR_4->mrec_lock, &VAR_1);
  VAR_4->mft_no = VAR_3;
  VAR_4->type = VAR_0;
  VAR_4->name = ((void*)0);
  VAR_4->name_len = 0;
 }
 return VAR_4;
}

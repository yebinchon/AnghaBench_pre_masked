
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int i_generation; int i_ino; } ;
struct dentry {int d_lock; TYPE_1__* d_parent; struct inode* d_inode; } ;
typedef int __u32 ;
struct TYPE_4__ {int k_dir_id; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct dentry *VAR_0, __u32 * VAR_1, int *VAR_2,
         int VAR_3)
{
 struct inode *VAR_4 = VAR_0->d_inode;
 int VAR_5 = *VAR_2;

 if (VAR_5 < 3)
  return 255;

 VAR_1[0] = VAR_4->i_ino;
 VAR_1[1] = FUNC_1(FUNC_0(VAR_4)->k_dir_id);
 VAR_1[2] = VAR_4->i_generation;
 *VAR_2 = 3;

 if (VAR_5 < 5 || !VAR_3)
  return 3;

 FUNC_2(&VAR_0->d_lock);
 VAR_4 = VAR_0->d_parent->d_inode;
 VAR_1[3] = VAR_4->i_ino;
 VAR_1[4] = FUNC_1(FUNC_0(VAR_4)->k_dir_id);
 *VAR_2 = 5;
 if (VAR_5 >= 6) {
  VAR_1[5] = VAR_4->i_generation;
  *VAR_2 = 6;
 }
 FUNC_3(&VAR_0->d_lock);
 return *VAR_2;
}

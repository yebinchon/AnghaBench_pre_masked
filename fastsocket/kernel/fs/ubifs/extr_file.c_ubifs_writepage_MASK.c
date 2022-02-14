
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct writeback_control {int dummy; } ;
struct ubifs_inode {int synced_i_size; int ui_lock; } ;
struct page {scalar_t__ index; int flags; TYPE_1__* mapping; } ;
struct inode {TYPE_3__* i_sb; int i_ino; } ;
typedef scalar_t__ pgoff_t ;
typedef int loff_t ;
struct TYPE_6__ {TYPE_2__* s_op; } ;
struct TYPE_5__ {int (* write_inode ) (struct inode*,int *) ;} ;
struct TYPE_4__ {struct inode* host; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (char*,int ,scalar_t__,int ) ;
 int FUNC_2 (struct page*,int) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct inode*) ;
 void* FUNC_5 (struct page*,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (void*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct inode*,int *) ;
 int FUNC_11 (struct inode*,int *) ;
 int FUNC_12 (int ) ;
 struct ubifs_inode* FUNC_13 (struct inode*) ;
 int FUNC_14 (struct page*) ;

__attribute__((used)) static int FUNC_15(struct page *VAR_3, struct writeback_control *VAR_4)
{
 struct inode *VAR_5 = VAR_3->mapping->host;
 struct ubifs_inode *VAR_6 = FUNC_13(VAR_5);
 loff_t VAR_7 = FUNC_4(VAR_5), VAR_8;
 pgoff_t VAR_9 = VAR_7 >> VAR_1;
 int VAR_10, VAR_11 = VAR_7 & (VAR_2 - 1);
 void *VAR_12;

 FUNC_1("ino %lu, pg %lu, pg flags %#lx",
  VAR_5->i_ino, VAR_3->index, VAR_3->flags);
 FUNC_12(FUNC_0(VAR_3));


 if (VAR_3->index > VAR_9 || (VAR_3->index == VAR_9 && !VAR_11)) {
  VAR_10 = 0;
  goto out_unlock;
 }

 FUNC_8(&VAR_6->ui_lock);
 VAR_8 = VAR_6->synced_i_size;
 FUNC_9(&VAR_6->ui_lock);


 if (VAR_3->index < VAR_9) {
  if (VAR_3->index >= VAR_8 >> VAR_1) {
   VAR_10 = VAR_5->i_sb->s_op->write_inode(VAR_5, ((void*)0));
   if (VAR_10)
    goto out_unlock;
  }
  return FUNC_2(VAR_3, VAR_2);
 }
 VAR_12 = FUNC_5(VAR_3, VAR_0);
 FUNC_7(VAR_12 + VAR_11, 0, VAR_2 - VAR_11);
 FUNC_3(VAR_3);
 FUNC_6(VAR_12, VAR_0);

 if (VAR_7 > VAR_8) {
  VAR_10 = VAR_5->i_sb->s_op->write_inode(VAR_5, ((void*)0));
  if (VAR_10)
   goto out_unlock;
 }

 return FUNC_2(VAR_3, VAR_11);

out_unlock:
 FUNC_14(VAR_3);
 return VAR_10;
}

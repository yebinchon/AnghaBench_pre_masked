
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct vm_fault {struct page* page; } ;
struct vm_area_struct {TYPE_3__* vm_file; } ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct buffer_head {int dummy; } ;
typedef int sigset_t ;
struct TYPE_8__ {int ip_alloc_sem; } ;
struct TYPE_6__ {TYPE_1__* dentry; } ;
struct TYPE_7__ {TYPE_2__ f_path; } ;
struct TYPE_5__ {struct inode* d_inode; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct buffer_head*,struct page*) ;
 int FUNC_2 (struct buffer_head*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct inode*,struct buffer_head**,int) ;
 int FUNC_6 (struct inode*,int) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct vm_area_struct *VAR_1, struct vm_fault *VAR_2)
{
 struct page *VAR_3 = VAR_2->page;
 struct inode *VAR_4 = VAR_1->vm_file->f_path.dentry->d_inode;
 struct buffer_head *VAR_5 = ((void*)0);
 sigset_t VAR_6, VAR_7;
 int VAR_8, VAR_9;

 VAR_8 = FUNC_7(&VAR_6, &VAR_7);
 if (VAR_8 < 0) {
  FUNC_4(VAR_8);
  return VAR_8;
 }






 VAR_8 = FUNC_5(VAR_4, &VAR_5, 1);
 if (VAR_8 < 0) {
  FUNC_4(VAR_8);
  goto out;
 }






 FUNC_3(&FUNC_0(VAR_4)->ip_alloc_sem);

 VAR_8 = FUNC_1(VAR_4, VAR_5, VAR_3);

 FUNC_9(&FUNC_0(VAR_4)->ip_alloc_sem);

 FUNC_2(VAR_5);
 FUNC_6(VAR_4, 1);

out:
 VAR_9 = FUNC_8(&VAR_7);
 if (VAR_9 < 0)
  FUNC_4(VAR_9);
 if (VAR_8)
  VAR_8 = VAR_0;
 return VAR_8;
}

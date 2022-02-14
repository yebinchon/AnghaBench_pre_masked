
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_fault {int pgoff; scalar_t__ virtual_address; } ;
struct vm_area_struct {int vm_flags; struct file* vm_file; } ;
struct page {int dummy; } ;
struct inode {TYPE_1__* i_sb; } ;
struct file {struct address_space* f_mapping; } ;
struct address_space {TYPE_2__* a_ops; struct inode* host; } ;
typedef int pgoff_t ;
struct TYPE_4__ {int (* get_xip_mem ) (struct address_space*,int,int,void**,unsigned long*) ;} ;
struct TYPE_3__ {int s_flags; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct address_space*,int) ;
 int FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (struct address_space*,int,int,void**,unsigned long*) ;
 int FUNC_7 (struct address_space*,int,int,void**,unsigned long*) ;
 int FUNC_8 (struct address_space*,int,int,void**,unsigned long*) ;
 scalar_t__ FUNC_9 (int) ;
 int FUNC_10 (struct vm_area_struct*,unsigned long,unsigned long) ;
 int FUNC_11 (struct vm_area_struct*,unsigned long,struct page*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int VAR_13 ;
 struct page* FUNC_14 () ;
 int VAR_14 ;

__attribute__((used)) static int FUNC_15(struct vm_area_struct *VAR_15, struct vm_fault *VAR_16)
{
 struct file *VAR_17 = VAR_15->vm_file;
 struct address_space *VAR_18 = VAR_17->f_mapping;
 struct inode *VAR_19 = VAR_18->host;
 pgoff_t VAR_20;
 void *VAR_21;
 unsigned long VAR_22;
 struct page *VAR_23;
 int VAR_24;


again:
 VAR_20 = (FUNC_2(VAR_19) + VAR_5 - 1) >> VAR_4;
 if (VAR_16->pgoff >= VAR_20)
  return VAR_8;

 VAR_24 = VAR_18->a_ops->get_xip_mem(VAR_18, VAR_16->pgoff, 0,
      &VAR_21, &VAR_22);
 if (FUNC_3(!VAR_24))
  goto found;
 if (VAR_24 != -VAR_1)
  return VAR_7;


 if ((VAR_15->vm_flags & (VAR_12 | VAR_10)) &&
     (VAR_15->vm_flags & (VAR_11 | VAR_9)) &&
     (!(VAR_18->host->i_sb->s_flags & VAR_3))) {
  int VAR_25;


  FUNC_4(&VAR_13);
  VAR_24 = VAR_18->a_ops->get_xip_mem(VAR_18, VAR_16->pgoff, 1,
       &VAR_21, &VAR_22);
  FUNC_5(&VAR_13);
  if (VAR_24)
   return VAR_8;

  FUNC_1(VAR_18, VAR_16->pgoff);

found:
  VAR_25 = FUNC_10(VAR_15, (unsigned long)VAR_16->virtual_address,
       VAR_22);
  if (VAR_25 == -VAR_2)
   return VAR_7;


  if (VAR_25 != -VAR_0)
   FUNC_0(VAR_25);
  return VAR_6;
 } else {
  int VAR_26, VAR_27 = VAR_7;

  FUNC_4(&VAR_13);
  FUNC_12(&VAR_14);
  VAR_24 = VAR_18->a_ops->get_xip_mem(VAR_18, VAR_16->pgoff, 0,
       &VAR_21, &VAR_22);
  if (FUNC_9(!VAR_24)) {
   FUNC_13(&VAR_14);
   FUNC_5(&VAR_13);
   goto again;
  }
  if (VAR_24 != -VAR_1)
   goto out;

  VAR_23 = FUNC_14();
  if (!VAR_23)
   goto out;
  VAR_26 = FUNC_11(VAR_15, (unsigned long)VAR_16->virtual_address,
       VAR_23);
  if (VAR_26 == -VAR_2)
   goto out;

  VAR_27 = VAR_6;
out:
  FUNC_13(&VAR_14);
  FUNC_5(&VAR_13);

  return VAR_27;
 }
}

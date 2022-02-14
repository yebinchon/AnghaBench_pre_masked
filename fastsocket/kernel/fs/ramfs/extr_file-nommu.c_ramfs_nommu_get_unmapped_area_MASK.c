
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int i_mapping; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
typedef unsigned long loff_t ;
struct TYPE_3__ {struct inode* d_inode; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long FUNC_0 (int ,unsigned long,unsigned long,struct page**) ;
 unsigned long FUNC_1 (struct inode*) ;
 int FUNC_2 (struct page**) ;
 struct page** FUNC_3 (unsigned long,int ) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (int ) ;

unsigned long FUNC_6(struct file *VAR_6,
         unsigned long VAR_7, unsigned long VAR_8,
         unsigned long VAR_9, unsigned long VAR_10)
{
 unsigned long VAR_11, VAR_12, VAR_13, VAR_14, VAR_15;
 struct inode *VAR_16 = VAR_6->f_path.dentry->d_inode;
 struct page **VAR_17 = ((void*)0), **VAR_18, *VAR_19;
 loff_t VAR_20;

 if (!(VAR_10 & VAR_3))
  return VAR_7;


 VAR_12 = (VAR_8 + VAR_5 - 1) >> VAR_4;
 VAR_20 = FUNC_1(VAR_16);

 VAR_15 = -VAR_0;
 VAR_11 = (VAR_20 + VAR_5 - 1) >> VAR_4;
 if (VAR_9 >= VAR_11)
  goto out;

 if (VAR_11 - VAR_9 < VAR_12)
  goto out;


 VAR_15 = -VAR_1;
 VAR_17 = FUNC_3(VAR_12 * sizeof(struct page *), VAR_2);
 if (!VAR_17)
  goto out_free;

 VAR_13 = FUNC_0(VAR_16->i_mapping, VAR_9, VAR_12, VAR_17);
 if (VAR_13 != VAR_12)
  goto out_free_pages;


 VAR_18 = VAR_17;
 VAR_19 = *VAR_18++;
 VAR_19++;
 for (VAR_14 = VAR_12; VAR_14 > 1; VAR_14--)
  if (*VAR_18++ != VAR_19++)
   goto out_free_pages;


 VAR_15 = (unsigned long) FUNC_4(VAR_17[0]);

out_free_pages:
 VAR_18 = VAR_17;
 for (VAR_14 = VAR_13; VAR_14 > 0; VAR_14--)
  FUNC_5(*VAR_18++);
out_free:
 FUNC_2(VAR_17);
out:
 return VAR_15;
}

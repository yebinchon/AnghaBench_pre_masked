
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int i_mutex; int i_alloc_sem; TYPE_1__* i_op; struct address_space* i_mapping; } ;
struct address_space {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {int (* truncate_range ) (struct inode*,scalar_t__,scalar_t__) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_5 (struct address_space*,scalar_t__,scalar_t__,int) ;
 int FUNC_6 (int *) ;

int FUNC_7(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 struct address_space *VAR_5 = VAR_2->i_mapping;
 loff_t VAR_6 = FUNC_3(VAR_3, VAR_1);
 loff_t VAR_7 = 1 + VAR_4 - VAR_6;






 if (!VAR_2->i_op->truncate_range)
  return -VAR_0;

 FUNC_1(&VAR_2->i_mutex);
 FUNC_0(&VAR_2->i_alloc_sem);
 FUNC_5(VAR_5, VAR_6, VAR_7, 1);
 VAR_2->i_op->truncate_range(VAR_2, VAR_3, VAR_4);

 FUNC_5(VAR_5, VAR_6, VAR_7, 1);
 FUNC_6(&VAR_2->i_alloc_sem);
 FUNC_2(&VAR_2->i_mutex);

 return 0;
}

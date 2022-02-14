
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {unsigned long i_size; TYPE_1__* i_sb; int i_mutex; struct address_space* i_mapping; } ;
struct file {int dummy; } ;
struct address_space {int dummy; } ;
struct TYPE_5__ {int i_flags; } ;
struct TYPE_4__ {unsigned long s_blocksize; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 struct page* FUNC_2 (struct address_space*,int) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *,struct page*,unsigned long,unsigned long) ;
 int FUNC_7 (int *,struct page*,unsigned long,unsigned long) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (struct page*) ;

int FUNC_11(struct inode *VAR_3, struct file *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6;
 struct page *VAR_7;
 struct address_space *VAR_8;
 unsigned long VAR_9;
 unsigned long VAR_10 = VAR_3->i_sb->s_blocksize;

 if (VAR_3->i_size == 0) {
  FUNC_0(VAR_3)->i_flags |= VAR_2;
  return 0;
 }

 if (FUNC_0(VAR_3)->i_flags & VAR_2) {
  return 0;
 }




 FUNC_3(&VAR_3->i_mutex);
 FUNC_8(VAR_3->i_sb);

 VAR_9 = VAR_3->i_size & (VAR_10 - 1);

 if (VAR_9 == 0) {
  FUNC_0(VAR_3)->i_flags |= VAR_2;
  goto out;
 }





 VAR_6 = VAR_3->i_size >> VAR_1;
 VAR_8 = VAR_3->i_mapping;
 VAR_7 = FUNC_2(VAR_8, VAR_6);
 VAR_5 = -VAR_0;
 if (!VAR_7) {
  goto out;
 }
 VAR_5 = FUNC_7(((void*)0), VAR_7, VAR_9, VAR_9);
 if (VAR_5)
  goto out_unlock;


 FUNC_1(VAR_7);
 VAR_5 = FUNC_6(((void*)0), VAR_7, VAR_9, VAR_9);
 FUNC_0(VAR_3)->i_flags |= VAR_2;

      out_unlock:
 FUNC_10(VAR_7);
 FUNC_5(VAR_7);

      out:
 FUNC_4(&VAR_3->i_mutex);
 FUNC_9(VAR_3->i_sb);
 return VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct inode {int dummy; } ;
struct file {int dummy; } ;
struct buffer_head {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int loff_t ;
struct TYPE_2__ {int ip_alloc_sem; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct buffer_head*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int) ;
 int FUNC_4 (struct inode*,struct buffer_head**,int) ;
 int FUNC_5 (struct inode*,int) ;
 int FUNC_6 (struct address_space*,int ,unsigned int,unsigned int,struct page**,void**,struct buffer_head*,int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct file *VAR_0, struct address_space *VAR_1,
        loff_t VAR_2, unsigned VAR_3, unsigned VAR_4,
        struct page **VAR_5, void **VAR_6)
{
 int VAR_7;
 struct buffer_head *VAR_8 = ((void*)0);
 struct inode *VAR_9 = VAR_1->host;

 VAR_7 = FUNC_4(VAR_9, &VAR_8, 1);
 if (VAR_7) {
  FUNC_3(VAR_7);
  return VAR_7;
 }
 FUNC_2(&FUNC_0(VAR_9)->ip_alloc_sem);

 VAR_7 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
           VAR_6, VAR_8, ((void*)0));
 if (VAR_7) {
  FUNC_3(VAR_7);
  goto out_fail;
 }

 FUNC_1(VAR_8);

 return 0;

out_fail:
 FUNC_7(&FUNC_0(VAR_9)->ip_alloc_sem);

 FUNC_1(VAR_8);
 FUNC_5(VAR_9, 1);

 return VAR_7;
}

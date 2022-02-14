
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int index; int lru; } ;
struct list_head {int dummy; } ;
struct file {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* readpages ) (struct file*,struct address_space*,struct list_head*,unsigned int) ;int (* readpage ) (struct file*,struct page*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct page*,struct address_space*,int ,int ) ;
 int FUNC_1 (int *) ;
 struct page* FUNC_2 (struct list_head*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct list_head*) ;
 int FUNC_5 (struct file*,struct address_space*,struct list_head*,unsigned int) ;
 int FUNC_6 (struct file*,struct page*) ;

__attribute__((used)) static int FUNC_7(struct address_space *VAR_1, struct file *VAR_2,
  struct list_head *VAR_3, unsigned VAR_4)
{
 unsigned VAR_5;
 int VAR_6;

 if (VAR_1->a_ops->readpages) {
  VAR_6 = VAR_1->a_ops->readpages(VAR_2, VAR_1, VAR_3, VAR_4);

  FUNC_4(VAR_3);
  goto out;
 }

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  struct page *VAR_7 = FUNC_2(VAR_3);
  FUNC_1(&VAR_7->lru);
  if (!FUNC_0(VAR_7, VAR_1,
     VAR_7->index, VAR_0)) {
   VAR_1->a_ops->readpage(VAR_2, VAR_7);
  }
  FUNC_3(VAR_7);
 }
 VAR_6 = 0;
out:
 return VAR_6;
}

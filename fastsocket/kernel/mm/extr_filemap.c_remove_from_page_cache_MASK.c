
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct address_space {int tree_lock; int a_ops; struct inode* host; } ;
struct TYPE_2__ {void (* freepage ) (struct page*) ;} ;


 int FUNC_0 (int) ;
 TYPE_1__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

void FUNC_8(struct page *VAR_0)
{
 struct address_space *VAR_1 = VAR_0->mapping;
 void (*VAR_2)(struct page *) = ((void*)0);
 struct inode *VAR_3 = VAR_1->host;

 FUNC_0(!FUNC_3(VAR_0));

 if (FUNC_2(VAR_3))
  VAR_2 = FUNC_1(VAR_1->a_ops)->freepage;

 FUNC_6(&VAR_1->tree_lock);
 FUNC_4(VAR_0);
 FUNC_7(&VAR_1->tree_lock);
 FUNC_5(VAR_0);

 if (VAR_2)
  VAR_2(VAR_0);
}

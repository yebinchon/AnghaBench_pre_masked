
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct address_space {int tree_lock; int a_ops; struct inode* host; } ;
struct TYPE_2__ {void (* freepage ) (struct page*) ;} ;


 int FUNC_0 (scalar_t__) ;
 TYPE_1__* FUNC_1 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct inode*) ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 scalar_t__ FUNC_8 (struct page*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (struct page*,int ) ;

__attribute__((used)) static int
FUNC_12(struct address_space *VAR_1, struct page *VAR_2)
{
 struct inode *VAR_3 = VAR_1->host;
 void (*VAR_4)(struct page *);

 if (VAR_2->mapping != VAR_1)
  return 0;

 if (FUNC_8(VAR_2) && !FUNC_11(VAR_2, VAR_0))
  return 0;

 FUNC_9(&VAR_1->tree_lock);
 if (FUNC_3(VAR_2))
  goto failed;

 FUNC_5(VAR_2);
 FUNC_0(FUNC_8(VAR_2));
 FUNC_4(VAR_2);
 FUNC_10(&VAR_1->tree_lock);
 FUNC_6(VAR_2);

 if (FUNC_2(VAR_3)) {
  VAR_4 = FUNC_1(VAR_1->a_ops)->freepage;
  if (VAR_4 != ((void*)0))
   VAR_4(VAR_2);
 }

 FUNC_7(VAR_2);
 return 1;
failed:
 FUNC_10(&VAR_1->tree_lock);
 return 0;
}

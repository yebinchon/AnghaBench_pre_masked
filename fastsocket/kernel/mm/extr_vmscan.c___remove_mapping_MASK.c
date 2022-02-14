
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int val; } ;
typedef TYPE_1__ swp_entry_t ;
struct page {int dummy; } ;
struct inode {int dummy; } ;
struct address_space {int tree_lock; int a_ops; struct inode* host; } ;
struct TYPE_5__ {void (* freepage ) (struct page*) ;} ;


 int FUNC_0 (int) ;
 TYPE_3__* FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct inode*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*,int) ;
 struct address_space* FUNC_10 (struct page*) ;
 int FUNC_11 (struct page*) ;
 int FUNC_12 (struct page*,int) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_1__,struct page*) ;
 scalar_t__ FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct address_space *VAR_0, struct page *VAR_1)
{
 struct inode *VAR_2 = VAR_0->host;

 FUNC_0(!FUNC_4(VAR_1));
 FUNC_0(VAR_0 != FUNC_10(VAR_1));

 FUNC_13(&VAR_0->tree_lock);
 if (!FUNC_9(VAR_1, 2))
  goto cannot_free;

 if (FUNC_16(FUNC_3(VAR_1))) {
  FUNC_12(VAR_1, 2);
  goto cannot_free;
 }

 if (FUNC_5(VAR_1)) {
  swp_entry_t VAR_3 = { .val = FUNC_11(VAR_1) };
  FUNC_6(VAR_1);
  FUNC_14(&VAR_0->tree_lock);
  FUNC_15(VAR_3, VAR_1);
 } else {
  void (*VAR_4)(struct page *) = ((void*)0);

  if (FUNC_2(VAR_2))
   VAR_4 = FUNC_1(VAR_0->a_ops)->freepage;

  FUNC_7(VAR_1);
  FUNC_14(&VAR_0->tree_lock);
  FUNC_8(VAR_1);

  if (VAR_4 != ((void*)0))
   VAR_4(VAR_1);
 }

 return 1;

cannot_free:
 FUNC_14(&VAR_0->tree_lock);
 return 0;
}

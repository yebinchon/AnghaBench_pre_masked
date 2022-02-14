
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct writeback_control {int nr_to_write; int sync_mode; } ;
struct page {struct address_space* mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* writepage ) (struct page*,struct writeback_control*) ;} ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (struct page*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*,struct writeback_control*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

int FUNC_9(struct page *VAR_2, int VAR_3)
{
 struct address_space *VAR_4 = VAR_2->mapping;
 int VAR_5 = 0;
 struct writeback_control VAR_6 = {
  .sync_mode = VAR_1,
  .nr_to_write = 1,
 };

 FUNC_0(!FUNC_2(VAR_2));

 if (VAR_3)
  FUNC_8(VAR_2);

 if (FUNC_3(VAR_2)) {
  FUNC_4(VAR_2);
  VAR_5 = VAR_4->a_ops->writepage(VAR_2, &VAR_6);
  if (VAR_5 == 0 && VAR_3) {
   FUNC_8(VAR_2);
   if (FUNC_1(VAR_2))
    VAR_5 = -VAR_0;
  }
  FUNC_5(VAR_2);
 } else {
  FUNC_7(VAR_2);
 }
 return VAR_5;
}

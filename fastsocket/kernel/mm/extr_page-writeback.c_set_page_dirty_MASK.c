
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {int dummy; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* set_page_dirty ) (struct page*) ;} ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct address_space*) ;
 struct address_space* FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

int FUNC_7(struct page *VAR_0)
{
 struct address_space *VAR_1 = FUNC_5(VAR_0);

 if (FUNC_4(VAR_1)) {
  int (*VAR_2)(struct page *) = VAR_1->a_ops->set_page_dirty;
  FUNC_0(VAR_0);




  return (*VAR_2)(VAR_0);
 }
 if (!FUNC_1(VAR_0)) {
  if (!FUNC_2(VAR_0))
   return 1;
 }
 return 0;
}

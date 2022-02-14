
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
struct TYPE_2__ {int (* launder_page ) (struct page*) ;} ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;

__attribute__((used)) static int FUNC_2(struct address_space *VAR_0, struct page *VAR_1)
{
 if (!FUNC_0(VAR_1))
  return 0;
 if (VAR_1->mapping != VAR_0 || VAR_0->a_ops->launder_page == ((void*)0))
  return 0;
 return VAR_0->a_ops->launder_page(VAR_1);
}

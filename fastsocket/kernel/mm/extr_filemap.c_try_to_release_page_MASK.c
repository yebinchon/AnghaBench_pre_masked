
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {struct address_space* mapping; } ;
struct address_space {TYPE_1__* a_ops; } ;
typedef int gfp_t ;
struct TYPE_2__ {int (* releasepage ) (struct page*,int ) ;} ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 scalar_t__ FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*) ;

int FUNC_5(struct page *VAR_0, gfp_t VAR_1)
{
 struct address_space * const VAR_2 = VAR_0->mapping;

 FUNC_0(!FUNC_1(VAR_0));
 if (FUNC_2(VAR_0))
  return 0;

 if (VAR_2 && VAR_2->a_ops->releasepage)
  return VAR_2->a_ops->releasepage(VAR_0, VAR_1);
 return FUNC_4(VAR_0);
}

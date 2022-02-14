
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct address_space*,struct page*) ;
 int FUNC_3 (struct page*,int ) ;

__attribute__((used)) static int
FUNC_4(struct address_space *VAR_0, struct page *VAR_1)
{
 int VAR_2;

 if (VAR_1->mapping != VAR_0)
  return 0;

 if (FUNC_1(VAR_1) && !FUNC_3(VAR_1, 0))
  return 0;

 FUNC_0(VAR_1);
 VAR_2 = FUNC_2(VAR_0, VAR_1);

 return VAR_2;
}

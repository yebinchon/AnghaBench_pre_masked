
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct address_space {int dummy; } ;


 int FUNC_0 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct page*,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*,int ) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;

__attribute__((used)) static int
FUNC_7(struct address_space *VAR_2, struct page *VAR_3)
{
 if (VAR_3->mapping != VAR_2)
  return -VAR_0;

 if (FUNC_5(VAR_3))
  FUNC_3(VAR_3, 0);

 FUNC_1(VAR_3, VAR_1);

 FUNC_2(VAR_3);
 FUNC_6(VAR_3);
 FUNC_0(VAR_3);
 FUNC_4(VAR_3);
 return 0;
}

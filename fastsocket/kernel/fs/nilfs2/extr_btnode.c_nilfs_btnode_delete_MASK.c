
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {struct address_space* mapping; } ;
struct buffer_head {struct page* b_page; } ;
struct address_space {int dummy; } ;
typedef int pgoff_t ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct address_space*,int ,int ) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct page*) ;
 int FUNC_7 (struct page*) ;
 int FUNC_8 (struct page*) ;

void FUNC_9(struct buffer_head *VAR_0)
{
 struct address_space *VAR_1;
 struct page *VAR_2 = VAR_0->b_page;
 pgoff_t VAR_3 = FUNC_6(VAR_2);
 int VAR_4;

 FUNC_4(VAR_2);
 FUNC_2(VAR_2);
 FUNC_8(VAR_2);

 FUNC_3(VAR_0);
 VAR_4 = FUNC_0(VAR_2);
 VAR_1 = VAR_2->mapping;
 FUNC_7(VAR_2);
 FUNC_5(VAR_2);

 if (!VAR_4 && VAR_1)
  FUNC_1(VAR_1, VAR_3, VAR_3);
}

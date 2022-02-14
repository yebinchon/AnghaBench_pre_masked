
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_blocknr; struct page* b_page; } ;


 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (struct buffer_head*) ;
 scalar_t__ FUNC_9 (struct page*) ;
 int FUNC_10 (struct buffer_head*) ;

void FUNC_11(struct buffer_head *VAR_0)
{
 struct page *VAR_1 = VAR_0->b_page;

 FUNC_8(VAR_0);
 FUNC_6(VAR_0);
 FUNC_4(VAR_0);
 if (FUNC_9(VAR_1))
  FUNC_2(VAR_1);

 FUNC_7(VAR_0);
 FUNC_5(VAR_0);
 VAR_0->b_blocknr = -1;
 FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 FUNC_10(VAR_0);
 FUNC_3(VAR_0);
}

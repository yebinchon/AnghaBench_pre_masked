
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {scalar_t__ b_size; struct buffer_head* b_this_page; } ;
typedef int loff_t ;


 int VAR_0 ;
 struct buffer_head* FUNC_0 (struct page*) ;
 scalar_t__ FUNC_1 (struct page*) ;
 int FUNC_2 (struct buffer_head*) ;

__attribute__((used)) static void FUNC_3(struct page *VAR_1, loff_t VAR_2)
{
 struct buffer_head *VAR_3;
 struct buffer_head *VAR_4;
 struct buffer_head *VAR_5;
 unsigned long VAR_6;
 unsigned long VAR_7;

 if (VAR_1) {
  if (FUNC_1(VAR_1)) {
   VAR_6 = VAR_2 & (VAR_0 - 1);
   VAR_7 = 0;
   VAR_4 = FUNC_0(VAR_1);
   VAR_3 = VAR_4;
   do {
    VAR_5 = VAR_3->b_this_page;







    VAR_7 += VAR_3->b_size;
    if (VAR_7 > VAR_6) {
     FUNC_2(VAR_3);
    }
    VAR_3 = VAR_5;
   } while (VAR_3 != VAR_4);
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct buffer_head*) ;
 int FUNC_4 (struct buffer_head*) ;
 int FUNC_5 (struct buffer_head*) ;
 unsigned int FUNC_6 (unsigned int,unsigned int) ;
 unsigned int FUNC_7 (unsigned int,unsigned int) ;
 struct buffer_head* FUNC_8 (struct page*) ;
 int FUNC_9 (struct page*) ;
 int FUNC_10 (struct buffer_head*) ;
 int FUNC_11 (struct page*,unsigned int,unsigned int) ;

__attribute__((used)) static void FUNC_12(struct page *VAR_0, unsigned VAR_1, unsigned VAR_2)
{
 unsigned int VAR_3, VAR_4;
 struct buffer_head *VAR_5, *VAR_6;

 FUNC_0(!FUNC_1(VAR_0));
 if (!FUNC_9(VAR_0))
  return;

 VAR_6 = VAR_5 = FUNC_8(VAR_0);
 VAR_3 = 0;
 do {
  VAR_4 = VAR_3 + VAR_6->b_size;

  if (FUNC_3(VAR_6)) {
   if (VAR_4 > VAR_1 && VAR_3 < VAR_2) {
    if (!FUNC_2(VAR_0)) {
     unsigned VAR_7, VAR_8;

     VAR_7 = FUNC_6(VAR_1, VAR_3);
     VAR_8 = FUNC_7(VAR_2, VAR_4);

     FUNC_11(VAR_0, VAR_7, VAR_8);
     FUNC_10(VAR_6);
    }

    FUNC_4(VAR_6);
    FUNC_5(VAR_6);
   }
  }

  VAR_3 = VAR_4;
  VAR_6 = VAR_6->b_this_page;
 } while (VAR_6 != VAR_5);
}

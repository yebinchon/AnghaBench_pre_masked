
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct page*) ;

unsigned FUNC_2(struct page *VAR_0,
     unsigned VAR_1, unsigned VAR_2)
{
 unsigned VAR_3, VAR_4;
 struct buffer_head *VAR_5, *VAR_6;
 unsigned VAR_7 = 0;

 for (VAR_5 = VAR_6 = FUNC_1(VAR_0), VAR_3 = 0;
      VAR_5 != VAR_6 || !VAR_3;
      VAR_3 = VAR_4, VAR_5 = VAR_5->b_this_page) {
  VAR_4 = VAR_3 + VAR_5->b_size;
  if (VAR_4 > VAR_1 && VAR_3 < VAR_2 && !FUNC_0(VAR_5))
   VAR_7++;
 }
 return VAR_7;
}

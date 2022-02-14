
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {struct buffer_head* b_this_page; } ;


 int FUNC_0 (struct buffer_head*) ;
 struct buffer_head* FUNC_1 (struct page*) ;

__attribute__((used)) static inline struct buffer_head *
FUNC_2(struct page *VAR_0, unsigned int VAR_1)
{
 struct buffer_head *VAR_2 = FUNC_1(VAR_0);

 while (VAR_1-- > 0)
  VAR_2 = VAR_2->b_this_page;
 FUNC_0(VAR_2);
 return VAR_2;
}

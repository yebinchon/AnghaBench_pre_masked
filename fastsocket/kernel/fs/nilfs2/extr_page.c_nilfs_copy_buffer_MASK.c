
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {int b_state; struct buffer_head* b_this_page; int b_bdev; int b_blocknr; int b_size; struct page* b_page; } ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 int FUNC_0 (struct page*) ;
 int FUNC_1 (struct page*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct page*) ;
 int FUNC_4 (struct buffer_head*) ;
 void* FUNC_5 (struct page*,int ) ;
 int FUNC_6 (void*,int ) ;
 int FUNC_7 (struct buffer_head*) ;
 int FUNC_8 (void*,void*,int ) ;
 int FUNC_9 (struct buffer_head*) ;

void FUNC_10(struct buffer_head *VAR_5, struct buffer_head *VAR_6)
{
 void *VAR_7, *VAR_8;
 unsigned long VAR_9;
 struct page *VAR_10 = VAR_6->b_page, *VAR_11 = VAR_5->b_page;
 struct buffer_head *VAR_12;

 VAR_7 = FUNC_5(VAR_10, VAR_2);
 VAR_8 = FUNC_5(VAR_11, VAR_3);
 FUNC_8(VAR_8 + FUNC_4(VAR_5), VAR_7 + FUNC_4(VAR_6), VAR_6->b_size);
 FUNC_6(VAR_8, VAR_3);
 FUNC_6(VAR_7, VAR_2);

 VAR_5->b_state = VAR_6->b_state & VAR_4;
 VAR_5->b_blocknr = VAR_6->b_blocknr;
 VAR_5->b_bdev = VAR_6->b_bdev;

 VAR_12 = VAR_5;
 VAR_9 = VAR_6->b_state & ((1UL << VAR_1) | (1UL << VAR_0));
 while ((VAR_12 = VAR_12->b_this_page) != VAR_5) {
  FUNC_7(VAR_12);
  VAR_9 &= VAR_12->b_state;
  FUNC_9(VAR_12);
 }
 if (VAR_9 & (1UL << VAR_1))
  FUNC_3(VAR_11);
 else
  FUNC_1(VAR_11);
 if (VAR_9 & (1UL << VAR_0))
  FUNC_2(VAR_11);
 else
  FUNC_0(VAR_11);
}

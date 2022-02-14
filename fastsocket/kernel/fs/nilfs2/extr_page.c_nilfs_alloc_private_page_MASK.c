
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct page {int dummy; } ;
struct buffer_head {unsigned long b_state; struct buffer_head* b_this_page; struct block_device* b_bdev; } ;
struct block_device {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct page*) ;
 struct page* FUNC_1 (int ) ;
 struct buffer_head* FUNC_2 (struct page*,int,int ) ;
 int FUNC_3 (struct page*,struct buffer_head*) ;
 int FUNC_4 (struct page*) ;
 scalar_t__ FUNC_5 (int) ;
 int FUNC_6 (struct page*) ;

struct page *FUNC_7(struct block_device *VAR_2, int VAR_3,
          unsigned long VAR_4)
{
 struct buffer_head *VAR_5, *VAR_6, *VAR_7;
 struct page *VAR_8;

 VAR_8 = FUNC_1(VAR_1);
 if (FUNC_5(!VAR_8))
  return ((void*)0);

 FUNC_4(VAR_8);
 VAR_6 = FUNC_2(VAR_8, VAR_3, 0);
 if (FUNC_5(!VAR_6)) {
  FUNC_6(VAR_8);
  FUNC_0(VAR_8);
  return ((void*)0);
 }

 VAR_5 = VAR_6;
 do {
  VAR_5->b_state = (1UL << VAR_0) | VAR_4;
  VAR_7 = VAR_5;
  VAR_5->b_bdev = VAR_2;
  VAR_5 = VAR_5->b_this_page;
 } while (VAR_5);

 VAR_7->b_this_page = VAR_6;
 FUNC_3(VAR_8, VAR_6);

 return VAR_8;
}

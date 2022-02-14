
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct buffer_head {unsigned int b_size; struct buffer_head* b_this_page; } ;
struct TYPE_2__ {struct inode* host; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 scalar_t__ FUNC_3 (struct inode*,struct buffer_head*) ;
 struct buffer_head* FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*) ;
 int FUNC_6 (struct buffer_head*) ;
 int FUNC_7 (struct page*,int ) ;

__attribute__((used)) static void FUNC_8(struct page *VAR_0, unsigned long VAR_1)
{
 struct buffer_head *VAR_2, *VAR_3, *VAR_4;
 struct inode *VAR_5 = VAR_0->mapping->host;
 unsigned int VAR_6 = 0;
 int VAR_7 = 1;

 FUNC_0(!FUNC_2(VAR_0));

 if (VAR_1 == 0)
  FUNC_1(VAR_0);

 if (!FUNC_5(VAR_0))
  goto out;

 VAR_2 = FUNC_4(VAR_0);
 VAR_3 = VAR_2;
 do {
  unsigned int VAR_8 = VAR_6 + VAR_3->b_size;
  VAR_4 = VAR_3->b_this_page;




  if (VAR_1 <= VAR_6) {
   if (FUNC_3(VAR_5, VAR_3))
    FUNC_6(VAR_3);
   else
    VAR_7 = 0;
  }
  VAR_6 = VAR_8;
  VAR_3 = VAR_4;
 } while (VAR_3 != VAR_2);






 if (!VAR_1 && VAR_7) {
  VAR_7 = FUNC_7(VAR_0, 0);

 }
      out:
 return;
}

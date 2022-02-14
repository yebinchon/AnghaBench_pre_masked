
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct buf {int b_flags; int b_offset; int b_npages; int * b_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (int ,int,int) ;

void
FUNC_3(struct buf *VAR_3, int VAR_4, int VAR_5)
{
 int VAR_6, VAR_7;
 vm_page_t VAR_8;

 if (!(VAR_3->b_flags & VAR_0))
  return;






 VAR_4 += (VAR_3->b_offset & VAR_1);
 VAR_7 = VAR_2 - (VAR_4 & VAR_1);







 FUNC_0(VAR_3);
 for (VAR_6 = VAR_4 / VAR_2; VAR_5 > 0 && VAR_6 < VAR_3->b_npages; ++VAR_6) {
  VAR_8 = VAR_3->b_pages[VAR_6];
  if (VAR_7 > VAR_5)
   VAR_7 = VAR_5;
  FUNC_2(VAR_8, VAR_4 & VAR_1, VAR_7);
  VAR_4 += VAR_7;
  VAR_5 -= VAR_7;
  VAR_7 = VAR_2;
 }
 FUNC_1(VAR_3);
}

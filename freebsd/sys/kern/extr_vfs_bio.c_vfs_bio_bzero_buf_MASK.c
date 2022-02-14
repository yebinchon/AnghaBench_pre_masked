
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
struct buf {int b_npages; int * b_pages; scalar_t__ b_data; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (struct buf*) ;
 int FUNC_3 (scalar_t__,int) ;
 int FUNC_4 (int ,int,int) ;

void
FUNC_5(struct buf *VAR_2, int VAR_3, int VAR_4)
{
 vm_page_t VAR_5;
 int VAR_6, VAR_7;

 if (FUNC_2(VAR_2)) {
  FUNC_0(VAR_2);
  FUNC_3(VAR_2->b_data + VAR_3, VAR_4);
 } else {
  FUNC_1(VAR_2);
  VAR_7 = VAR_1 - (VAR_3 & VAR_0);
  for (VAR_6 = VAR_3 / VAR_1; VAR_4 > 0 && VAR_6 < VAR_2->b_npages; ++VAR_6) {
   VAR_5 = VAR_2->b_pages[VAR_6];
   if (VAR_7 > VAR_4)
    VAR_7 = VAR_4;
   FUNC_4(VAR_5, VAR_3 & VAR_0, VAR_7);
   VAR_3 += VAR_7;
   VAR_4 -= VAR_7;
   VAR_7 = VAR_1;
  }
 }
}

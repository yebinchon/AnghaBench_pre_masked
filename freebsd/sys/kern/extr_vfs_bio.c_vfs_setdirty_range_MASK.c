
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* vm_offset_t ;
struct buf {int b_npages; int b_offset; void* b_bcount; void* b_dirtyoff; void* b_dirtyend; TYPE_1__** b_pages; } ;
struct TYPE_2__ {scalar_t__ dirty; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_1(struct buf *VAR_2)
{
 vm_offset_t VAR_3;
 vm_offset_t VAR_4;
 int VAR_5;





 for (VAR_5 = 0; VAR_5 < VAR_2->b_npages; VAR_5++)
  FUNC_0(VAR_2->b_pages[VAR_5]);






 for (VAR_5 = 0; VAR_5 < VAR_2->b_npages; VAR_5++) {
  if (VAR_2->b_pages[VAR_5]->dirty)
   break;
 }
 VAR_3 = (VAR_5 << VAR_1) - (VAR_2->b_offset & VAR_0);

 for (VAR_5 = VAR_2->b_npages - 1; VAR_5 >= 0; --VAR_5) {
  if (VAR_2->b_pages[VAR_5]->dirty) {
   break;
  }
 }
 VAR_4 = ((VAR_5 + 1) << VAR_1) - (VAR_2->b_offset & VAR_0);





 if (VAR_4 > VAR_2->b_bcount)
  VAR_4 = VAR_2->b_bcount;






 if (VAR_3 < VAR_4) {
  if (VAR_2->b_dirtyoff > VAR_3)
   VAR_2->b_dirtyoff = VAR_3;
  if (VAR_2->b_dirtyend < VAR_4)
   VAR_2->b_dirtyend = VAR_4;
 }
}

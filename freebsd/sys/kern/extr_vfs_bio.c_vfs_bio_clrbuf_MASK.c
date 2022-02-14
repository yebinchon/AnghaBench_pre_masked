
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct buf {int b_flags; int b_offset; int b_npages; scalar_t__ b_resid; TYPE_1__** b_pages; scalar_t__ b_bufsize; int b_ioflags; } ;
struct TYPE_4__ {int valid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 int FUNC_0 (struct buf*) ;
 int FUNC_1 (int,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,int,int) ;
 int FUNC_3 (int,int) ;
 int FUNC_4 (struct buf*) ;
 int FUNC_5 (struct buf*) ;
 int FUNC_6 (TYPE_1__*,int,int ) ;

void
FUNC_7(struct buf *VAR_8)
{
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13, VAR_14;

 if ((VAR_8->b_flags & (VAR_3 | VAR_2)) != VAR_3) {
  FUNC_0(VAR_8);
  return;
 }
 VAR_8->b_flags &= ~VAR_1;
 VAR_8->b_ioflags &= ~VAR_0;
 FUNC_4(VAR_8);
 VAR_12 = VAR_8->b_offset & VAR_5;
 VAR_14 = 0;
 for (VAR_9 = 0; VAR_9 < VAR_8->b_npages; VAR_9++, VAR_12 = 0) {
  VAR_14 = FUNC_1(VAR_14 + VAR_6, VAR_8->b_offset + VAR_8->b_bufsize);
  VAR_13 = VAR_14 & VAR_5;
  if (VAR_13 == 0)
   VAR_13 = VAR_6;
  if (VAR_8->b_pages[VAR_9] == VAR_7)
   continue;
  VAR_10 = VAR_12 / VAR_4;
  VAR_11 = ((1 << ((VAR_13 - VAR_12) / VAR_4)) - 1) << VAR_10;
  if ((VAR_8->b_pages[VAR_9]->valid & VAR_11) == VAR_11)
   continue;
  if ((VAR_8->b_pages[VAR_9]->valid & VAR_11) == 0)
   FUNC_2(VAR_8->b_pages[VAR_9], VAR_12, VAR_13 - VAR_12);
  else {
   for (; VAR_12 < VAR_13; VAR_12 += VAR_4, VAR_10++) {
    if ((VAR_8->b_pages[VAR_9]->valid & (1 << VAR_10)) == 0) {
     FUNC_2(VAR_8->b_pages[VAR_9],
         VAR_12, VAR_4);
    }
   }
  }
  FUNC_6(VAR_8->b_pages[VAR_9], VAR_10 * VAR_4,
      FUNC_3(VAR_13 - VAR_12, VAR_4));
 }
 FUNC_5(VAR_8);
 VAR_8->b_resid = 0;
}

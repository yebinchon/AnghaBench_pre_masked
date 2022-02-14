
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t vm_pindex_t ;
typedef int vm_page_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
struct buf {int b_npages; int b_offset; int b_bcount; int b_flags; int * b_pages; TYPE_1__* b_bufobj; } ;
struct TYPE_2__ {int bo_object; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct buf*) ;
 scalar_t__ FUNC_5 (struct buf*) ;
 int FUNC_6 (struct buf*,int,int,int,int ) ;
 int FUNC_7 (int ,scalar_t__,int,int *,int) ;

__attribute__((used)) static void
FUNC_8(struct buf *VAR_8, int VAR_9, int VAR_10)
{




 vm_object_t VAR_11;
 vm_offset_t VAR_12;
 vm_offset_t VAR_13;
 vm_page_t VAR_14;






 VAR_11 = VAR_8->b_bufobj->bo_object;
 if (VAR_8->b_npages < VAR_9) {
  FUNC_2(VAR_11);
  (void)FUNC_7(VAR_11,
      FUNC_1(VAR_8->b_offset) + VAR_8->b_npages,
      VAR_6 | VAR_4 |
      VAR_5 | VAR_7,
      &VAR_8->b_pages[VAR_8->b_npages], VAR_9 - VAR_8->b_npages);
  FUNC_3(VAR_11);
  VAR_8->b_npages = VAR_9;
 }
 VAR_12 = VAR_8->b_bcount;
 VAR_13 = VAR_3 - ((VAR_8->b_offset + VAR_12) & VAR_1);
 while ((VAR_8->b_flags & VAR_0) && VAR_12 < VAR_10) {
  vm_pindex_t VAR_15;

  if (VAR_13 > (VAR_10 - VAR_12))
   VAR_13 = VAR_10 - VAR_12;
  VAR_15 = ((VAR_8->b_offset & VAR_1) + VAR_12) >> VAR_2;
  VAR_14 = VAR_8->b_pages[VAR_15];
  FUNC_6(VAR_8, VAR_8->b_offset, VAR_12, VAR_13, VAR_14);
  VAR_12 += VAR_13;
  VAR_13 = VAR_3;
 }




 if (FUNC_5(VAR_8))
  FUNC_4(VAR_8);
 else
  FUNC_0(VAR_8);
}

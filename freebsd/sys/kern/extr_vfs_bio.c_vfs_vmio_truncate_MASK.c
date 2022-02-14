
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef scalar_t__ vm_offset_t ;
typedef int * vm_object_t ;
struct buf {int b_npages; int b_flags; scalar_t__* b_pages; TYPE_1__* b_bufobj; scalar_t__ b_data; } ;
struct TYPE_2__ {int * bo_object; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int,char*) ;
 int VAR_2 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (struct buf*) ;
 int FUNC_6 (scalar_t__,int) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int) ;
 int FUNC_9 (scalar_t__,int) ;

__attribute__((used)) static void
FUNC_10(struct buf *VAR_6, int VAR_7)
{
 vm_object_t VAR_8;
 vm_page_t VAR_9;
 int VAR_10, VAR_11;

 if (VAR_6->b_npages == VAR_7)
  return;

 if (FUNC_5(VAR_6)) {
  FUNC_0(VAR_6);
  FUNC_6((vm_offset_t)FUNC_7((vm_offset_t)VAR_6->b_data) +
      (VAR_7 << VAR_2), VAR_6->b_npages - VAR_7);
 } else
  FUNC_1(VAR_6);




 VAR_10 = (VAR_6->b_flags & VAR_1) != 0 ? VAR_3 : 0;
 if ((VAR_6->b_flags & VAR_0) != 0) {
  VAR_10 |= VAR_4;
  VAR_8 = VAR_6->b_bufobj->bo_object;
  FUNC_3(VAR_8);
 } else {
  VAR_8 = ((void*)0);
 }
 for (VAR_11 = VAR_7; VAR_11 < VAR_6->b_npages; VAR_11++) {
  VAR_9 = VAR_6->b_pages[VAR_11];
  FUNC_2(VAR_9 != VAR_5, ("allocbuf: bogus page found"));
  VAR_6->b_pages[VAR_11] = ((void*)0);
  if (VAR_8 != ((void*)0))
   FUNC_9(VAR_9, VAR_10);
  else
   FUNC_8(VAR_9, VAR_10);
 }
 if (VAR_8 != ((void*)0))
  FUNC_4(VAR_8);
 VAR_6->b_npages = VAR_7;
}

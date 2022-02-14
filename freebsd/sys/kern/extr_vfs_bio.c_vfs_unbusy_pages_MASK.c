
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
struct buf {int b_flags; int b_npages; scalar_t__* b_pages; scalar_t__ b_data; int b_offset; TYPE_1__* b_bufobj; } ;
struct TYPE_2__ {int bo_object; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_5 (struct buf*) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int ,scalar_t__*,int) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ,int) ;
 scalar_t__ FUNC_11 (int ,scalar_t__) ;
 int FUNC_12 (scalar_t__) ;

void
FUNC_13(struct buf *VAR_2)
{
 int VAR_3;
 vm_object_t VAR_4;
 vm_page_t VAR_5;
 bool VAR_6;

 FUNC_8(VAR_2);
 if (!(VAR_2->b_flags & VAR_0))
  return;

 VAR_4 = VAR_2->b_bufobj->bo_object;
 VAR_6 = 0;
 for (VAR_3 = 0; VAR_3 < VAR_2->b_npages; VAR_3++) {
  VAR_5 = VAR_2->b_pages[VAR_3];
  if (VAR_5 == VAR_1) {
   if (VAR_6 == 0) {
    VAR_6 = 1;
    FUNC_3(VAR_4);
   }
   VAR_5 = FUNC_11(VAR_4, FUNC_2(VAR_2->b_offset) + VAR_3);
   if (!VAR_5)
    FUNC_6("vfs_unbusy_pages: page missing\n");
   VAR_2->b_pages[VAR_3] = VAR_5;
   if (FUNC_5(VAR_2)) {
    FUNC_0(VAR_2);
    FUNC_7(FUNC_9((vm_offset_t)VAR_2->b_data),
        VAR_2->b_pages, VAR_2->b_npages);
   } else
    FUNC_1(VAR_2);
  }
  FUNC_12(VAR_5);
 }
 if (VAR_6)
  FUNC_4(VAR_4);
 FUNC_10(VAR_4, VAR_2->b_npages);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int vm_page_t ;
typedef int vm_ooffset_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
struct buf {int b_flags; int b_offset; int b_npages; scalar_t__ b_bufsize; int * b_pages; scalar_t__ b_data; TYPE_1__* b_bufobj; } ;
typedef int off_t ;
struct TYPE_2__ {int bo_object; } ;


 int FUNC_0 (struct buf*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int,char*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_2 (struct buf*) ;
 int FUNC_3 (int ,int *,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct buf*) ;
 int FUNC_7 (struct buf*,int,int ) ;
 int FUNC_8 (struct buf*) ;
 int FUNC_9 (int ,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ) ;

void
FUNC_12(struct buf *VAR_7, int VAR_8)
{
 vm_object_t VAR_9;
 vm_ooffset_t VAR_10;
 vm_page_t VAR_11;
 int VAR_12;
 bool VAR_13;

 if (!(VAR_7->b_flags & VAR_2))
  return;

 VAR_9 = VAR_7->b_bufobj->bo_object;
 VAR_10 = VAR_7->b_offset;
 FUNC_1(VAR_7->b_offset != VAR_3,
     ("vfs_busy_pages: no buffer offset"));
 if ((VAR_7->b_flags & VAR_1) == 0) {
  FUNC_9(VAR_9, VAR_7->b_npages);
  FUNC_6(VAR_7);
 }
 if (VAR_7->b_bufsize != 0)
  FUNC_8(VAR_7);
 VAR_13 = 0;
 for (VAR_12 = 0; VAR_12 < VAR_7->b_npages; VAR_12++) {
  VAR_11 = VAR_7->b_pages[VAR_12];
  FUNC_11(VAR_11);
  if (VAR_8) {
   FUNC_4(VAR_11);
   FUNC_7(VAR_7, VAR_10, VAR_11);
  } else if (FUNC_10(VAR_11) &&
      (VAR_7->b_flags & VAR_0) == 0) {
   VAR_7->b_pages[VAR_12] = VAR_6;
   VAR_13 = 1;
  }
  VAR_10 = (VAR_10 + VAR_5) & ~(off_t)VAR_4;
 }
 if (VAR_13 && FUNC_2(VAR_7)) {
  FUNC_0(VAR_7);
  FUNC_3(FUNC_5((vm_offset_t)VAR_7->b_data),
      VAR_7->b_pages, VAR_7->b_npages);
 }
}

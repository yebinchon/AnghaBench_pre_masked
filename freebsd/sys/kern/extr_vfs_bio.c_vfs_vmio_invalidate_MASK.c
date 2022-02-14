
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_page_t ;
typedef int vm_offset_t ;
typedef int vm_object_t ;
struct buf {int b_npages; int b_flags; int b_bufsize; int b_offset; scalar_t__* b_pages; TYPE_1__* b_bufobj; scalar_t__ b_data; } ;
struct TYPE_2__ {int bo_object; } ;


 int FUNC_0 (struct buf*) ;
 int FUNC_1 (struct buf*) ;
 int VAR_0 ;
 int FUNC_2 (int,char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_5 (struct buf*) ;
 int FUNC_6 (char*) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 int FUNC_8 (int ,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,int ) ;
 int FUNC_11 (scalar_t__,int) ;
 int FUNC_12 (scalar_t__,int,int) ;
 int FUNC_13 (scalar_t__) ;

__attribute__((used)) static void
FUNC_14(struct buf *VAR_6)
{
 vm_object_t VAR_7;
 vm_page_t VAR_8;
 int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;

 if (FUNC_5(VAR_6)) {
  FUNC_0(VAR_6);
  FUNC_8(FUNC_9((vm_offset_t)VAR_6->b_data), VAR_6->b_npages);
 } else
  FUNC_1(VAR_6);
 VAR_9 = (VAR_6->b_flags & VAR_0) != 0 ? VAR_4 : 0;
 VAR_7 = VAR_6->b_bufobj->bo_object;
 VAR_11 = VAR_6->b_bufsize;
 VAR_12 = VAR_6->b_offset & VAR_1;
 FUNC_3(VAR_7);
 for (VAR_10 = 0; VAR_10 < VAR_6->b_npages; VAR_10++) {
  VAR_8 = VAR_6->b_pages[VAR_10];
  if (VAR_8 == VAR_5)
   FUNC_6("vfs_vmio_invalidate: Unexpected bogus page.");
  VAR_6->b_pages[VAR_10] = ((void*)0);

  VAR_13 = VAR_11 > (VAR_2 - VAR_12) ?
      (VAR_2 - VAR_12) : VAR_11;
  FUNC_2(VAR_13 >= 0, ("brelse: extra page"));
  FUNC_10(VAR_8, VAR_3);
  if (FUNC_7(VAR_8) == 0)
   FUNC_12(VAR_8, VAR_12, VAR_13);
  FUNC_13(VAR_8);
  FUNC_11(VAR_8, VAR_9);
  VAR_11 -= VAR_13;
  VAR_12 = 0;
 }
 FUNC_4(VAR_7);
 VAR_6->b_npages = 0;
}

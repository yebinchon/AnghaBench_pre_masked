
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_page_t ;
typedef int vm_ooffset_t ;
struct buf {int b_flags; int b_bufsize; int b_offset; int b_npages; int * b_pages; } ;
typedef int off_t ;


 int VAR_0 ;
 int FUNC_0 (int,char*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct buf*) ;
 int FUNC_2 (struct buf*) ;
 int FUNC_3 (struct buf*,int,int ) ;
 int FUNC_4 (struct buf*) ;

__attribute__((used)) static void
FUNC_5(struct buf *VAR_4)
{
 vm_ooffset_t VAR_5, VAR_6, VAR_7;
 vm_page_t VAR_8;
 int VAR_9;

 if ((VAR_4->b_flags & VAR_0) == 0 || VAR_4->b_bufsize == 0)
  return;

 VAR_5 = VAR_4->b_offset;
 FUNC_0(VAR_4->b_offset != VAR_1,
     ("vfs_clean_pages_dirty_buf: no buffer offset"));

 FUNC_1(VAR_4);
 FUNC_4(VAR_4);
 for (VAR_9 = 0; VAR_9 < VAR_4->b_npages; VAR_9++) {
  VAR_6 = (VAR_5 + VAR_3) & ~(off_t)VAR_2;
  VAR_7 = VAR_6;
  if (VAR_7 > VAR_4->b_offset + VAR_4->b_bufsize)
   VAR_7 = VAR_4->b_offset + VAR_4->b_bufsize;
  VAR_8 = VAR_4->b_pages[VAR_9];
  FUNC_3(VAR_4, VAR_5, VAR_8);

  VAR_5 = VAR_6;
 }
 FUNC_2(VAR_4);
}

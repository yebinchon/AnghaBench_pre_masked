
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct xfs_buf {size_t b_buffer_length; size_t b_count_desired; int b_flags; int b_bn; scalar_t__ b_file_offset; int * b_addr; scalar_t__ b_page_count; int * b_pages; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct xfs_buf*) ;

void
FUNC_1(
 struct xfs_buf *VAR_2,
 size_t VAR_3)
{
 if (VAR_2->b_pages)
  FUNC_0(VAR_2);

 VAR_2->b_pages = ((void*)0);
 VAR_2->b_page_count = 0;
 VAR_2->b_addr = ((void*)0);
 VAR_2->b_file_offset = 0;
 VAR_2->b_buffer_length = VAR_2->b_count_desired = VAR_3;
 VAR_2->b_bn = VAR_1;
 VAR_2->b_flags &= ~VAR_0;
}

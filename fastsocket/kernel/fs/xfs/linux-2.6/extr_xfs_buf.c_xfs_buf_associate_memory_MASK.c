
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {unsigned long b_offset; int b_page_count; size_t b_count_desired; size_t b_buffer_length; int b_flags; int * b_pages; void* b_addr; } ;
typedef TYPE_1__ xfs_buf_t ;


 size_t FUNC_0 (size_t) ;
 unsigned long VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int ) ;
 int FUNC_3 (void*) ;

int
FUNC_4(
 xfs_buf_t *VAR_5,
 void *VAR_6,
 size_t VAR_7)
{
 int VAR_8;
 int VAR_9 = 0;
 unsigned long VAR_10;
 unsigned long VAR_11;
 size_t VAR_12;
 int VAR_13;

 VAR_10 = (unsigned long)VAR_6 & VAR_0;
 VAR_11 = (unsigned long)VAR_6 - VAR_10;
 VAR_12 = FUNC_0(VAR_7 + VAR_11);
 VAR_13 = VAR_12 >> VAR_1;


 if (VAR_5->b_pages)
  FUNC_1(VAR_5);

 VAR_5->b_pages = ((void*)0);
 VAR_5->b_addr = VAR_6;

 VAR_8 = FUNC_2(VAR_5, VAR_13, VAR_3);
 if (VAR_8)
  return VAR_8;

 VAR_5->b_offset = VAR_11;

 for (VAR_9 = 0; VAR_9 < VAR_5->b_page_count; VAR_9++) {
  VAR_5->b_pages[VAR_9] = FUNC_3((void *)VAR_10);
  VAR_10 += VAR_2;
 }

 VAR_5->b_count_desired = VAR_7;
 VAR_5->b_buffer_length = VAR_12;
 VAR_5->b_flags |= VAR_4;

 return 0;
}

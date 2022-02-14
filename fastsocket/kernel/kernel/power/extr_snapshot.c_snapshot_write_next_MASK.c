
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct snapshot_handle {scalar_t__ prev; scalar_t__ cur; scalar_t__ offset; int sync_read; scalar_t__ buf_offset; scalar_t__ cur_offset; void* buffer; } ;
struct chain_allocator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (void*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (void*) ;
 void* VAR_5 ;
 int FUNC_2 (struct chain_allocator*,int ,int ) ;
 int VAR_6 ;
 int FUNC_3 () ;
 void* FUNC_4 (int *,struct chain_allocator*) ;
 void* FUNC_5 (int ,int ) ;
 int FUNC_6 (void*) ;
 int FUNC_7 (int *,int ,int ) ;
 int FUNC_8 (int *) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *,int *) ;
 int * VAR_10 ;
 int FUNC_10 (void*,int *) ;

int FUNC_11(struct snapshot_handle *VAR_11, size_t VAR_12)
{
 static struct chain_allocator VAR_13;
 int VAR_14 = 0;


 if (VAR_11->prev && VAR_11->cur > VAR_8 + VAR_7)
  return 0;

 if (VAR_11->offset == 0) {
  if (!VAR_5)

   VAR_5 = FUNC_5(VAR_1, VAR_3);

  if (!VAR_5)
   return -VAR_0;

  VAR_11->buffer = VAR_5;
 }
 VAR_11->sync_read = 1;
 if (VAR_11->prev < VAR_11->cur) {
  if (VAR_11->prev == 0) {
   VAR_14 = FUNC_6(VAR_5);
   if (VAR_14)
    return VAR_14;

   VAR_14 = FUNC_7(&VAR_6, VAR_1, VAR_3);
   if (VAR_14)
    return VAR_14;

  } else if (VAR_11->prev <= VAR_8) {
   VAR_14 = FUNC_10(VAR_5, &VAR_6);
   if (VAR_14)
    return VAR_14;

   if (VAR_11->prev == VAR_8) {
    VAR_14 = FUNC_9(&VAR_9, &VAR_6);
    if (VAR_14)
     return VAR_14;

    FUNC_2(&VAR_13, VAR_1, VAR_4);
    FUNC_8(&VAR_9);
    VAR_10 = ((void*)0);
    VAR_11->buffer = FUNC_4(&VAR_9, &VAR_13);
    VAR_11->sync_read = 0;
    if (FUNC_0(VAR_11->buffer))
     return FUNC_1(VAR_11->buffer);
   }
  } else {
   FUNC_3();
   VAR_11->buffer = FUNC_4(&VAR_9, &VAR_13);
   if (FUNC_0(VAR_11->buffer))
    return FUNC_1(VAR_11->buffer);
   if (VAR_11->buffer != VAR_5)
    VAR_11->sync_read = 0;
  }
  VAR_11->prev = VAR_11->cur;
 }
 VAR_11->buf_offset = VAR_11->cur_offset;
 if (VAR_11->cur_offset + VAR_12 >= VAR_2) {
  VAR_12 = VAR_2 - VAR_11->cur_offset;
  VAR_11->cur_offset = 0;
  VAR_11->cur++;
 } else {
  VAR_11->cur_offset += VAR_12;
 }
 VAR_11->offset += VAR_12;
 return VAR_12;
}

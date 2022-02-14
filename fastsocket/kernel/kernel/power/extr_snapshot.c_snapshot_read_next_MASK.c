
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct swsusp_info {int dummy; } ;
struct snapshot_handle {scalar_t__ cur; scalar_t__ prev; scalar_t__ buf_offset; scalar_t__ cur_offset; scalar_t__ offset; void* buffer; } ;
struct page {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct page*) ;
 void* VAR_5 ;
 int VAR_6 ;
 void* FUNC_1 (int ,int ) ;
 int FUNC_2 (struct swsusp_info*) ;
 void* FUNC_3 (struct page*,int ) ;
 int FUNC_4 (void*,int ) ;
 int FUNC_5 (void*,void*,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (void*,int ,scalar_t__) ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (void*,int *) ;
 void* FUNC_10 (struct page*) ;
 struct page* FUNC_11 (int ) ;

int FUNC_12(struct snapshot_handle *VAR_10, size_t VAR_11)
{
 if (VAR_10->cur > VAR_8 + VAR_7)
  return 0;

 if (!VAR_5) {

  VAR_5 = FUNC_1(VAR_1, VAR_4);
  if (!VAR_5)
   return -VAR_0;
 }
 if (!VAR_10->offset) {
  int VAR_12;

  VAR_12 = FUNC_2((struct swsusp_info *)VAR_5);
  if (VAR_12)
   return VAR_12;
  VAR_10->buffer = VAR_5;
  FUNC_7(&VAR_9);
  FUNC_7(&VAR_6);
 }
 if (VAR_10->prev < VAR_10->cur) {
  if (VAR_10->cur <= VAR_8) {
   FUNC_8(VAR_5, 0, VAR_3);
   FUNC_9(VAR_5, &VAR_9);
  } else {
   struct page *VAR_13;

   VAR_13 = FUNC_11(FUNC_6(&VAR_6));
   if (FUNC_0(VAR_13)) {




    void *VAR_14;

    VAR_14 = FUNC_3(VAR_13, VAR_2);
    FUNC_5(VAR_5, VAR_14, VAR_3);
    FUNC_4(VAR_14, VAR_2);
    VAR_10->buffer = VAR_5;
   } else {
    VAR_10->buffer = FUNC_10(VAR_13);
   }
  }
  VAR_10->prev = VAR_10->cur;
 }
 VAR_10->buf_offset = VAR_10->cur_offset;
 if (VAR_10->cur_offset + VAR_11 >= VAR_3) {
  VAR_11 = VAR_3 - VAR_10->cur_offset;
  VAR_10->cur_offset = 0;
  VAR_10->cur++;
 } else {
  VAR_10->cur_offset += VAR_11;
 }
 VAR_10->offset += VAR_11;
 return VAR_11;
}

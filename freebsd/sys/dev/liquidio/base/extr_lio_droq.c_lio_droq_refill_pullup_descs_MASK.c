
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
struct lio_droq_desc {scalar_t__ buffer_ptr; } ;
struct lio_droq {size_t refill_idx; size_t read_idx; int max_count; int refill_count; TYPE_1__* recv_buf_list; } ;
struct TYPE_2__ {int * buffer; int data; } ;


 void* FUNC_0 (size_t,int,int ) ;

__attribute__((used)) static inline uint32_t
FUNC_1(struct lio_droq *VAR_0,
        struct lio_droq_desc *VAR_1)
{
 uint32_t VAR_2 = 0;
 uint32_t VAR_3 = VAR_0->refill_idx;

 while (VAR_3 != VAR_0->read_idx) {
  if (VAR_0->recv_buf_list[VAR_3].buffer != ((void*)0)) {
   VAR_0->recv_buf_list[VAR_0->refill_idx].buffer =
    VAR_0->recv_buf_list[VAR_3].buffer;
   VAR_0->recv_buf_list[VAR_0->refill_idx].data =
    VAR_0->recv_buf_list[VAR_3].data;
   VAR_1[VAR_0->refill_idx].buffer_ptr =
    VAR_1[VAR_3].buffer_ptr;
   VAR_0->recv_buf_list[VAR_3].buffer = ((void*)0);
   VAR_1[VAR_3].buffer_ptr = 0;
   do {
    VAR_0->refill_idx =
     FUNC_0(VAR_0->refill_idx, 1,
             VAR_0->max_count);
    VAR_2++;
    VAR_0->refill_count--;
   } while (VAR_0->recv_buf_list[VAR_0->refill_idx].buffer !=
     ((void*)0));
  }
  VAR_3 = FUNC_0(VAR_3, 1, VAR_0->max_count);
 }
 return (VAR_2);
}

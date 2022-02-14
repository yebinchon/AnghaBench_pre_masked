
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef void* uint16_t ;
struct octeon_device {scalar_t__ octeon_id; } ;
struct lio_recv_pkt {size_t length; size_t* buffer_size; int ** buffer_ptr; void* octeon_id; void* buffer_count; int rh; } ;
struct lio_recv_info {struct lio_recv_pkt* recv_pkt; } ;
struct lio_droq_info {scalar_t__ length; int rh; } ;
struct lio_droq {size_t buffer_size; int max_count; TYPE_1__* recv_buf_list; } ;
struct __dispatch {int dummy; } ;
struct TYPE_2__ {int * buffer; scalar_t__ data; } ;


 struct lio_recv_info* FUNC_0 (int) ;
 size_t FUNC_1 (size_t,int,int ) ;

__attribute__((used)) static inline struct lio_recv_info *
FUNC_2(struct octeon_device *VAR_0, struct lio_droq *VAR_1,
       uint32_t VAR_2, uint32_t VAR_3)
{
 struct lio_droq_info *VAR_4;
 struct lio_recv_pkt *VAR_5;
 struct lio_recv_info *VAR_6;
 uint32_t VAR_7, VAR_8;

 VAR_4 = (struct lio_droq_info *)VAR_1->recv_buf_list[VAR_3].data;

 VAR_6 = FUNC_0(sizeof(struct __dispatch));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_5 = VAR_6->recv_pkt;
 VAR_5->rh = VAR_4->rh;
 VAR_5->length = (uint32_t)VAR_4->length;
 VAR_5->buffer_count = (uint16_t)VAR_2;
 VAR_5->octeon_id = (uint16_t)VAR_0->octeon_id;

 VAR_8 = 0;
 VAR_7 = (uint32_t)VAR_4->length;

 while (VAR_2) {
  VAR_5->buffer_size[VAR_8] = (VAR_7 >= VAR_1->buffer_size) ?
   VAR_1->buffer_size : VAR_7;

  VAR_5->buffer_ptr[VAR_8] = VAR_1->recv_buf_list[VAR_3].buffer;
  VAR_1->recv_buf_list[VAR_3].buffer = ((void*)0);

  VAR_3 = FUNC_1(VAR_3, 1, VAR_1->max_count);
  VAR_7 -= VAR_1->buffer_size;
  VAR_8++;
  VAR_2--;
 }

 return (VAR_6);
}

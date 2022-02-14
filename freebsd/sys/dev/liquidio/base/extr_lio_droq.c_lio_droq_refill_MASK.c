
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
typedef scalar_t__ uint32_t ;
struct octeon_device {int device; } ;
struct mbuf {int * m_data; } ;
struct lio_droq_desc {int buffer_ptr; } ;
struct TYPE_3__ {int rx_alloc_failure; } ;
struct lio_droq {scalar_t__ max_count; size_t refill_idx; scalar_t__ refill_count; int buffer_size; TYPE_2__* recv_buf_list; TYPE_1__ stats; struct lio_droq_desc* desc_ring; } ;
struct TYPE_4__ {int * buffer; int * data; } ;


 scalar_t__ FUNC_0 (struct lio_droq*,struct lio_droq_desc*) ;
 size_t FUNC_1 (size_t,int,scalar_t__) ;
 int FUNC_2 (int ,int *,int ) ;
 void* FUNC_3 (int ) ;

uint32_t
FUNC_4(struct octeon_device *VAR_0, struct lio_droq *VAR_1)
{
 struct lio_droq_desc *VAR_2;
 void *VAR_3 = ((void*)0);
 uint32_t VAR_4 = 0;
 uint8_t *VAR_5;

 VAR_2 = VAR_1->desc_ring;

 while (VAR_1->refill_count && (VAR_4 < VAR_1->max_count)) {





  if (VAR_1->recv_buf_list[VAR_1->refill_idx].buffer == ((void*)0)) {
   VAR_3 = FUNC_3(VAR_1->buffer_size);




   if (VAR_3 == ((void*)0)) {
    VAR_1->stats.rx_alloc_failure++;
    break;
   }

   VAR_1->recv_buf_list[VAR_1->refill_idx].buffer = VAR_3;
   VAR_5 = ((struct mbuf *)VAR_3)->m_data;
  } else {
   VAR_5 = ((struct mbuf *)VAR_1->recv_buf_list
    [VAR_1->refill_idx].buffer)->m_data;
  }

  VAR_1->recv_buf_list[VAR_1->refill_idx].data = VAR_5;

  VAR_2[VAR_1->refill_idx].buffer_ptr =
      FUNC_2(VAR_0->device,
     VAR_1->recv_buf_list[VAR_1->refill_idx].buffer,
     VAR_1->buffer_size);

  VAR_1->refill_idx = FUNC_1(VAR_1->refill_idx, 1,
        VAR_1->max_count);
  VAR_4++;
  VAR_1->refill_count--;
 }

 if (VAR_1->refill_count)
  VAR_4 += FUNC_0(VAR_1, VAR_2);







 return (VAR_4);
}

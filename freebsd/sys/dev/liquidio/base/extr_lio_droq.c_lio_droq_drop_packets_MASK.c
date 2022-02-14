
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uint32_t ;
struct octeon_device {int dummy; } ;
struct lio_droq_info {scalar_t__ length; } ;
struct TYPE_4__ {int bytes_received; } ;
struct lio_droq {size_t read_idx; scalar_t__ refill_count; int max_count; int buffer_size; TYPE_2__ stats; TYPE_1__* recv_buf_list; } ;
struct TYPE_3__ {scalar_t__ data; } ;


 int FUNC_0 (struct octeon_device*,char*) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 size_t FUNC_2 (size_t,scalar_t__,int ) ;
 int FUNC_3 (int *,int) ;

__attribute__((used)) static inline void
FUNC_4(struct octeon_device *VAR_0, struct lio_droq *VAR_1,
        uint32_t VAR_2)
{
 struct lio_droq_info *VAR_3;
 uint32_t VAR_4 = 0, VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_2; VAR_4++) {
  VAR_3 = (struct lio_droq_info *)
   VAR_1->recv_buf_list[VAR_1->read_idx].data;

  FUNC_3((uint64_t *)VAR_3, 2);

  if (VAR_3->length) {
   VAR_3->length += 8;
   VAR_1->stats.bytes_received += VAR_3->length;
   VAR_5 = FUNC_1(VAR_1->buffer_size,
       (uint32_t)VAR_3->length);
  } else {
   FUNC_0(VAR_0, "DROQ: In drop: pkt with len 0\n");
   VAR_5 = 1;
  }

  VAR_1->read_idx = FUNC_2(VAR_1->read_idx, VAR_5,
      VAR_1->max_count);
  VAR_1->refill_count += VAR_5;
 }
}

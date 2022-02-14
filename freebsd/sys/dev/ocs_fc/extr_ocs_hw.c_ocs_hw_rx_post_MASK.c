
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_8__ {size_t hw_rq_count; int seq_pool; TYPE_3__** hw_rq; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_9__ {int * payload; int * header; } ;
typedef TYPE_2__ ocs_hw_sequence_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ int32_t ;
struct TYPE_10__ {int entry_count; int * payload_buf; int * hdr_buf; } ;
typedef TYPE_3__ hw_rq_t ;


 TYPE_2__* FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (TYPE_1__*,TYPE_2__*) ;

ocs_hw_rtn_e
FUNC_3(ocs_hw_t *VAR_0)
{
 uint32_t VAR_1;
 uint32_t VAR_2;
 uint32_t VAR_3;
 int32_t VAR_4 = 0;





 for (VAR_3 = 0, VAR_2 = 0; VAR_3 < VAR_0->hw_rq_count; VAR_3++) {
  hw_rq_t *VAR_5 = VAR_0->hw_rq[VAR_3];

  for (VAR_1 = 0; VAR_1 < VAR_5->entry_count-1; VAR_1++) {
   ocs_hw_sequence_t *VAR_6 = FUNC_0(VAR_0->seq_pool, VAR_2++);
   FUNC_1(VAR_6 != ((void*)0));

   VAR_6->header = &VAR_5->hdr_buf[VAR_1];

   VAR_6->payload = &VAR_5->payload_buf[VAR_1];

   VAR_4 = FUNC_2(VAR_0, VAR_6);
   if (VAR_4) {
    break;
   }
  }
  if (VAR_4) {
   break;
  }
 }

 return VAR_4;
}

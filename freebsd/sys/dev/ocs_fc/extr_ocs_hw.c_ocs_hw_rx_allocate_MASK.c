
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef size_t uint32_t ;
typedef int ocs_t ;
struct TYPE_8__ {size_t rq_default_buffer_size; } ;
struct TYPE_11__ {size_t hw_rq_count; int * os; TYPE_5__** hw_rq; TYPE_1__ config; } ;
typedef TYPE_4__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;
typedef scalar_t__ int32_t ;
struct TYPE_12__ {int entry_count; TYPE_3__* data; int * payload_buf; TYPE_2__* hdr; int * hdr_buf; } ;
typedef TYPE_5__ hw_rq_t ;
struct TYPE_10__ {int id; } ;
struct TYPE_9__ {int id; } ;


 size_t VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 void* FUNC_0 (TYPE_4__*,size_t,int ,size_t) ;
 int FUNC_1 (int *,char*,size_t,int ,int ,size_t) ;
 int FUNC_2 (int *,char*) ;

ocs_hw_rtn_e
FUNC_3(ocs_hw_t *VAR_3)
{
 ocs_t *VAR_4 = VAR_3->os;
 uint32_t VAR_5;
 int32_t VAR_6 = VAR_2;
 uint32_t VAR_7 = 0;
 hw_rq_t *VAR_8;
 uint32_t VAR_9 = VAR_0;
 uint32_t VAR_10 = VAR_3->config.rq_default_buffer_size;

 VAR_7 = 0;

 for (VAR_5 = 0; VAR_5 < VAR_3->hw_rq_count; VAR_5++) {
  VAR_8 = VAR_3->hw_rq[VAR_5];


  VAR_8->hdr_buf = FUNC_0(VAR_3, VAR_7, VAR_8->entry_count, VAR_9);
  if (VAR_8->hdr_buf == ((void*)0)) {
   FUNC_2(VAR_4, "ocs_hw_rx_buffer_alloc hdr_buf failed\n");
   VAR_6 = VAR_1;
   break;
  }

  FUNC_1(VAR_3->os, "rq[%2d] rq_id %02d header  %4d by %4d bytes\n", VAR_5, VAR_8->hdr->id,
         VAR_8->entry_count, VAR_9);

  VAR_7++;


  VAR_8->payload_buf = FUNC_0(VAR_3, VAR_7, VAR_8->entry_count, VAR_10);
  if (VAR_8->payload_buf == ((void*)0)) {
   FUNC_2(VAR_4, "ocs_hw_rx_buffer_alloc fb_buf failed\n");
   VAR_6 = VAR_1;
   break;
  }
  FUNC_1(VAR_3->os, "rq[%2d] rq_id %02d default %4d by %4d bytes\n", VAR_5, VAR_8->data->id,
         VAR_8->entry_count, VAR_10);
  VAR_7++;
 }

 return VAR_6 ? VAR_1 : VAR_2;
}

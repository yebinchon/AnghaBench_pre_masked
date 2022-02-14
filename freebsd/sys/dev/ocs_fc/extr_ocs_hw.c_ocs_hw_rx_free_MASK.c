
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef size_t uint32_t ;
struct TYPE_5__ {size_t hw_rq_count; TYPE_2__** hw_rq; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_6__ {int * payload_buf; int entry_count; int * hdr_buf; } ;
typedef TYPE_2__ hw_rq_t ;


 int FUNC_0 (TYPE_1__*,int *,int ) ;

void
FUNC_1(ocs_hw_t *VAR_0)
{
 hw_rq_t *VAR_1;
 uint32_t VAR_2;


 for (VAR_2 = 0; VAR_2 < VAR_0->hw_rq_count; VAR_2++) {
  VAR_1 = VAR_0->hw_rq[VAR_2];
  if (VAR_1 != ((void*)0)) {
   FUNC_0(VAR_0, VAR_1->hdr_buf, VAR_1->entry_count);
   VAR_1->hdr_buf = ((void*)0);
   FUNC_0(VAR_0, VAR_1->payload_buf, VAR_1->entry_count);
   VAR_1->payload_buf = ((void*)0);
  }
 }
}

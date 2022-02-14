
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint32_t ;
typedef int ocs_t ;
struct TYPE_7__ {int * os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_8__ {int rqindex; int dma; } ;
typedef TYPE_2__ ocs_hw_rq_buffer_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,int *,int,int ) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;
 int FUNC_2 (int *,char*) ;
 TYPE_2__* FUNC_3 (int *,int,int) ;

__attribute__((used)) static ocs_hw_rq_buffer_t *
FUNC_4(ocs_hw_t *VAR_3, uint32_t VAR_4, uint32_t VAR_5, uint32_t VAR_6)
{
 ocs_t *VAR_7 = VAR_3->os;
 ocs_hw_rq_buffer_t *VAR_8 = ((void*)0);
 ocs_hw_rq_buffer_t *VAR_9;
 uint32_t VAR_10;

 if (VAR_5 != 0) {
  VAR_8 = FUNC_3(VAR_3->os, sizeof(*VAR_8) * VAR_5, VAR_1 | VAR_2);
  if (VAR_8 == ((void*)0)) {
   FUNC_2(VAR_3->os, "Failure to allocate unsolicited DMA trackers\n");
   return ((void*)0);
  }

  for (VAR_10 = 0, VAR_9 = VAR_8; VAR_10 < VAR_5; VAR_10 ++, VAR_9++) {
   VAR_9->rqindex = VAR_4;
   if (FUNC_0(VAR_7, &VAR_9->dma, VAR_6, VAR_0)) {
    FUNC_2(VAR_3->os, "DMA allocation failed\n");
    FUNC_1(VAR_3->os, VAR_8, sizeof(*VAR_8) * VAR_5);
    VAR_8 = ((void*)0);
    break;
   }
  }
 }
 return VAR_8;
}

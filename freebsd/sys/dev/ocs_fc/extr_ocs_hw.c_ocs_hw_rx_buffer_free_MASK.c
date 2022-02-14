
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef int ocs_t ;
struct TYPE_6__ {int * os; } ;
typedef TYPE_1__ ocs_hw_t ;
struct TYPE_7__ {int dma; } ;
typedef TYPE_2__ ocs_hw_rq_buffer_t ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *,TYPE_2__*,int) ;

__attribute__((used)) static void
FUNC_2(ocs_hw_t *VAR_0, ocs_hw_rq_buffer_t *VAR_1, uint32_t VAR_2)
{
 ocs_t *VAR_3 = VAR_0->os;
 uint32_t VAR_4;
 ocs_hw_rq_buffer_t *VAR_5;

 if (VAR_1 != ((void*)0)) {
  for (VAR_4 = 0, VAR_5 = VAR_1; VAR_4 < VAR_2; VAR_4++, VAR_5++) {
   FUNC_0(VAR_3, &VAR_5->dma);
  }
  FUNC_1(VAR_0->os, VAR_1, sizeof(*VAR_1) * VAR_2);
 }
}

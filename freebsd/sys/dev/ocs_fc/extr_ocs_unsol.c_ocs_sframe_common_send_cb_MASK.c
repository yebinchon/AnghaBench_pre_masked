
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ocs_hw_t ;
struct TYPE_2__ {int seq; int wqcb; int * hw; } ;
typedef TYPE_1__ ocs_hw_send_frame_context_t ;
typedef int int32_t ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ) ;

__attribute__((used)) static void
FUNC_2(void *VAR_0, uint8_t *VAR_1, int32_t VAR_2)
{
 ocs_hw_send_frame_context_t *VAR_3 = VAR_0;
 ocs_hw_t *VAR_4 = VAR_3->hw;


 FUNC_0(VAR_4, VAR_3->wqcb);


 FUNC_1(VAR_4, VAR_3->seq);
}

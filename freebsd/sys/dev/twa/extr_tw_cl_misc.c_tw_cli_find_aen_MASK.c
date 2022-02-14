
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tw_cli_ctlr_context {int aen_head; int max_aens_supported; TYPE_1__* aen_queue; scalar_t__ aen_q_wrapped; int ctlr_handle; } ;
struct TYPE_2__ {scalar_t__ aen_code; } ;
typedef int TW_UINT32 ;
typedef scalar_t__ TW_UINT16 ;
typedef int TW_INT32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int ,int ,char*) ;
 int FUNC_1 () ;

TW_INT32
FUNC_2(struct tw_cli_ctlr_context *VAR_2, TW_UINT16 VAR_3)
{
 TW_UINT32 VAR_4;
 TW_INT32 VAR_5;

 FUNC_0(4, VAR_2->ctlr_handle, FUNC_1(), "entered");

 if (VAR_2->aen_q_wrapped)
  VAR_4 = VAR_2->aen_head;
 else
  VAR_4 = 0;

 VAR_5 = VAR_2->aen_head;
 do {
  VAR_5 = (VAR_5 + VAR_2->max_aens_supported - 1) %
   VAR_2->max_aens_supported;
  if (VAR_2->aen_queue[VAR_5].aen_code == VAR_3)
   return(VAR_1);
 } while (VAR_5 != VAR_4);

 return(VAR_0);
}

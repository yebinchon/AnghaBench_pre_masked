
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_req_context {int link; struct tw_cli_ctlr_context* ctlr; } ;
struct tw_cli_ctlr_context {int gen_lock; int ctlr_handle; int * req_q_head; } ;
typedef int TW_VOID ;
typedef size_t TW_UINT8 ;


 int FUNC_0 (struct tw_cli_ctlr_context*,size_t) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;

__attribute__((used)) static __inline TW_VOID
FUNC_4(struct tw_cli_req_context *VAR_0, TW_UINT8 VAR_1)
{
 struct tw_cli_ctlr_context *VAR_2 = VAR_0->ctlr;

 FUNC_3(VAR_2->ctlr_handle, VAR_2->gen_lock);
 FUNC_1(&(VAR_2->req_q_head[VAR_1]), &(VAR_0->link));
 FUNC_0(VAR_2, VAR_1);
 FUNC_2(VAR_2->ctlr_handle, VAR_2->gen_lock);
}

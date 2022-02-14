
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_cli_ctlr_context {int * req_q_head; } ;
typedef int TW_VOID ;
typedef size_t TW_UINT8 ;


 int FUNC_0 (struct tw_cli_ctlr_context*,size_t) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static __inline TW_VOID
FUNC_2(struct tw_cli_ctlr_context *VAR_0, TW_UINT8 VAR_1)
{
 FUNC_1(&(VAR_0->req_q_head[VAR_1]));
 FUNC_0(VAR_0, VAR_1);
}

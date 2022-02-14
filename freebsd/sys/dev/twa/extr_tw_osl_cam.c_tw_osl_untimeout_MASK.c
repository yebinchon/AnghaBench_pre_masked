
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tw_osli_req_context {scalar_t__ deadline; } ;
struct tw_cl_req_handle {struct tw_osli_req_context* osl_req_ctxt; } ;
typedef int TW_VOID ;



TW_VOID
FUNC_0(struct tw_cl_req_handle *VAR_0)
{
 struct tw_osli_req_context *VAR_1 = VAR_0->osl_req_ctxt;

 VAR_1->deadline = 0;
}

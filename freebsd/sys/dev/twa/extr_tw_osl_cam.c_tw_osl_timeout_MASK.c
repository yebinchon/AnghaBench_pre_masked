
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccb_hdr {int timeout; } ;
union ccb {struct ccb_hdr ccb_h; } ;
struct tw_osli_req_context {scalar_t__ deadline; scalar_t__ orig_req; } ;
struct tw_cl_req_handle {struct tw_osli_req_context* osl_req_ctxt; } ;
typedef int TW_VOID ;


 scalar_t__ FUNC_0 () ;

TW_VOID
FUNC_1(struct tw_cl_req_handle *VAR_0)
{
 struct tw_osli_req_context *VAR_1 = VAR_0->osl_req_ctxt;
 union ccb *VAR_2 = (union ccb *)(VAR_1->orig_req);
 struct ccb_hdr *VAR_3 = &(VAR_2->ccb_h);

 VAR_1->deadline = FUNC_0() + (VAR_3->timeout / 1000);
}

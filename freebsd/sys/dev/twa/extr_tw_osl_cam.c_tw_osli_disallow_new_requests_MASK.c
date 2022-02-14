
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int status; } ;
union ccb {TYPE_1__ ccb_h; } ;
struct twa_softc {int sim; } ;
struct tw_osli_req_context {scalar_t__ orig_req; } ;
struct tw_cl_req_handle {struct tw_osli_req_context* osl_req_ctxt; scalar_t__ is_io; } ;
typedef int TW_VOID ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;

TW_VOID
FUNC_1(struct twa_softc *VAR_1,
 struct tw_cl_req_handle *VAR_2)
{

 if (VAR_2->is_io) {
  struct tw_osli_req_context *VAR_3 = VAR_2->osl_req_ctxt;
  union ccb *VAR_4 = (union ccb *)(VAR_3->orig_req);

  FUNC_0(VAR_1->sim, 1);
  VAR_4->ccb_h.status |= VAR_0;
 }
}

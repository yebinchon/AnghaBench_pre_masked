
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct twa_softc {int dummy; } ;
struct TYPE_2__ {scalar_t__ is_io; int * cl_req_ctxt; int * osl_req_ctxt; } ;
struct tw_osli_req_context {int req_pkt; int * orig_req; scalar_t__ error_code; scalar_t__ flags; int state; scalar_t__ real_length; int * real_data; scalar_t__ deadline; scalar_t__ length; int * data; TYPE_1__ req_handle; } ;
struct tw_cl_req_packet {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int) ;
 int FUNC_1 (int,struct twa_softc*,char*) ;
 struct tw_osli_req_context* FUNC_2 (struct twa_softc*,int ) ;

struct tw_osli_req_context *
FUNC_3(struct twa_softc *VAR_2)
{
 struct tw_osli_req_context *VAR_3;

 FUNC_1(4, VAR_2, "entered");


 VAR_3 = FUNC_2(VAR_2, VAR_0);


 if (VAR_3) {
  VAR_3->req_handle.osl_req_ctxt = ((void*)0);
  VAR_3->req_handle.cl_req_ctxt = ((void*)0);
  VAR_3->req_handle.is_io = 0;
  VAR_3->data = ((void*)0);
  VAR_3->length = 0;
  VAR_3->deadline = 0;
  VAR_3->real_data = ((void*)0);
  VAR_3->real_length = 0;
  VAR_3->state = VAR_1;
  VAR_3->flags = 0;
  VAR_3->error_code = 0;
  VAR_3->orig_req = ((void*)0);

  FUNC_0(&(VAR_3->req_pkt), sizeof(struct tw_cl_req_packet));

 }
 return(VAR_3);
}

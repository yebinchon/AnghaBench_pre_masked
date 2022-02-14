
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct comm_point {scalar_t__ type; scalar_t__ dnscrypt_buffer; scalar_t__ buffer; TYPE_3__* tcp_req_info; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;int tcp_do_close; scalar_t__ dnscrypt; TYPE_2__* tcp_parent; TYPE_1__* ev; } ;
struct TYPE_6__ {scalar_t__ read_again; } ;
struct TYPE_5__ {scalar_t__ dnscrypt; } ;
struct TYPE_4__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int,struct comm_point*,int ) ;
 int FUNC_1 (int,struct comm_point*) ;
 scalar_t__ VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (struct comm_point*) ;
 int FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 int FUNC_9 (struct comm_point*,int ,int ,int *) ;
 int FUNC_10 (struct comm_point*,int ,int ,int *) ;
 int FUNC_11 (struct comm_point*,int ,int ,int *) ;
 int FUNC_12 (struct comm_point*,int ,int ,int *) ;
 int FUNC_13 (int,struct comm_point*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*) ;

void
FUNC_16(int VAR_7, short VAR_8, void* VAR_9)
{
 struct comm_point* VAR_10 = (struct comm_point*)VAR_9;
 FUNC_4(VAR_10->type == VAR_6);
 FUNC_14(VAR_10->ev->base);
 if(VAR_8&VAR_3) {
  FUNC_15(VAR_5, "tcp took too long, dropped");
  FUNC_6(VAR_10);
  if(!VAR_10->tcp_do_close) {
   FUNC_2(FUNC_3(VAR_10->callback));
   (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
    VAR_1, ((void*)0));
  }
  return;
 }
 if(VAR_8&VAR_2) {
  int VAR_11 = (VAR_10->tcp_req_info != ((void*)0));
  if(!FUNC_0(VAR_7, VAR_10, 0)) {
   FUNC_6(VAR_10);
   if(!VAR_10->tcp_do_close) {
    FUNC_2(FUNC_3(
     VAR_10->callback));
    (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
     VAR_0, ((void*)0));
   }
  }
  if(VAR_11 && VAR_10->tcp_req_info && VAR_10->tcp_req_info->read_again)
   FUNC_13(VAR_7, VAR_10);
  return;
 }
 if(VAR_8&VAR_4) {
  int VAR_12 = (VAR_10->tcp_req_info != ((void*)0));
  if(!FUNC_1(VAR_7, VAR_10)) {
   FUNC_6(VAR_10);
   if(!VAR_10->tcp_do_close) {
    FUNC_2(FUNC_3(
     VAR_10->callback));
    (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
     VAR_0, ((void*)0));
   }
  }
  if(VAR_12 && VAR_10->tcp_req_info && VAR_10->tcp_req_info->read_again)
   FUNC_13(VAR_7, VAR_10);
  return;
 }
 FUNC_5("Ignored event %d for tcphdl.", VAR_8);
}

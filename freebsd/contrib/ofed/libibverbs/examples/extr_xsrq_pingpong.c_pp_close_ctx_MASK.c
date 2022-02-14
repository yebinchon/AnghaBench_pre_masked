
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int num_clients; scalar_t__ fd; TYPE_1__* recv_qp; TYPE_1__* send_qp; TYPE_1__* rem_dest; TYPE_1__* buf; int context; scalar_t__ channel; int pd; int mr; int recv_cq; int send_cq; scalar_t__ xrcd; int srq; } ;
struct TYPE_4__ {scalar_t__ sockfd; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_3__ VAR_0 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 scalar_t__ FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (TYPE_1__) ;
 scalar_t__ FUNC_10 (int ) ;
 int VAR_1 ;

__attribute__((used)) static int FUNC_11(void)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0.num_clients; ++VAR_2) {

  if (FUNC_9(VAR_0.send_qp[VAR_2])) {
   FUNC_1(VAR_1, "Couldn't destroy INI QP[%d]\n", VAR_2);
   return 1;
  }

  if (FUNC_9(VAR_0.recv_qp[VAR_2])) {
   FUNC_1(VAR_1, "Couldn't destroy TGT QP[%d]\n", VAR_2);
   return 1;
  }

  if (VAR_0.rem_dest[VAR_2].sockfd)
   FUNC_0(VAR_0.rem_dest[VAR_2].sockfd);
 }

 if (FUNC_10(VAR_0.srq)) {
  FUNC_1(VAR_1, "Couldn't destroy SRQ\n");
  return 1;
 }

 if (VAR_0.xrcd && FUNC_4(VAR_0.xrcd)) {
  FUNC_1(VAR_1, "Couldn't close the XRC Domain\n");
  return 1;
 }
 if (VAR_0.fd >= 0 && FUNC_0(VAR_0.fd)) {
  FUNC_1(VAR_1, "Couldn't close the file for the XRC Domain\n");
  return 1;
 }

 if (FUNC_8(VAR_0.send_cq)) {
  FUNC_1(VAR_1, "Couldn't destroy send CQ\n");
  return 1;
 }

 if (FUNC_8(VAR_0.recv_cq)) {
  FUNC_1(VAR_1, "Couldn't destroy recv CQ\n");
  return 1;
 }

 if (FUNC_6(VAR_0.mr)) {
  FUNC_1(VAR_1, "Couldn't deregister MR\n");
  return 1;
 }

 if (FUNC_5(VAR_0.pd)) {
  FUNC_1(VAR_1, "Couldn't deallocate PD\n");
  return 1;
 }

 if (VAR_0.channel) {
  if (FUNC_7(VAR_0.channel)) {
   FUNC_1(VAR_1,
    "Couldn't destroy completion channel\n");
   return 1;
  }
 }

 if (FUNC_3(VAR_0.context)) {
  FUNC_1(VAR_1, "Couldn't release context\n");
  return 1;
 }

 FUNC_2(VAR_0.buf);
 FUNC_2(VAR_0.rem_dest);
 FUNC_2(VAR_0.send_qp);
 FUNC_2(VAR_0.recv_qp);
 return 0;
}

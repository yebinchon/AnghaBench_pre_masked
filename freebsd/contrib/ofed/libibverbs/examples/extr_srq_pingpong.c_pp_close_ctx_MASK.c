
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pingpong_context {struct pingpong_context* buf; int context; scalar_t__ channel; int pd; int mr; int cq; int srq; int * qp; } ;


 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct pingpong_context*) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int ) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_9(struct pingpong_context *VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  if (FUNC_7(VAR_1->qp[VAR_3])) {
   FUNC_0(VAR_0, "Couldn't destroy QP[%d]\n", VAR_3);
   return 1;
  }
 }

 if (FUNC_8(VAR_1->srq)) {
  FUNC_0(VAR_0, "Couldn't destroy SRQ\n");
  return 1;
 }

 if (FUNC_6(VAR_1->cq)) {
  FUNC_0(VAR_0, "Couldn't destroy CQ\n");
  return 1;
 }

 if (FUNC_4(VAR_1->mr)) {
  FUNC_0(VAR_0, "Couldn't deregister MR\n");
  return 1;
 }

 if (FUNC_3(VAR_1->pd)) {
  FUNC_0(VAR_0, "Couldn't deallocate PD\n");
  return 1;
 }

 if (VAR_1->channel) {
  if (FUNC_5(VAR_1->channel)) {
   FUNC_0(VAR_0, "Couldn't destroy completion channel\n");
   return 1;
  }
 }

 if (FUNC_2(VAR_1->context)) {
  FUNC_0(VAR_0, "Couldn't release context\n");
  return 1;
 }

 FUNC_1(VAR_1->buf);
 FUNC_1(VAR_1);

 return 0;
}

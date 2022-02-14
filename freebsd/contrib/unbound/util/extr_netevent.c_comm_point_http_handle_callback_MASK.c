
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {scalar_t__ type; int cb_arg; int (* callback ) (struct comm_point*,int ,int ,int *) ;int tcp_do_close; TYPE_1__* ev; } ;
struct TYPE_2__ {int base; } ;


 int VAR_0 ;
 int VAR_1 ;
 short VAR_2 ;
 short VAR_3 ;
 short VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int,struct comm_point*) ;
 int FUNC_1 (int,struct comm_point*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int (*) (struct comm_point*,int ,int ,int *)) ;
 int FUNC_4 (int) ;
 int FUNC_5 (char*,short) ;
 int FUNC_6 (struct comm_point*) ;
 int FUNC_7 (struct comm_point*,int ,int ,int *) ;
 int FUNC_8 (struct comm_point*,int ,int ,int *) ;
 int FUNC_9 (struct comm_point*,int ,int ,int *) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*) ;

void
FUNC_12(int VAR_7, short VAR_8, void* VAR_9)
{
 struct comm_point* VAR_10 = (struct comm_point*)VAR_9;
 FUNC_4(VAR_10->type == VAR_6);
 FUNC_10(VAR_10->ev->base);

 if(VAR_8&VAR_3) {
  FUNC_11(VAR_5, "http took too long, dropped");
  FUNC_6(VAR_10);
  if(!VAR_10->tcp_do_close) {
   FUNC_2(FUNC_3(VAR_10->callback));
   (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
    VAR_1, ((void*)0));
  }
  return;
 }
 if(VAR_8&VAR_2) {
  if(!FUNC_0(VAR_7, VAR_10)) {
   FUNC_6(VAR_10);
   if(!VAR_10->tcp_do_close) {
    FUNC_2(FUNC_3(
     VAR_10->callback));
    (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
     VAR_0, ((void*)0));
   }
  }
  return;
 }
 if(VAR_8&VAR_4) {
  if(!FUNC_1(VAR_7, VAR_10)) {
   FUNC_6(VAR_10);
   if(!VAR_10->tcp_do_close) {
    FUNC_2(FUNC_3(
     VAR_10->callback));
    (void)(*VAR_10->callback)(VAR_10, VAR_10->cb_arg,
     VAR_0, ((void*)0));
   }
  }
  return;
 }
 FUNC_5("Ignored event %d for httphdl.", VAR_8);
}

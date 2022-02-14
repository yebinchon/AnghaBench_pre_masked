
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u_int ;
struct event {int dummy; } ;
struct TYPE_4__ {int resp_read_pipe; struct event* resp_read_ctx; } ;
typedef TYPE_1__ blocking_child ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__** VAR_4 ;
 size_t VAR_5 ;
 int FUNC_0 (struct event*,int *) ;
 int FUNC_1 (struct event*) ;
 int FUNC_2 (struct event*) ;
 struct event* FUNC_3 (int ,int,int,int *,TYPE_1__*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,char*) ;
 int VAR_6 ;

void FUNC_6(
 int VAR_7,
 int VAR_8,
 int VAR_9
 )
{
 u_int VAR_10;
 blocking_child *VAR_11;
 struct event * VAR_12;
 VAR_11 = ((void*)0);
 for (VAR_10 = 0; VAR_10 < VAR_5; VAR_10++) {
  VAR_11 = VAR_4[VAR_10];
  if (((void*)0) == VAR_11)
   continue;
  if (VAR_7 == VAR_11->resp_read_pipe)
   break;
 }
 if (VAR_10 == VAR_5)
  return;

 if (VAR_9) {
  VAR_12 = VAR_11->resp_read_ctx;
  VAR_11->resp_read_ctx = ((void*)0);
  FUNC_1(VAR_12);
  FUNC_2(VAR_12);

  return;
 }

 VAR_12 = FUNC_3(VAR_3, VAR_7, VAR_1 | VAR_0,
         &VAR_6, VAR_11);
 if (((void*)0) == VAR_12) {
  FUNC_5(VAR_2,
   "sntp_addremove_fd: event_new(base, fd) failed!");
  return;
 }
 VAR_11->resp_read_ctx = VAR_12;
 FUNC_0(VAR_12, ((void*)0));
}

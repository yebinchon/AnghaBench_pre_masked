
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct timeval {int tv_sec; int tv_usec; } ;
struct sockaddr_storage {int dummy; } ;
struct sockaddr {int dummy; } ;
struct comm_point {scalar_t__ type; int tcl_addr; scalar_t__ tcp_conn_limit; TYPE_2__* ev; int fd; } ;
struct comm_base {TYPE_1__* eb; int cb_arg; int (* stop_accept ) (int ) ;} ;
typedef scalar_t__ socklen_t ;
struct TYPE_4__ {int ev; struct comm_base* base; } ;
struct TYPE_3__ {int slow_accept_enabled; int * slow_accept; int base; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (int ,struct sockaddr*,scalar_t__*) ;
 int FUNC_2 (int ,struct sockaddr*,scalar_t__*,int ) ;
 int FUNC_3 (int) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int (*) (int )) ;
 int FUNC_7 (char*,char*,struct sockaddr_storage*,scalar_t__) ;
 char* FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (scalar_t__,struct sockaddr_storage*,scalar_t__) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int *,struct timeval*) ;
 int * FUNC_13 (int ,int,int ,int ,struct comm_base*) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,char*) ;
 int VAR_18 ;
 char* FUNC_16 (scalar_t__) ;

int FUNC_17(struct comm_point* VAR_19,
 struct sockaddr_storage* VAR_20, socklen_t* VAR_21)
{
 int VAR_22;
 *VAR_21 = (socklen_t)sizeof(*VAR_20);

 VAR_22 = FUNC_1(VAR_19->fd, (struct sockaddr*)VAR_20, VAR_21);




 if(VAR_22 == -1) {


  if( VAR_17 == VAR_2 || VAR_17 == VAR_0
   )
   return -1;
  FUNC_7("accept failed", FUNC_8(VAR_17), VAR_20, *VAR_21);
  return -1;
 }
 if(VAR_19->tcp_conn_limit && VAR_19->type == VAR_16) {
  VAR_19->tcl_addr = FUNC_10(VAR_19->tcp_conn_limit, VAR_20, *VAR_21);
  if(!FUNC_11(VAR_19->tcl_addr)) {
   if(VAR_18 >= 3)
    FUNC_7("accept rejected",
    "connection limit exceeded", VAR_20, *VAR_21);
   FUNC_3(VAR_22);
   return -1;
  }
 }

 FUNC_4(VAR_22);

 return VAR_22;
}

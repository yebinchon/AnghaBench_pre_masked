
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {int fd; scalar_t__ type; TYPE_1__* ev; int do_not_close; scalar_t__ tcp_req_info; int tcl_addr; } ;
struct TYPE_2__ {int ev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ,char*,int) ;

void
FUNC_8(struct comm_point* VAR_5)
{
 if(!VAR_5)
  return;
 if(VAR_5->fd != -1) {
  if(FUNC_5(VAR_5->ev->ev) != 0) {
   FUNC_2("could not event_del on close");
  }
 }
 FUNC_3(VAR_5->tcl_addr);
 if(VAR_5->tcp_req_info)
  FUNC_4(VAR_5->tcp_req_info);

 if(VAR_5->fd != -1 && !VAR_5->do_not_close) {
  if(VAR_5->type == VAR_4 || VAR_5->type == VAR_3) {

   FUNC_6(VAR_5->ev->ev, VAR_0);
   FUNC_6(VAR_5->ev->ev, VAR_1);
  }
  FUNC_7(VAR_2, "close fd %d", VAR_5->fd);

  FUNC_0(VAR_5->fd);



 }
 VAR_5->fd = -1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {int timeout; TYPE_1__* ev; int fd; } ;
struct TYPE_2__ {int ev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,char*,int ,int) ;

void FUNC_6(struct comm_point* VAR_3, int VAR_4, int VAR_5)
{
 FUNC_5(VAR_2, "comm point listen_for_rw %d %d", VAR_3->fd, VAR_5);
 if(FUNC_3(VAR_3->ev->ev) != 0) {
  FUNC_0("event_del error to cplf");
 }
 FUNC_4(VAR_3->ev->ev, VAR_0|VAR_1);
 if(VAR_4) FUNC_2(VAR_3->ev->ev, VAR_0);
 if(VAR_5) FUNC_2(VAR_3->ev->ev, VAR_1);
 if(FUNC_1(VAR_3->ev->ev, VAR_3->timeout) != 0) {
  FUNC_0("event_add failed. in cplf.");
 }
}

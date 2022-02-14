
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct comm_point {TYPE_1__* ev; int fd; } ;
struct TYPE_2__ {int ev; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,int ) ;

void
FUNC_3(struct comm_point* VAR_1)
{
 FUNC_2(VAR_0, "comm point stop listening %d", VAR_1->fd);
 if(FUNC_1(VAR_1->ev->ev) != 0) {
  FUNC_0("event_del error to stoplisten");
 }
}

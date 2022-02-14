
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccconn {TYPE_1__* cc; int * port; } ;
struct TYPE_2__ {int orphaned_conns; } ;


 int FUNC_0 (int *,struct ccconn*,int ) ;
 int FUNC_1 (struct ccconn*,int ) ;
 int FUNC_2 (struct ccconn*,char*,char*) ;
 int VAR_0 ;

void
FUNC_3(struct ccconn *VAR_1)
{

 if (VAR_1->port == ((void*)0)) {
  FUNC_2(VAR_1, "conn not on any %s", "port");
  return;
 }
 FUNC_1(VAR_1, VAR_0);
 VAR_1->port = ((void*)0);
 FUNC_0(&VAR_1->cc->orphaned_conns, VAR_1, VAR_0);
}

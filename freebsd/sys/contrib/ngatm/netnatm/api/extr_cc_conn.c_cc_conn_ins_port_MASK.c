
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int port; } ;
struct ccport {int conn_list; TYPE_1__ param; } ;
struct ccconn {struct ccport* port; } ;


 int FUNC_0 (int *,struct ccconn*,int ) ;
 int FUNC_1 (struct ccconn*,int ) ;
 int FUNC_2 (struct ccconn*,char*,int ) ;
 int FUNC_3 (struct ccconn*) ;
 int VAR_0 ;

void
FUNC_4(struct ccconn *VAR_1, struct ccport *VAR_2)
{

 if (VAR_1->port != ((void*)0)) {
  FUNC_2(VAR_1, "conn is already on port %u",
      VAR_1->port->param.port);
  FUNC_3(VAR_1);
 }
 FUNC_1(VAR_1, VAR_0);

 VAR_1->port = VAR_2;
 FUNC_0(&VAR_2->conn_list, VAR_1, VAR_0);

}

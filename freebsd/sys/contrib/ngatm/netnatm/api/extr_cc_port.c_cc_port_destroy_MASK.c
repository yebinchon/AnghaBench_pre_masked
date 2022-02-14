
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccreq {int addr_list; int conn_list; int cookies; TYPE_1__* cc; } ;
struct ccport {int addr_list; int conn_list; int cookies; TYPE_1__* cc; } ;
struct ccaddr {int addr_list; int conn_list; int cookies; TYPE_1__* cc; } ;
struct TYPE_2__ {int port_list; } ;


 int FUNC_0 (struct ccreq*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct ccreq* FUNC_3 (int *) ;
 int FUNC_4 (int *,struct ccreq*,int ) ;
 int FUNC_5 (int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void
FUNC_6(struct ccport *VAR_3, int VAR_4)
{
 struct ccaddr *VAR_5;
 struct ccreq *VAR_6;

 FUNC_4(&VAR_3->cc->port_list, VAR_3, VAR_1);

 while ((VAR_6 = FUNC_3(&VAR_3->cookies)) != ((void*)0)) {
  FUNC_4(&VAR_3->cookies, VAR_6, VAR_0);
  FUNC_0(VAR_6);
 }




 while (!FUNC_1(&VAR_3->conn_list))
  FUNC_5(FUNC_2(&VAR_3->conn_list), VAR_4);




 while ((VAR_5 = FUNC_3(&VAR_3->addr_list)) != ((void*)0)) {
  FUNC_4(&VAR_3->addr_list, VAR_5, VAR_2);
  FUNC_0(VAR_5);
 }

 FUNC_0(VAR_3);
}

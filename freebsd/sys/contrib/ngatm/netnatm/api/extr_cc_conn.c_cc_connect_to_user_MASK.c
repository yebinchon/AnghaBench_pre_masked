
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccuser {int queue_act; int connq; } ;
struct ccconn {struct ccuser* user; } ;


 int FUNC_0 (int *,struct ccconn*,int ) ;
 int FUNC_1 (struct ccconn*,char*,struct ccuser*) ;
 int VAR_0 ;

void
FUNC_2(struct ccconn *VAR_1, struct ccuser *VAR_2)
{

 if (VAR_1->user != ((void*)0))
  FUNC_1(VAR_1, "still connected to %p", VAR_1->user);
 VAR_1->user = VAR_2;
 FUNC_0(&VAR_2->connq, VAR_1, VAR_0);
 VAR_1->user->queue_act++;
}

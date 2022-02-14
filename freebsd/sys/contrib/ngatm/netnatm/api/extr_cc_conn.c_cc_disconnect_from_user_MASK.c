
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ccconn {TYPE_1__* user; } ;
struct TYPE_2__ {int queue_act; int connq; } ;


 int FUNC_0 (int *,struct ccconn*,int ) ;
 int FUNC_1 (struct ccconn*,char*,char*) ;
 int VAR_0 ;

void
FUNC_2(struct ccconn *VAR_1)
{

 if (VAR_1->user == ((void*)0))
  FUNC_1(VAR_1, "no %s", "user");
 else {
  FUNC_0(&VAR_1->user->connq, VAR_1, VAR_0);
  VAR_1->user->queue_act--;
  VAR_1->user = ((void*)0);
 }
}

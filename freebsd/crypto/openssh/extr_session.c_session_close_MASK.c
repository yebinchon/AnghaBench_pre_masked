
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_6__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef size_t u_int ;
struct ssh {int dummy; } ;
struct TYPE_9__ {struct TYPE_9__* val; struct TYPE_9__* name; } ;
struct TYPE_8__ {int ttyfd; size_t num_env; int self; TYPE_6__* env; TYPE_6__* subsys; TYPE_6__* auth_proto; TYPE_6__* auth_data; TYPE_6__* auth_display; TYPE_6__* x11_chanids; TYPE_6__* display; TYPE_6__* term; TYPE_1__* pw; } ;
struct TYPE_7__ {int pw_name; } ;
typedef TYPE_2__ Session ;


 int FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct ssh*) ;
 int FUNC_5 (struct ssh*) ;
 int FUNC_6 (char*,int ,int ,int ,int ) ;

void
FUNC_7(struct ssh *VAR_0, Session *VAR_1)
{
 u_int VAR_2;

 FUNC_6("Close session: user %s from %.200s port %d id %d",
     VAR_1->pw->pw_name,
     FUNC_4(VAR_0),
     FUNC_5(VAR_0),
     VAR_1->self);

 if (VAR_1->ttyfd != -1)
  FUNC_2(VAR_1);
 FUNC_0(VAR_1->term);
 FUNC_0(VAR_1->display);
 FUNC_0(VAR_1->x11_chanids);
 FUNC_0(VAR_1->auth_display);
 FUNC_0(VAR_1->auth_data);
 FUNC_0(VAR_1->auth_proto);
 FUNC_0(VAR_1->subsys);
 if (VAR_1->env != ((void*)0)) {
  for (VAR_2 = 0; VAR_2 < VAR_1->num_env; VAR_2++) {
   FUNC_0(VAR_1->env[VAR_2].name);
   FUNC_0(VAR_1->env[VAR_2].val);
  }
  FUNC_0(VAR_1->env);
 }
 FUNC_1(VAR_1);
 FUNC_3(VAR_1->self);
}

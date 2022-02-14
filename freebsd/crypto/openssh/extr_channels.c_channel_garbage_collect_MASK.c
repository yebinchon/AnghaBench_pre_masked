
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct ssh {int dummy; } ;
struct TYPE_5__ {int detach_close; int self; int (* detach_user ) (struct ssh*,int ,int *) ;} ;
typedef TYPE_1__ Channel ;


 int FUNC_0 (struct ssh*,TYPE_1__*,int) ;
 int FUNC_1 (struct ssh*,TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;
 int FUNC_3 (struct ssh*,int ,int *) ;

__attribute__((used)) static void
FUNC_4(struct ssh *VAR_0, Channel *VAR_1)
{
 if (VAR_1 == ((void*)0))
  return;
 if (VAR_1->detach_user != ((void*)0)) {
  if (!FUNC_0(VAR_0, VAR_1, VAR_1->detach_close))
   return;
  FUNC_2("channel %d: gc: notify user", VAR_1->self);
  VAR_1->detach_user(VAR_0, VAR_1->self, ((void*)0));

  if (VAR_1->detach_user != ((void*)0))
   return;
  FUNC_2("channel %d: gc: user detached", VAR_1->self);
 }
 if (!FUNC_0(VAR_0, VAR_1, 1))
  return;
 FUNC_2("channel %d: garbage collecting", VAR_1->self);
 FUNC_1(VAR_0, VAR_1);
}

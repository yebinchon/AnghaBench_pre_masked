
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct svc_serv {struct svc_program* sv_program; } ;
struct svc_program {unsigned int pg_nvers; int pg_name; int pg_prog; TYPE_1__** pg_vers; struct svc_program* pg_next; } ;
struct TYPE_6__ {TYPE_2__* sighand; } ;
struct TYPE_5__ {int siglock; } ;
struct TYPE_4__ {scalar_t__ vs_hidden; } ;


 int VAR_0 ;
 int FUNC_0 (int ,unsigned int,int ) ;
 int FUNC_1 (int ) ;
 TYPE_3__* VAR_1 ;
 int FUNC_2 (char*,int ,unsigned int) ;
 int FUNC_3 () ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_6(const struct svc_serv *VAR_2)
{
 struct svc_program *VAR_3;
 unsigned long VAR_4;
 unsigned int VAR_5;

 FUNC_1(VAR_0);

 for (VAR_3 = VAR_2->sv_program; VAR_3; VAR_3 = VAR_3->pg_next) {
  for (VAR_5 = 0; VAR_5 < VAR_3->pg_nvers; VAR_5++) {
   if (VAR_3->pg_vers[VAR_5] == ((void*)0))
    continue;
   if (VAR_3->pg_vers[VAR_5]->vs_hidden)
    continue;

   FUNC_2("svc: attempting to unregister %sv%u\n",
    VAR_3->pg_name, VAR_5);
   FUNC_0(VAR_3->pg_prog, VAR_5, VAR_3->pg_name);
  }
 }

 FUNC_4(&VAR_1->sighand->siglock, VAR_4);
 FUNC_3();
 FUNC_5(&VAR_1->sighand->siglock, VAR_4);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u_int ;
struct gctl_req {size_t narg; TYPE_1__* arg; int serror; } ;
struct TYPE_2__ {int flag; scalar_t__ len; struct TYPE_2__* kvalue; struct TYPE_2__* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(struct gctl_req *VAR_2)
{
 u_int VAR_3;

 FUNC_1(VAR_2->serror);
 if (VAR_2->arg == ((void*)0))
  return;
 for (VAR_3 = 0; VAR_3 < VAR_2->narg; VAR_3++) {
  if (VAR_2->arg[VAR_3].flag & VAR_0)
   FUNC_0(VAR_2->arg[VAR_3].name);
  if ((VAR_2->arg[VAR_3].flag & VAR_1) &&
      VAR_2->arg[VAR_3].len > 0)
   FUNC_0(VAR_2->arg[VAR_3].kvalue);
 }
 FUNC_0(VAR_2->arg);
}
